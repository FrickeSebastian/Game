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
	SDL_Surface *scresur;
	SDL_Surface *image;
	SDL_Event event;

	SDL_Init(SDL_INIT_EVERYTHING);

	screen = SDL_CreateWindow("G@ME", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
	                          640, 480, SDL_WINDOW_SHOWN);
	if(!screen)
	{
		SDL_GetError();
	}
	else
	{
		scresur = SDL_GetWindowSurface(screen);
	}

	image = SDL_LoadBMP("hello.bmp");

	SDL_BlitSurface(image,NULL,scresur,NULL);
	SDL_UpdateWindowSurface(screen);

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
  
    	SDL_FreeSurface(image);    
    	SDL_DestroyWindow(screen);

	SDL_Quit();

	return 0;
}
