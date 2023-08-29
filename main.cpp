#include <iostream>
//#include <stdio.h>
#include <SFML/Graphics.hpp>
//#include <SFML/Audio.hpp>
using namespace std;
using namespace sf;

int main() {
	//window
	RenderWindow window(VideoMode(1444, 802), "UNO card game");
	window.setFramerateLimit(60); //frames per second

	//background
	Texture backgTexture;
	Sprite backg;
	if (backgTexture.loadFromFile("fondoMenu.png")) cout<<"Error al cragar la textura de fondo"<<endl;
		backg.setTexture(backgTexture);
	

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