// App.js
import React from 'react';
import './App.css';

function App() {
  return (
    <div className="App">
      <Navbar />
      <Hero />
      <Footer />
    </div>
  );
}

function Navbar() {
  return (
    <nav className="navbar">
      <h2 className="navbar-brand">MyWebsite</h2>
    </nav>
  );
}

function Hero() {
  return (
    <section className="hero">
      <h1>Welcome to MyWebsite</h1>
      <p>Explore the best content and services here.</p>
      <button className="hero-button">Get Started</button>
    </section>
  );
}

export default App;
