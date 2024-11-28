//
// Created by Liu KT on 2024/11/20.
//

#ifndef MENU_H
#include <iostream>
#include "constants.h"
#include "tool.h"
#include <string>

#define MENU_H

class menu {
    public:
    SDL_Texture *background = nullptr;
    SDL_Renderer *renderer = nullptr;
    int update();
    int process_input(SDL_Event *event);
    void render(SDL_Renderer *renderer);
    menu(std::string path, SDL_Renderer* renderer);
    ~menu();
};



#endif //MENU_H
