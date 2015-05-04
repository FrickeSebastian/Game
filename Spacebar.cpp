#include <SDL.h>


int main(int argc, char *argv[])
{
		SDL_Rect srcBlackbox;
		SDL_Rect dstBlackbox;
		char e;
		
		srcBlackbox.x = 0;
		srcBlackbox.y = 0;
		srcBlackbox.w = 860;
		srcBlackbox.h = 40;

		dstBlackbox.x = 0;
		dstBlackbox.y = 600;
		dstBlackbox.w = 860;
		dstBlackbox.h = 40;

	 SDL_Surface* BlackSurf;
	
	if (SDL_Keycode(SDLK_SPACE)) // aktivieren des Menüs
	{
		BlackSurf = SDL_LoadBMP("Blackbox.bmp");
		//x und y Positionen

		if (e == 'a' || e == 'A') // Aktion
		{

		}

		if (e == 'n' || e == 'N') // Nutzen
		{

		}

		if (e == 'b' || e == 'B') // Bauen
		{

		}

		if (e == 'o' || e == 'O') // Optionen
		{

		}

		if(SDL_Keycode(SDLK_SPACE)) // deaktivieren des Menüs
		{

		}

	}
	return 0;
}

