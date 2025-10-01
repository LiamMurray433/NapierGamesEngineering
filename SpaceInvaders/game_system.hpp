struct GameSystem {
	static void init();
	static void clean();
	static void update(const float &dt);
	static void render(sf::RenderWindow &window);
};
