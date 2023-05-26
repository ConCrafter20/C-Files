#include <stdio.h> /* printf and fprintf */

#ifdef _WIN32
#include <SDL.h> /* Windows-specific SDL2 library */
#else
#include <SDL.h> /* macOS- and GNU/Linux-specific */
#endif



int RenderWindow (char name[6969], int delay, int width, int height)
{
  /* Initialises data */
  SDL_Window *window = NULL;
  
  /*
  * Initialises the SDL video subsystem (as well as the events subsystem).
  * Returns 0 on success or a negative error code on failure using SDL_GetError().
  */
  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    fprintf(stderr, "SDL failed to initialise: %s\n", SDL_GetError());
    return 1;
  }

  /* Creates a SDL window */
  window = SDL_CreateWindow("SDL Example", /* Title of the SDL window */
			    SDL_WINDOWPOS_UNDEFINED, /* Position x of the window */
			    SDL_WINDOWPOS_UNDEFINED, /* Position y of the window */
			    width, /* Width of the window in pixels */
			    height, /* Height of the window in pixels */
			    0); /* Additional flag(s) */

  /* Checks if window has been created; if not, exits program */
  if (window == NULL) {
    fprintf(stderr, "SDL window failed to initialise: %s\n", SDL_GetError());
    return 1;
  }

  /* Pauses all SDL subsystems for a variable amount of milliseconds */
  SDL_Delay(delay);

  /* Frees memory */
  SDL_DestroyWindow(window);
  
  /* Shuts down all SDL subsystems */
  SDL_Quit(); 
  
  return 0;
}