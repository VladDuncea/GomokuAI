#include <iostream>
#include <SDL.h>


int main(int argc,char *argv[])
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		std::cerr << "SDL could not initialise! Error: " << SDL_GetError() << std::endl;
	}

	return 0;
}