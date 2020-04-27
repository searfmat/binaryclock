#include <stdio.h>
#include <unistd.h>
#include "sense.h"
#include "display.h"

#define BLACK 0x0000
#define WHITE 0xFFFF
#define GREEN 0x07E0
#define RED 0xF800
#define BLUE 0x001F 



void display_time(int hours, int minutes, int seconds, pi_framebuffer_t *dev) {
    //displays the time on device dev using the below helpers.
    sense_fb_bitmap_t *bm=dev->bitmap;
    display_colons(dev);
    display_hours(hours, dev);
    display_minutes(minutes, dev);
    display_seconds(seconds, dev);
        clearFrameBuffer(dev,BLACK);
    
}

void display_colons(pi_framebuffer_t *dev) {
    //draws the colons
   sense_fb_bitmap_t *bm=dev->bitmap;
   
    bm->pixel[1][2]=WHITE;
    bm->pixel[1][3]=WHITE;
    bm->pixel[1][5]=WHITE;
    bm->pixel[1][6]=WHITE;
    bm->pixel[2][2]=WHITE;
    bm->pixel[2][3]=WHITE;
    bm->pixel[2][5]=WHITE;
    bm->pixel[2][6]=WHITE;
    bm->pixel[4][2]=WHITE;
    bm->pixel[4][3]=WHITE;
    bm->pixel[4][5]=WHITE;
    bm->pixel[4][6]=WHITE;
    bm->pixel[5][2]=WHITE;
    bm->pixel[5][3]=WHITE;
    bm->pixel[5][5]=WHITE;
    bm->pixel[5][6]=WHITE;
}
void display_hours(int hours, pi_framebuffer_t *dev) {
   sense_fb_bitmap_t *bm=dev->bitmap;

    if(hours >= 16) {
        bm->pixel[4][1]=BLUE;
        hours -= 16;
    } if(hours >= 8) {
        bm->pixel[3][1]=BLUE;
        hours -= 8;
    } if(hours >= 4) {
        bm->pixel[2][1]=BLUE;
        hours -= 4;
    } if(hours >= 2) {
        bm->pixel[1][1]=BLUE;
        hours -= 2;
    } if(hours >= 1) {
        bm->pixel[0][1]=BLUE;
        hours -= 1;
    }
}
void display_minutes(int minutes, pi_framebuffer_t *dev) {
      sense_fb_bitmap_t *bm=dev->bitmap;

     if(minutes >= 32) {
        bm->pixel[5][4]=GREEN;
        minutes -= 32;
    } if(minutes >= 16) {
        bm->pixel[4][4]=GREEN;
        minutes -= 16;
    } if(minutes >= 8) {
        bm->pixel[3][4]=GREEN;
        minutes -= 8;
    } if(minutes >= 4) {
        bm->pixel[2][4]=GREEN;
        minutes -= 4;
    } if(minutes >= 2) {
        bm->pixel[1][4]=GREEN;
        minutes -= 2;
    } if(minutes >= 1) {
        bm->pixel[0][4]=GREEN;
        minutes -= 1;
}
}
void display_seconds(int seconds, pi_framebuffer_t *dev) {
   sense_fb_bitmap_t *bm=dev->bitmap;
 
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
}
