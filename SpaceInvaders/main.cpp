#include <SFML/Graphics.hpp>
#include <sstream>
#include <iostream>


//const sf::Keyboard::Key controls[4] = {
//    sf::Keyboard::A,   // Player1 UP
//    sf::Keyboard::Z,   // Player1 Down
//    sf::Keyboard::Up,  // Player2 UP
//    sf::Keyboard::Down // Player2 Down
//};

////Parameters
//const sf::Vector2f paddleSize(25.f, 100.f);
//const float ballRadius = 10.f;
const int gameWidth = 800;
const int gameHeight = 600;
//const float paddleSpeed = 400.f;
//const float paddleOffsetWall = 10.f;
//const float time_step = 0.017f; //60 fps
//const float initial_velocity_x = 100.f; //horizontal velocity
//const float initial_velocity_y = 60.f; //vertical velocity
//const float velocity_multiplier = 1.1f; //how much the ball will speed up everytime it hits a paddle. Here, 10% every time.
//bool is_player_serving = true;
//sf::Vector2f ball_velocity;


//int score[2] = { 0,0 };
//
////Objects of the game
//sf::CircleShape ball;
//sf::RectangleShape paddles[2];
//sf::Text text;
//sf::Font font;

sf::Texture spritesheet;
sf::Sprite invader;

void reset() {


}

void init() {
    if (!spritesheet.loadFromFile("resources/img/invaders_sheet.png")) {
        std::cerr << "Failed to load spritesheet" << std::endl;
    }
    invader.setTexture(spritesheet);
    invader.setTextureRect(sf::IntRect(sf::Vector2i(0, 0), sf::Vector2i(32, 32)));

}

//void update(float dt) {
//
//
//
//}

void render(sf::RenderWindow & window) {
    window.draw(invader);
}


int main() {
    sf::RenderWindow window(sf::VideoMode({ gameWidth, gameHeight}), "Space Invaders");
    window.setVerticalSyncEnabled(true);
    //Init and load 
    init();
    static sf::Clock clock;
    const float dt = clock.restart().asSeconds();
    while (window.isOpen()) {
        static sf::Clock clock;
        float dt = clock.restart().asSeconds();
        sf::Event event;
        
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                return 0;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
            window.close();
        }

        window.clear();
        render(window);
        window.display();



    }
    return 0;

}
