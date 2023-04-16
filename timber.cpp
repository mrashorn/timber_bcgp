#include <SFML/Graphics.hpp>
#include <iostream>

// Make it easier to type with. Typically don't like this but for now we use it. 
using namespace sf;

// Game starts
int main()
{
	std::cout << "Test!" << std::endl;
	// Create a video mode object
	VideoMode vm(1920, 1080);

	// Create and open a window for the game
	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

	return 0;
}
