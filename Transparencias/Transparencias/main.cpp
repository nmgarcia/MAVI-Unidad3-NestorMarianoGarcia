//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

Texture textureBlue,texture;
Sprite spriteBlue,sprite1, sprite2, sprite3, sprite4;
float height, width;
///Punto de entrada a la aplicación///
int main() {
	

	texture.loadFromFile("rcircle.png");
	sprite1.setTexture(texture);
	sprite2.setTexture(texture);
	sprite3.setTexture(texture);
	sprite4.setTexture(texture);

	height = (float)texture.getSize().y;
	width = (float)texture.getSize().x;

	sprite2.setPosition(800 - width, 0);
	sprite3.setPosition(0, 600 - height);
	sprite4.setPosition(800 - width, 600 - height);

	textureBlue.loadFromFile("bcircle.png");
	spriteBlue.setTexture(textureBlue);
	spriteBlue.setPosition((800 - textureBlue.getSize().x) / 2, (600 - textureBlue.getSize().y) / 2);

	//Creamos la ventana
	RenderWindow App(VideoMode(800, 600, 32), "Transparencias");

	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		//Dibujamos		
		App.draw(sprite1);
		App.draw(sprite2);
		App.draw(sprite3);
		App.draw(sprite4);
		App.draw(spriteBlue);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}