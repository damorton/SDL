#include <SDL.h>
#include <stdio.h>

// screen dimensions
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* args[])
{
	// window
	SDL_Window* window = NULL;

	// surface
	SDL_Surface* screenSurface = NULL;

	//Start SDL
	SDL_Init(SDL_INIT_EVERYTHING);

	//Quit SDL
	SDL_Quit();

	return 0;
}