#ifndef engine
#define engine
#include <iostream>
#include <SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include "constants.h"
#include "tool.h"
#include "menu.h"
#include "playground.h"
//#include "object.h"
//#include "player.h"
#endif

extern SDL_Window *mywindow;
extern SDL_Renderer *renderer;
// extern Ball *ball;
// extern Player *player1;
// extern Player *player2;
extern int game_is_running;


int initialize_window();
void setup();
void process_input();
int update();
void render();
void destroy_window();

