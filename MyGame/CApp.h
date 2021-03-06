// ============================================================================
// [Include Section]
// ============================================================================
#ifdef _WIN32
#include <SDL.h>
#else
#include <SDL2/SDL.h> //---------| includes start |----------->>
#include <iostream>
#include "player.h"
#include "renderUtils.h"
#include "texture.h"
#include "viewport.h" //---------| includes stop |------------>>
#endif


// ============================================================================
// [CApp]
// ============================================================================
// This is just a sample SDL application class to test that the app works.

class CApp
{
public:

	// Application state
	enum APP_STATE
	{
		APP_OK = 0,
		APP_FAILED = 1
	};

	CApp();
	~CApp();
	
	// Run application, called by your code.
	int 			OnExecute();

private:
	
    SDL_Surface* surface;
    SDL_Texture* texture;
    
    //my objects
    Player player;
    
	// Whether the application is running.
	bool 			running;

	SDL_Window*		window;
	SDL_Renderer*	renderer;

	// Initialize application
	int 			OnInit();
	
	// Clean up the application
	void 			OnCleanup();

	// Called to process SDL event.
	void 			OnEvent(SDL_Event* event);

	// Called to update game logic
	void			OnUpdate();
	
	// Called to render the app.
	void 			OnRender();
};