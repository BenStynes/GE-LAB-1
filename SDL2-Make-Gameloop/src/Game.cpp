#include "../include/Game.h"

Game::Game() :
    m_gameIsRunning{ false }
{
 gWindow = SDL_CreateWindow("SDL game-loop window", SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN); 

 gScreenSurface = NULL;


gXOut = NULL;
}
    
Game::~Game()
{
    cleanUp();
}
    
void Game::run()
{
    m_gameIsRunning = true;
    while (m_gameIsRunning)
    {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents()
{
    std::cout << "Processing events maybe take in inputs" << std::endl;
     
     SDL_Event e;

			//While application is running
			while( m_gameIsRunning )
			{
				//Handle events on queue
				while( SDL_PollEvent( &e ) != 0 )
				{
					//User requests quit
					if( e.type == SDL_QUIT )
					{
						m_gameIsRunning = false;
					}
				}

				//Apply the image
				SDL_BlitSurface( gXOut, NULL, gScreenSurface, NULL );
			
				//Update the surface
				SDL_UpdateWindowSurface( gWindow );
			}
		}


void Game::update()
{
    std::cout << "Updating at a pace" << std::endl;
}

void Game::render()
{
    std::cout << "draw ne a picture" << std::endl;
}

void Game::cleanUp()
{
    std::cout << "clean yourself up" << std::endl;
}
void Game::close()
{
	//Deallocate surface
	SDL_FreeSurface( gXOut );
	gXOut = NULL;

	//Destroy window
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;

	//Quit SDL subsystems
	SDL_Quit();
}