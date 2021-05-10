#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    intitgraph(&gd,&gm,"c:\\TC\\BGI");
    putpixel(50,50,RED);
    closegraph();
    return 0;
}
