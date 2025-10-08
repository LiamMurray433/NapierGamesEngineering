//game_system.hpp
#include <vector>
#include <memory>
#include "ship.hpp"
struct GameSystem {
	static void init();
	static void clean();
	static void update(const float& dt);
	static void render(sf::RenderWindow& window);
	static std::vector<std::shared_ptr<ship>> ships; //vector of shared pointers
}