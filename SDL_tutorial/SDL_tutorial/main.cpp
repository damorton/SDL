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
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL error: %s\n", SDL_GetError());
	}
	else
	{
		// create window
		window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOWEVENT_SHOWN);
		if (window == NULL)
		{
			printf("window could not be created! SDL error %s\n", SDL_GetError());
		}
	}
	//Quit SDL
	SDL_Quit();

	return 0;
}