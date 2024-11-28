//
// Created by Liu KT on 2024/11/20.
//
#include "../include/tool.h"


SDL_Texture* loadTexture(const std::string& path, SDL_Renderer* renderer) {
    SDL_Texture* newTexture = nullptr;
    SDL_Surface* loadedSurface = IMG_Load(path.c_str());
    if (loadedSurface == nullptr) {
         SDL_Log("Unable to load image %s", IMG_GetError);
    } else {
        newTexture = SDL_CreateTextureFromSurface(renderer, loadedSurface);
        if (newTexture == nullptr) {
            SDL_Log("Unable to create texture from %s", IMG_GetError);
        }
        SDL_FreeSurface(loadedSurface);
    }
    return newTexture;
}



