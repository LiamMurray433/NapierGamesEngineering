#include <SFML/Graphics.hpp>

class Bullet :public sf::Sprite {
public:
	// updates all bullets
	static void update(const float& dt);

	// render all bullets
	static void render(sf::RenderWindow& window);
	
	//chose an inactive bullet and use it.
	static void fire(const sf::Vector2f& pos, const bool mode);

	//Set all bullets to -100, -100
	static void init();
	~Bullet() = default;

protected:
	Bullet();
	bool _mode;

	void _update(const float& dt);
	static unsigned char _bulletPointer;
	static Bullet _bullets[256];

		
};