const fs = require('fs');
const path = require('path');

const projectDir = path.join(__dirname, '..');
const filesToProcess = [
    'index.html',
    'about.html',
    '404.html',
    'scripts/blog-template.html',
    'scripts/project-template.html',
    'scripts/build.js'
];

filesToProcess.forEach(file => {
    const fullPath = path.join(projectDir, file);
    if (!fs.existsSync(fullPath)) return;
    
    let content = fs.readFileSync(fullPath, 'utf8');
    
    // Replace .css" or .css' with .min.css" or .min.css' (avoiding .min.min.css)
    content = content.replace(/(?<!\.min)\.css(['"])/g, '.min.css$1');
    
    // Replace .js" or .js' with .min.js" or .min.js'
    content = content.replace(/(?<!\.min)\.js(['"])/g, '.min.js$1');
    
    // In build.js we don't want to replace the string replacements inside logic 
    // BUT we already fixed build.js minification logic earlier. 
    // Wait, build.js has logic like replace(/\.css$/) !
    // Let's only replace inside html or quotes if it follows css/ or js/
    // Actually, a safer regex for HTML and build.js injected HTML:
    
    content = content.replace(/href=(["'])([^"']*\/css\/[^"']+(?<!\.min))\.css\1/g, 'href=$1$2.min.css$1');
    content = content.replace(/href=(["'])(css\/[^"']+(?<!\.min))\.css\1/g, 'href=$1$2.min.css$1');
    content = content.replace(/src=(["'])([^"']*\/js\/[^"']+(?<!\.min))\.js\1/g, 'src=$1$2.min.js$1');
    content = content.replace(/src=(["'])(js\/[^"']+(?<!\.min))\.js\1/g, 'src=$1$2.min.js$1');
    
    fs.writeFileSync(fullPath, content, 'utf8');
    console.log(`Updated links in ${file}`);
});
