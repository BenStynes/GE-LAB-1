#include <SDL.h>
#include <iostream>
#include <string>

class Game
{
public:

    Game();
    ~Game();
    void run();
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 480;
private:
SDL_Window* gWindow = NULL;

    void processEvents();
    void update();
    void render();

    void cleanUp();

    bool m_gameIsRunning;

};