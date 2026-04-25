export default function HomePage() {
  return (
    <>
      <section className="hero">
        <div className="hero-content">
          <div className="hero-face-wrapper">
            <img
              src="https://i.imgur.com/L54eE1b.png"
              alt="Amy"
              className="hero-image"
            />
          </div>

          <div className="hero-text">
            <h1 className="glitch">Amy</h1>

            <div className="terminal-line">
              <span className="prompt">$</span>
              <span>19 🇦🇹 | Law Student | Developer</span>
              <span className="cursor">_</span>
            </div>

            <div className="tech-badges">
              <span className="badge badge-orange">Java</span>
              <span className="badge badge-yellow">JavaScript</span>
              <span className="badge badge-blue">TypeScript</span>
              <span className="badge badge-green">Python</span>
              <span className="badge badge-purple">C#</span>
            </div>
          </div>
        </div>
      </section>

      <section id="projects" className="section">
        <h2 className="section-title">// Projects</h2>

        <div className="grid-1">
          <div className="card">
            <h3>Yuna Bot</h3>
            <p>
              Advanced Discord moderation and utility bot featuring scalable
              PostgreSQL infrastructure.
            </p>
          </div>
        </div>
      </section>

      <section id="skills" className="section">
        <h2 className="section-title">// Skills</h2>

        <div className="grid-3">
          <div className="skill-card">
            <h3>Moderation Systems</h3>
            <p>Scalable moderation workflows and permission systems.</p>
          </div>

          <div className="skill-card">
            <h3>Bot Development</h3>
            <p>Discord bots and backend systems.</p>
          </div>

          <div className="skill-card">
            <h3>Legal Studies</h3>
            <p>EU, Austrian, German, UK and U.S. legal systems.</p>
          </div>
        </div>
      </section>
    </>
  );
}