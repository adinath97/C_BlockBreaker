#include <iostream>

#include <SDL2/SDL.h>
#include <stdio.h>

#include "game.h"

int main(int argc, char** argv) {

    Game game;
    bool success = game.Initialize();

    if(success) {
        game.RunLoop();
    }

    game.ShutDown();

    return 0;
}
