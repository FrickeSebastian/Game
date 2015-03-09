#include <stdio.h>
#include <stdlib.h>

#include <SDL.h>

#include "struct.h" 

struct field map[5][5] = {
	{{FIELD_WATER},{FIELD_WATER},{FIELD_GRASS},{FIELD_GRASS},{FIELD_MOUNTAIN}},
	{{FIELD_WATER},{FIELD_GRASS},{FIELD_GRASS},{FIELD_GRASS},{FIELD_MOUNTAIN}},
	{{FIELD_WATER},{FIELD_GRASS},{FIELD_GRASS},{FIELD_GRASS},{FIELD_MOUNTAIN}},
	{{FIELD_GRASS},{FIELD_GRASS},{FIELD_MOUNTAIN},{FIELD_GRASS},{FIELD_GRASS}},
	{{FIELD_GRASS},{FIELD_MOUNTAIN},{FIELD_MOUNTAIN},{FIELD_MOUNTAIN},{FIELD_GRASS}}
};

int main(int argc, char **argv)
{
	SDL_Window *screen;
	SDL_Event event;

	SDL_Init(SDL_INIT_EVERYTHING);

	screen = SDL_CreateWindow("GME", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
	                          640, 480, 0);
	if(!screen)
		SDL_ShowSimpleMessageBox(0, "Screen init error", SDL_GetError(), 
ShowSimpleMessageBox(0, "Renderer Init error",screen);

	SDL_Renderer * renderer = SDL_CreateRenderer(screen, -1, 0);
	if(!renderer)
		ShowSimpleMessageBox(0, "Renderer Init error",
	SDL_Surface * image = SDL_LoadBMP("home/Sebastian/gme/hello.bmp");

	SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer,
        image);

	if (!screen) {
		printf("SDL Error: %s\n", SDL_GetError());
		SDL_Quit();
		exit(EXIT_FAILURE);
	}

	while (SDL_WaitEvent(&event)) {
		switch (event.type) {
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym) {
			case SDLK_ESCAPE:
				exit(EXIT_SUCCESS);
			}
		}
	}

	SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);

	SDL_DestroyTexture(texture);  
    	SDL_FreeSurface(image);  
    	SDL_DestroyRenderer(renderer);  
    	SDL_DestroyWindow(screen);

	SDL_Quit();

	return 0;
}
