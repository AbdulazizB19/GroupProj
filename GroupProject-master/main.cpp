#include <graphics.h>
#include "point.hpp"
#include "bullets.hpp"

int main()
{

    int w = getmaxwidth();
    int h = getmaxheight();

    initwindow(w, h, "a");
    Bullets a(100,800,100,100,50,50);

    a.draw();
 while (!kbhit())
	{
		delay(150);
        a.undraw();
        a.move();
    }
}