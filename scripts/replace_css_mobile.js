const fs = require('fs');
let f = fs.readFileSync('css/style.css', 'utf8');

const start = f.indexOf('  .bento-grid {\r\n    grid-template-columns: 1fr;');
if (start === -1) {
    // Try different line endings
    const start2 = f.indexOf('  .bento-grid {\n    grid-template-columns: 1fr;');
    if (start2 > -1) {
        let end = f.indexOf('  }', f.indexOf('.bento-8 {', start2));
        if (end > -1) {
            const newRes = `  .projects-stack {
    gap: 20px;
  }
  .project-row {
    flex-direction: column;
    min-height: auto;
  }
  .project-row-img-container {
    height: 250px;
    flex: none;
  }
  .project-row-content {
    padding: 25px;
    background: transparent;
    border-left: none;
    border-top: 1px solid var(--glass-border, rgba(255, 255, 255, 0.05));
  }
  .project-row-title {
    font-size: 1.6rem;
  }
  .project-row-actions {
    flex-direction: column;
  }
  .project-row-btn {
    width: 100%;
    justify-content: center;
  }`;
            fs.writeFileSync('css/style.css', f.substring(0, start2) + newRes + f.substring(end + 3));
            console.log('Mobile bento CSS replaced.', start2, end);
            process.exit(0);
        }
    }
}

// Manual search
let lines = f.split(/\r?\n/);
let inMedia = false;
let startIdx = -1;
let endIdx = -1;
for (let i = 0; i < lines.length; i++) {
   if (lines[i].includes('@media (max-width: 768px)')) {
       inMedia = true;
   }
   if (inMedia && lines[i].includes('.bento-grid {')) {
       startIdx = i;
   }
   if (inMedia && startIdx > -1 && lines[i].includes('.bento-8 {')) {
       // find next closing brace
       for (let j = i; j < lines.length; j++) {
           if (lines[j].includes('}')) {
               endIdx = j;
               break;
           }
       }
       break;
   }
}

if (startIdx > -1 && endIdx > -1) {
    const newRes = `  .projects-stack {
    gap: 20px;
  }
  .project-row {
    flex-direction: column;
    min-height: auto;
  }
  .project-row-img-container {
    height: 250px;
    flex: none;
  }
  .project-row-content {
    padding: 25px;
    background: transparent;
    border-left: none;
    border-top: 1px solid var(--glass-border, rgba(255, 255, 255, 0.05));
  }
  .project-row-title {
    font-size: 1.6rem;
  }
  .project-row-actions {
    flex-direction: column;
  }
  .project-row-btn {
    width: 100%;
    justify-content: center;
  }`;
    lines.splice(startIdx, endIdx - startIdx + 1, newRes);
    fs.writeFileSync('css/style.css', lines.join('\n'));
    console.log('Mobile bento CSS replaced by line idx.');
} else {
    console.log('Could not find mobile bento CSS.');
}
