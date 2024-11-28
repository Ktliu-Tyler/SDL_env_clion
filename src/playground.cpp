//
// Created by Liu KT on 2024/11/20.
//

#include "../include/playground.h"


playground::playground(std::string path, SDL_Renderer *renderer) {
    SDL_Log("Creating playground...");
    this -> background = loadTexture(path, renderer);
    this -> renderer = renderer;
}

int playground::process_input(SDL_Event *event) {
    switch (event->type) {
        case SDL_KEYDOWN:
            if (event->key.keysym.sym == SDLK_w) {
                SDL_Log("SDL_w");
                return MENUID;
            }
            if (event->key.keysym.sym == SDLK_s) {
                SDL_Log("SDL_s");
            }
            if (event->key.keysym.sym == SDLK_UP) {
                SDL_Log("SDL_u");
            }
            if (event->key.keysym.sym == SDLK_DOWN) {
                SDL_Log("SDL_d");
            }
        break;
    }
    return PLAYGROUNDID;
}

int playground::update() {
    return TRUE;
}

void playground::render(SDL_Renderer *renderer) {
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, this->background, nullptr, nullptr);
    SDL_RenderPresent(renderer);
}

playground::~playground() {
    delete this;
}
