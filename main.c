#include "display.h"

int main(void){
	pi_framebuffer_t *fb=getFrameBuffer();
	fprint(stderr,"Going to print a sigma!\n");

	display_sigma(fb);
	fprintf(stderr,"Did it!\n");

	freeFrameBuffer(fb);
	fprintf(stderr,"Exiting.\n");

	return 0;

