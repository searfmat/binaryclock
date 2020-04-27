#include "display.h"
#include <string.h>


int main() {
    pi_framebuffer_t *dev = getFrameBuffer();

    char time [9];
    char hours [3];
    char minutes [3];
    char seconds [3];

    int hr;
    int min;
    int sec;

    while(1) {
        scanf("%s", time);
        
        hours[0] = time[0];
        hours[1] = time[1];

        minutes[0] = time[3];
        minutes[1] = time[4];

        seconds[0] = time[6];
        seconds[1] = time[7];
        
        hr = atoi(hours);
        min = atoi(minutes);
        sec = atoi(seconds);

        display_time(hr,min,sec,dev);

    }
}
