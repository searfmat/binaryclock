#include <sense.h>
#include <stdio.h>
#include <stdlib.h>

void display_time(int hours, int minutes, int seconds, pi_framebuffer_t *dev);
void display_colons(pi_framebuffer_t *dev);
void display_hours(int hours, pi_framebuffer_t *dev);
void display_minutes(int minutes, pi_framebuffer_t *dev);
void display_seconds(int seconds, pi_framebuffer_t *dev);
