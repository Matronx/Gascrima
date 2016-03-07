/* 
 * File:   MWindow.h
 * Author: Mathias
 *
 * Created on 4 de marzo de 2016, 23:30
 */

#ifndef MWINDOW_H
#define	MWINDOW_H
#include "all_heads.h"
class MWindow {
public:
    MWindow();
    MWindow(const MWindow& orig);
    virtual ~MWindow();
private:
    SDL_Window      *Window = NULL;
    SDL_Surface     *Surface = NULL;
};

#endif	/* MWINDOW_H */

