#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

int main() {
	//window
	RenderWindow window(VideoMode(1444, 802), "UNO card game");
	window.setFramerateLimit(60); //frames per second

	//background
	Texture backgTexture;
	Sprite backg;
	if (!backgTexture.loadFromFile("fondoMenu.png")) 
	{
		system("echo No se pudo cargar la textura &pause");//al usar el comando RenderWindow no se permite la utiilización de cout o pritf
		//backg.setTexture(backgTexture);
		return EXIT_FAILURE;
	}

	while (window.isOpen()) 
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
	}
	window.clear();
	window.draw(backg);
	window.display();
	return 0;
}