#include <stdio.h>
#include <unistd.h>
#include "sense.h"

#define WHITE 0xFFFF
#define GREEN 0x07E0
#define RED 0xF800
#define BLUE 0x001F 

void display_time(int hours, int minutes, int seconds, pi_framebuffer_t *dev) {
    //displays the time on device dev using the below helpers.
}

void display_colons(pi_framebuffer_t *dev) {
    //draws the colons
    bm->pixel[1][3]=WHITE;
    bm->pixel[1][4]=WHITE;
    bm->pixel[1][6]=WHITE;
    bm->pixel[1][7]=WHITE;
    bm->pixel[2][3]=WHITE;
    bm->pixel[2][4]=WHITE;
    bm->pixel[2][6]=WHITE;
    bm->pixel[2][7]=WHITE;
    bm->pixel[4][3]=WHITE;
    bm->pixel[4][4]=WHITE;
    bm->pixel[4][6]=WHITE;
    bm->pixel[4][7]=WHITE;
    bm->pixel[5][3]=WHITE;
    bm->pixel[5][4]=WHITE;
    bm->pixel[5][6]=WHITE;
    bm->pixel[5][7]=WHITE;
}
void display_hours(int hours, pi_framebuffer_t *dev) {

}
void display_minutes(int minutes, pi_framebuffer_t *dev) {

}
void display_seconds(int seconds, pi_framebuffer_t *dev) {
    if(seconds >= 32) {
        bm->pixel[5][7]=RED;
        seconds -= 32;
    } if(seconds >= 16) {
        bm->pixel[4][7]=RED;
        seconds -= 16;
    } if(seconds >= 8) {
        bm->pixel[3][7]=RED;
        seconds -= 8;
    } if(seconds >= 4) {
        bm->pixel[2][7]=RED;
        seconds -= 4;
    } if(seconds >= 2) {
        bm->pixel[1][7]=RED;
        seconds -= 2;
    } if(seconds >= 1) {
        bm->pixel[0][7]=RED;
        seconds -= 1;

}
