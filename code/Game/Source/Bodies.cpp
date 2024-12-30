#include"Bodies.h"
#include"defs.h"

Bodies::Bodies(double u, double v, double w, double h): x(u),y(v),wid(w),hei(h) {
    r = 0;
    g = 0;
    b = 0;
    o = 255;
    vel_x=0;
    vel_y = 0;
}

void Bodies::SetColour(int ri, int gi, int bi){
    r = ri;
    g = gi;
    b = bi;
}

void Bodies::SetVel(int ux, int uy){
    vel_x = ux;
    vel_y = uy;
}


bool Bodies::check_col(Bodies* B){
    // TODO
    return false;  
}

void Bodies::display(SDL_Renderer* renderer){
    SDL_Rect fillRect = {int(x), int(y), int(wid), int(hei)};
    SDL_SetRenderDrawColor( renderer, r, g, b, o );
    SDL_RenderFillRect( renderer, &fillRect );
}

void Bodies::move(){
    x+=vel_x;
    y+=vel_y;
}
