//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

Texture textureRed, textureYellow, textureBlue, textureGrey;
Sprite spriteRed, spriteYellow, spriteBlue, spriteGrey;
float scaleRed,  scaleYellow, scaleBlue,scaleGrey;
///Punto de entrada a la aplicación///
int main() {

	textureRed.loadFromFile("cuad_red.png");
	textureYellow.loadFromFile("cuad_yellow.png");
	textureBlue.loadFromFile("cuad_blue.png");
	textureGrey.loadFromFile("cuad_grey.png");

	spriteRed.setTexture(textureRed);
	spriteYellow.setTexture(textureYellow);
	spriteBlue.setTexture(textureBlue);
	spriteGrey.setTexture(textureGrey);
	
	scaleRed = (float)400 / textureRed.getSize().x;
	scaleYellow = (float)400 / textureYellow.getSize().x;
	scaleBlue = (float)400 / textureBlue.getSize().x;	
	scaleGrey = (float)400 / textureGrey.getSize().x;

	spriteRed.setScale(scaleRed, scaleRed);
	spriteYellow.setScale(scaleYellow, scaleYellow);
	spriteBlue.setScale(scaleBlue, scaleBlue);
	spriteGrey.setScale(scaleGrey, scaleGrey);

	spriteRed.setPosition(0,0);
	spriteYellow.setPosition(0,800-(textureYellow.getSize().x * scaleYellow));
	spriteBlue.setPosition(800-(textureBlue.getSize().x * scaleBlue),0);
	spriteGrey.setPosition(800-(textureGrey.getSize().x * scaleGrey),800- (textureGrey.getSize().x * scaleGrey));


	//Creamos la ventana
	RenderWindow App(VideoMode(800, 800, 32),"Cuadrados");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		//Dibujar
		App.draw(spriteRed);
		App.draw(spriteYellow);
		App.draw(spriteBlue);
		App.draw(spriteGrey);

		// Mostramos la ventana
		App.display();
	}
	return 0;
}