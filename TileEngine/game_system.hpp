//game_system.hpp
#include <vector>
#include <memory>
#include <SFML/Graphics.hpp>

class Scene;

class GameSystem {
public:
	static void start(unsigned int width, unsigned int height,
		const std::string& name);

	static void clean();
	static void reset();
	static void set_active_scene(const std::shared_ptr<Scene>& act_sc);

private:
	static void init();
	static void update(const float &dt);
	static void _render(sf::RenderWindow& window);
	static std::shared_ptr<Scene> _active_scene;
};