//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

Texture texture;
Sprite sprite;
///Punto de entrada a la aplicación///
int main() {

	texture.loadFromFile("cuad_yellow.png");
	sprite.setTexture(texture);
	sprite.setOrigin(sprite.getLocalBounds().width / 2, sprite.getLocalBounds().height / 2);
	sprite.setScale(0.1,0.1);
	sprite.setPosition(400, 300);

	//Creamos la ventana
	RenderWindow App(VideoMode(800, 600, 32),"Ventana de ejemplo");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();

		// Rotar el sprite 1 grado por ciclo
		sprite.rotate(0.1);

		//Dibujar
		App.draw(sprite);

		// Mostramos la ventana
		App.display();
	}
	return 0;
}