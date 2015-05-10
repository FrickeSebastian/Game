#include <SDL.h>


void sounds()
{
		SDL_AudioSpec wav_spec;
		Uint32 wav_length;
		Uint8 *wav_buffer;

		if ( ) //Bedingung für die Aktion, z.B. dass der Char Holz fällt
		{
			SDL_LoadWAV("Name.wav", &wav_spec, &wav_buffer, &wav_length); // Funktion ist beliebig oft kopierbar, lediglich der Name des Files muss für die jeweilige Aktion geändert werden
		}
}
