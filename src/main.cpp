#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
	sf::RenderWindow window{sf::VideoMode(800, 600), "SFML works!"};

	while (window.isOpen())
	{
		sf::Event event{};
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear(sf::Color{51, 51, 51, 255});
		window.display();
	}

	return 0;
}
