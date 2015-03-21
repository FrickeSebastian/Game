#ifndef NEWIMG
#define NEWIMG

#include <SDL.h>

SDL_Surface *picsur 
//picture surface


SDL_Surface *loadimg(char *bez, char *name)
{
	picsur[bez] = SDL_LoadBmp(name);
}
//loads BMP name on surface : picsur[name of the target]

#endif