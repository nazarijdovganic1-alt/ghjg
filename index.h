<style>
  body {
    background-color: #0A0A0A;
    color: #FDFCF0;
    font-family: 'Inter', sans-serif;
    margin: 0;
  }

  .hero-section {
    height: 100vh;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    background: linear-gradient(rgba(0,0,0,0.6), rgba(0,0,0,0.6)), url('premium-bg.jpg');
    background-size: cover;
    text-align: center;
  }

  h1 {
    font-family: 'Cormorant Garamond', serif;
    font-size: 5rem;
    letter-spacing: 5px;
    margin-bottom: 10px;
    color: #D4AF37;
    animation: fadeInDown 1.5s ease;
  }

  .btn-gold {
    padding: 15px 40px;
    border: 1px solid #D4AF37;
    background: transparent;
    color: #D4AF37;
    text-transform: uppercase;
    letter-spacing: 2px;
    transition: all 0.4s ease;
    cursor: pointer;
    backdrop-filter: blur(5px);
  }

  .btn-gold:hover {
    background: #D4AF37;
    color: #0A0A0A;
    box-shadow: 0 0 20px rgba(212, 175, 55, 0.4);
    transform: translateY(-3px);
  }

  .glass-card {
    background: rgba(255, 255, 255, 0.03);
    border: 1px solid rgba(255, 255, 255, 0.1);
    backdrop-filter: blur(15px);
    border-radius: 2px;
    padding: 40px;
  }
</style>

<section class="hero-section">
  <h1>FRIZZANTE</h1>
  <p style="font-style: italic; font-size: 1.2rem;">смак справжньої розкоші</p>
  <div style="margin-top: 30px;">
    <button class="btn-gold">Переглянути меню</button>
    <button class="btn-gold" style="margin-left: 20px;">Забронювати</button>
  </div>
</section>