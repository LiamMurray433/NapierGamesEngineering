#include "game_system.hpp"

void init() {
	std::shared_ptr<Invader> inv = std::make_shared<Invader>(sf::IntRect(sf::Vector2i(0, 0), sf::Vector2i(32, 32)), { 100,100 });
	ships.push_back(inv);
}
