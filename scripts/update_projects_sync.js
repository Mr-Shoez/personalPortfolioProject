const fs = require('fs');
const path = require('path');
const dataPath = path.join(__dirname, '../data/projects.json');
try {
    let raw = fs.readFileSync(dataPath, 'utf8');
    let projects = JSON.parse(raw);
    projects.forEach((p, idx) => {
        // Add a placeholder video URL. The user can change this later.
        p.desktopVideoUrl = "https://www.w3schools.com/html/mov_bbb.mp4"; 
    });
    fs.writeFileSync(dataPath, JSON.stringify(projects, null, 4), 'utf8');
    console.log("Updated projects.json with desktopVideoUrl.");
} catch(e) {
    console.error(e);
}
