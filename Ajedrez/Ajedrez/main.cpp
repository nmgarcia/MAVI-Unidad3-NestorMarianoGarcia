//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

Texture textureWhite, textureBlack;
Sprite spriteWhite, spriteBlack,squareToDraw;
float scale;

///Punto de entrada a la aplicación///
int main() {
	
	textureWhite.loadFromFile("chessw.png");		
	textureBlack.loadFromFile("chessb.png");

	spriteWhite.setTexture(textureWhite);
	spriteBlack.setTexture(textureBlack);
	scale = (float)100/(float)textureWhite.getSize().y;
	spriteBlack.setScale(scale,scale);
	spriteWhite.setScale(scale,scale);

	//Creamos la ventana
	RenderWindow App(VideoMode(800, 800, 32),"Ajedrez");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		//Dibujamos la ventana
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				squareToDraw = (i+j) % 2 == 0 ? spriteWhite : spriteBlack;
				squareToDraw.setPosition(i * 100, j * 100);

				App.draw(squareToDraw);
			}
		}
		// Mostramos la ventana
		App.display();
	}
	return 0;
}