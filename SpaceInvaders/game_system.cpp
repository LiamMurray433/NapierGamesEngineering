#include "game_system.hpp"

using param = Parameters;

void init() {
	std::shared_ptr<Invader> inv = std::make_shared<Invader>(sf::IntRect(sf::Vector2i(0, 0), sf::Vector2i(32, 32)), { 100,100 });
	ships.push_back(inv);
}

void update(const float& dt) {
	for (std::shared_ptr<Ship>& s) {
		s->update(dt);
	}
}

void render(sf::RenderWindow& window) {
	for (const std::shared_ptr<Ship>& s : ships) {
		window.draw(*(s.get()));
	}
}