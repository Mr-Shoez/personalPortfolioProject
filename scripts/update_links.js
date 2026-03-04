const fs = require('fs');
const path = require('path');

const projectDir = path.join(__dirname, '..');
const filesToProcess = [
    'index.html',
    'about.html',
    '404.html',
    'scripts/blog-template.html',
    'scripts/project-template.html',
];

const cssReplacements = ['style', 'about', 'project', 'blog', 'blog-post'];
const jsReplacements = ['index', 'about', 'theme'];

filesToProcess.forEach(file => {
    const fullPath = path.join(projectDir, file);
    if (!fs.existsSync(fullPath)) return;
    
    let content = fs.readFileSync(fullPath, 'utf8');
    
    cssReplacements.forEach(name => {
        // relative paths
        const regex = new RegExp(`href=["']\\/?css\\/(?:min\\/)?${name}\\.(?:min\\.)?css["']`, 'g');
        content = content.replace(regex, `href="css/min/${name}.min.css"`);
        // absolute paths
        const regexSlash = new RegExp(`href=["']\\/css\\/(?:min\\/)?${name}\\.(?:min\\.)?css["']`, 'g');
        content = content.replace(regexSlash, `href="/css/min/${name}.min.css"`);
    });
    
    jsReplacements.forEach(name => {
        // relative paths
        const regex = new RegExp(`src=["']\\/?js\\/(?:min\\/)?${name}\\.(?:min\\.)?js["']`, 'g');
        content = content.replace(regex, `src="js/min/${name}.min.js"`);
        // absolute paths
        const regexSlash = new RegExp(`src=["']\\/js\\/(?:min\\/)?${name}\\.(?:min\\.)?js["']`, 'g');
        content = content.replace(regexSlash, `src="/js/min/${name}.min.js"`);
    });
    
    fs.writeFileSync(fullPath, content, 'utf8');
    console.log(`Updated links in ${file}`);
});
