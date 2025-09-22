#include <SFML/Graphics.hpp>

const sf::Keyboard::Key controls[4] = {
    sf::Keyboard::A,   // Player1 UP
    sf::Keyboard::Z,   // Player1 Down
    sf::Keyboard::Up,  // Player2 UP
    sf::Keyboard::Down // Player2 Down
};

//Parameters
const sf::Vector2f paddleSize(25.f, 100.f);
const float ballRadius = 10.f;
const int gameWidth = 800;
const int gameHeight = 600;
const float paddleSpeed = 400.f;
const float paddleOffsetWall = 10.f;
const float time_step = 0.017f; //60 fps

//Objects of the game
sf::CircleShape ball;
sf::RectangleShape paddles[2];

void init() {
    // Set size and origin of paddles
    for (sf::RectangleShape& p : paddles) {
        p.setSize(paddleSize);
        p.setOrigin(paddleSize / 2.f);
    }
    // Set size and origin of ball
    ball.setRadius(ballRadius);
    ball.setOrigin( ballRadius / 2.f); //Should be half the ball width and height
    // reset paddle position
    paddles[0].setPosition(paddleOffsetWall + paddleSize.x / 2.f, gameHeight / 2.f);
    paddles[1].setPosition(paddleSize / 2.f);
    // reset Ball Position
    ball.setPosition(ballRadius / 2.f);
}

void Update(float dt) {
    float direction = 0.0f;
    if (sf::keyboard::keyIsPressed(controls[0])) {
        direction--
    }
    if (sf::keyboard::keyIsPress(controls[1])) {
        direction++
    }

    paddles[0].move(Vector2f(0.f, direction * paddleSpeed * dt));
}
