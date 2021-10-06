#include "../include/Game.h"

Game::Game() :
    m_gameIsRunning{ false }
{
 gWindow = SDL_CreateWindow("SDL game-loop window", SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN); 
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