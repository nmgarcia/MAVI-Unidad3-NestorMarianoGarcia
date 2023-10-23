//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

Texture texture;
Sprite sprite;
float escalaX; float escalaY;

///Punto de entrada a la aplicación///
int main() {
	texture.loadFromFile("fondo.jpg");
	sprite.setTexture(texture);

	escalaY = 600 / (float)texture.getSize().y;
	escalaX = 800 / (float)texture.getSize().x;

	sprite.setScale(escalaX, escalaY);

	//Creamos la ventana
	RenderWindow App(VideoMode(800, 600, 32),"Fondo");

	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		//Dibujamos la escena
		App.draw(sprite);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}