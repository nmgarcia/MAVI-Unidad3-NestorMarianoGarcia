//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

Texture texture;
Sprite sprite;
float scale;

///Punto de entrada a la aplicación///
int main() {
	texture.loadFromFile("plataforma.jpg");
	
	
	//Creamos la ventana
	RenderWindow App(VideoMode(800, 600, 32),"Plataforma");

	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();

		// Dibuja la plataforma
		for (int i = 1; i <= 8; i++) {
			// Configura cada sprite con la textura y posición apropiadas
			sprite.setTexture(texture);

			sprite.setScale(0.12, (float)i / 10);

			sprite.setPosition((70 * i), 600 - ((texture.getSize().y * (float)i / 10)));
			App.draw(sprite);
		}
		
		sprite.setTexture(texture);
		sprite.setScale(0.8, 0.12);
		sprite.setPosition(625, 350);
		App.draw(sprite);
		
		// Mostramos la ventana
		App.display();
	}
	return 0;
}