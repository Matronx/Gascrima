/* 
 * File:   MWindow.cpp
 * Author: Mathias
 * 
 * Created on 4 de marzo de 2016, 23:30
 */

#include "MWindow.h"
#include "LOG.h"

MWindow::MWindow() {
    /* Check if we can initialize SDL */
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
        LOG_ERROR((char *)"Couldn't Initialize SDL");
    }
    /* Create Window */
    Window = SDL_CreateWindow("Test", SDL_WINDOWPOS_CENTERED , SDL_WINDOWPOS_CENTERED , 800 , 600,SDL_WINDOW_SHOWN| SDL_WINDOW_RESIZABLE );
    
    if (!Window) {
        LOG_ERROR ((char*) "Couldn't Initialize Window");
    }
    /* Get Window Surface*/
    Surface = SDL_GetWindowSurface(Window);
    
    /* Fill the surface White Testing only */
    if(Surface)
        SDL_FillRect(Surface , NULL , SDL_MapRGB(Surface->format , 0xff , 0xff , 0xff )) ;
    
    /* Update the screen */
    
    SDL_UpdateWindowSurface(Window);
    
    SDL_Delay(5000);
    
    
}

MWindow::MWindow(const MWindow& orig) {
}

MWindow::~MWindow() {
    
    SDL_DestroyWindow(Window);
    Window = NULL;
    Surface = NULL;
    SDL_Quit();
    
}

