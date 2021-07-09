#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

int main(int argc, char* argv[]) {
	// Error handling if SDL doesn't init correctly
	if (SDL_Init(SDL_INIT_VIDEO) > 0) {
		std::cout << "SDL_Init has failed. SDL_ERROR: " << SDL_GetError() << std::endl;
	}

	// Error handling if SDL_image doesn't init correctly
	if (!(IMG_Init(IMG_INIT_PNG))) {
		std::cout << "IMG_Init has failed. SDL_ERROR: " << SDL_GetError() << std::endl;
	}

	return 0;
}