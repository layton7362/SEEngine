#include <SalamEngine/common.h>

InputG::InputG()
{
}

InputG::~InputG()
{
}

void InputG::set_default_key_input()
{
    key_input[Key_Code::LEFT] = false;
    key_input[Key_Code::DOWN] = false;
    key_input[Key_Code::RIGHT] = false;
    key_input[Key_Code::UP] = false;

    key_input[Key_Code::JUMP] = false;
    key_input[Key_Code::RUN] = false;

    key_input[Key_Code::OK] = false;
    key_input[Key_Code::CANCEL] = false;
}

bool InputG::is_key_pressed(Key_Code key)
{
    if (key_input.find(key)->second)
    {
        return true;
    }
    return false;
}

void InputG::process(Game *game)
{
    SDL_Event event;

    set_default_key_input();
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_QUIT:
            game->is_running = false;
            break;

        case SDL_KEYDOWN:
            doKeyDown(&event.key);
            break;

        case SDL_KEYUP:
            doKeyUp(&event.key);
            break;

        default:
            break;
        }
    }
}

void InputG::doKeyUp(SDL_KeyboardEvent *event)
{
}

void InputG::doKeyDown(SDL_KeyboardEvent *event)
{
    switch (event->keysym.scancode)
    {
    case SDL_Scancode::SDL_SCANCODE_LEFT:
    // printf("Press");
        this->key_input[LEFT] = true;
        break;
    case SDL_Scancode::SDL_SCANCODE_RIGHT:
        this->key_input[RIGHT] = true;
        break;
    case SDL_Scancode::SDL_SCANCODE_UP:
        this->key_input[UP] = true;
        break;
    case SDL_Scancode::SDL_SCANCODE_DOWN:
        this->key_input[DOWN] = true;
        break;
    }
}
