#include <stdio.h>
#include <SalamEngine/common.h>
#include <SalamEngine/game_object/Sprite2D.h>

Game game;
InputG input;
Asset asset;

class Sprite2D;

void print_sprite_position(Sprite2D &sprite)
{
    printf("Pos_x: %0.2f\n", sprite.position.x);
    printf("Pos_y: %0.2f\n", sprite.position.y);
}

Game::Game()
{
}

Game::~Game()
{
    this->destroy();
}

int Game::start()
{
    this->init();

    this->game_loop();

    return 0;
}

int Game::init()
{
    printf("========Game Init========\n");

    is_running = true;

    SDL_Init(SDL_INIT_EVERYTHING);

    // Set postion and size for main window
    int mainSizeX = 600;
    int mainSizeY = 600;
    int mainPosX = 100;
    int mainPosY = 100;

    // Set up main window
    mainWindow = SDL_CreateWindow("Main Window", mainPosX, mainPosY, mainSizeX, mainSizeY, 0);
    renderer = SDL_CreateRenderer(mainWindow, -1, SDL_RENDERER_ACCELERATED);
    return 0;
}

int Game::game_loop()
{
    printf("========Enter Game Loop========\n");

    SDL_Texture *tex = asset.load_texture(*this->renderer, string("Assets/Untitled.bmp"));

    Sprite2D sprite(vec2(10, 10));
    sprite.set_scale(1, 2);
    sprite.set_sprite(tex);

    while (is_running)
    {
        input.process(this);

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderClear(renderer);

        // print_sprite_position(sprite);

        sprite.draw(renderer);

        SDL_RenderPresent(renderer);
    }
    return 0;
}

int Game::destroy()
{
    printf("========Enter Destroy========\n");
    return 0;
}
