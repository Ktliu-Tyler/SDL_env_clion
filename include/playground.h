//
// Created by Liu KT on 2024/11/20.
//

#ifndef PLAYGROUND_H
#include <iostream>
#include "constants.h"
#include "tool.h"
#include <string>

#define PLAYGROUND_H

class playground {
    public:
    SDL_Texture *background = nullptr;
    SDL_Renderer *renderer = nullptr;
    int update();
    int process_input(SDL_Event *event);
    void render(SDL_Renderer *renderer);
    playground(std::string path, SDL_Renderer* renderer);
    ~playground();
};



#endif //MENU_H
