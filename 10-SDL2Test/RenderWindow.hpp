#pragma once
#include <SDL.h>
#include <SDL_image.h>

class RenderWindow {
public:
	RenderWindow(const char* p_title, int p_w, int p_h); // constructor
	SDL_Texture* loadTexture(const char* p_filePath);
	void cleanUp();
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};