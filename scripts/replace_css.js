const fs = require('fs');
let f = fs.readFileSync('css/style.css', 'utf8');

const start = f.indexOf('.bento-grid {');
const end = f.indexOf('/* ==========================================================================\n   PROJECT DETAILS MODAL');

if (start > -1 && end > -1) {
    const newCSS = `/* ==========================================================================
   PROJECTS ROW LAYOUT
   ========================================================================== */
.projects-stack {
  display: flex;
  flex-direction: column;
  gap: 40px;
  width: 100%;
  max-width: 1100px;
  margin: 0 auto;
}
.project-row {
  display: flex;
  background: var(--glass-bg, rgba(255, 255, 255, 0.03));
  border: 1px solid var(--glass-border, rgba(255, 255, 255, 0.05));
  border-radius: 20px;
  overflow: hidden;
  transition: transform 0.3s cubic-bezier(0.2, 0.8, 0.2, 1), box-shadow 0.3s ease;
  min-height: 380px;
}
.project-row:hover {
  transform: translateY(-5px);
  box-shadow: 0 15px 30px rgba(0, 0, 0, 0.3);
}
.project-row-img-container {
  flex: 1 1 50%;
  position: relative;
  overflow: hidden;
  background: rgba(0,0,0,0.2);
}
.project-row-img, .project-row-video {
  width: 100%;
  height: 100%;
  object-fit: cover;
  position: absolute;
  top: 0;
  left: 0;
  transition: opacity 0.4s ease, transform 0.5s ease;
}
.project-row-video {
  opacity: 0;
  pointer-events: none;
}
.project-row:hover .project-row-img {
  transform: scale(1.03);
}
.project-row-content {
  flex: 1 1 50%;
  padding: 40px;
  display: flex;
  flex-direction: column;
  justify-content: center;
  z-index: 2;
  border-left: 1px solid var(--glass-border, rgba(255, 255, 255, 0.05));
}
.project-row-title {
  font-size: 2.2rem;
  font-weight: 700;
  color: var(--text-light, #fff);
  margin: 0 0 15px 0;
}
.project-row-meta {
  display: flex;
  align-items: center;
  flex-wrap: wrap;
  gap: 15px;
  margin-bottom: 25px;
}
.project-row-tech {
  display: flex;
  gap: 8px;
  flex-wrap: wrap;
}
.project-row-pill {
  padding: 6px 14px;
  font-size: 0.8rem;
  background: rgba(255, 255, 255, 0.05);
  border-radius: 20px;
  color: #ddd;
  border: 1px solid rgba(255, 255, 255, 0.1);
}
.project-row-category {
  font-size: 0.85rem;
  color: var(--accent-primary, #008cff);
  text-transform: uppercase;
  letter-spacing: 1px;
  font-weight: 600;
}
.project-row-desc {
  font-size: 1.05rem;
  line-height: 1.7;
  color: var(--text-muted, #aaa);
  margin: 0 0 35px 0;
  flex-grow: 1;
}
.project-row-actions {
  display: flex;
  gap: 15px;
}
.project-row-btn {
  display: inline-flex;
  align-items: center;
  gap: 8px;
  padding: 12px 24px;
  border-radius: 50px;
  font-size: 0.95rem;
  font-weight: 600;
  text-decoration: none;
  transition: all 0.3s ease;
}
.project-row-btn.primary {
  background: var(--accent-primary, #008cff);
  color: #fff;
}
.project-row-btn.primary:hover {
  filter: brightness(1.2);
  transform: translateX(3px);
  box-shadow: 0 0 15px rgba(0, 140, 255, 0.4);
}
.project-row-btn.secondary {
  background: transparent;
  color: var(--text-light, #fff);
  border: 1px solid rgba(255, 255, 255, 0.2);
}
.project-row-btn.secondary:hover {
  background: rgba(255, 255, 255, 0.1);
  border-color: rgba(255, 255, 255, 0.5);
}
`;
    fs.writeFileSync('css/style.css', f.substring(0, start) + newCSS + f.substring(end));
    console.log('Replaced bento grid css');
} else {
    console.log('Could not find start/end marks');
}
