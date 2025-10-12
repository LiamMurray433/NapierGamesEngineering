//game_system.hpp
#include <vector>
#include <memory>
#include "ship.hpp"
#include <SFML/Graphics.hpp>

struct GameSystem {

	static std::vector<std::shared_ptr<Ship>> ships;
	static sf::Texture spritesheet;
	static void init();
	static void clean();
	static void reset();
	static void update(const float& dt);
	static void render(sf::RenderWindow& window);
	
}