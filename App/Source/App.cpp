#include "corepch.h"
#include "Core/Core.h"

int main()
{
	HelloFromCore();

	sf::RenderWindow window(sf::VideoMode(800, 600), "App");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) window.close();
		}

		window.display();
	}
	return 0;
}