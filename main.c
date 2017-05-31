#include "acllib.h"

int Setup()
{
	initWindow("Test",100,100,800,600);
	
	initConsole();
	printf("hello\n");
	
	beginPaint();
	line(10,10,100,100);
	
	endPaint();
	
	return 0;
	
 } 
