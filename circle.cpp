#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)""); // Explicit cast to suppress warning

    circle(320, 240, 200);

    getch(); // Wait for a key press
    closegraph(); // Close graphics mode
    return 0;
}
