#include <stdio.h>

int main()
{
    printf("1) Hello World!");
    printf("\n2) Hello\tWorld!");
    printf("\n3) Hello\vWorld!"); //doesnt work anymore(\f too)
    printf("\n4) Hello\nWorld");
    printf("\n5) Hello..\rWorld");
    return 0;
}

/*diff between carriage return and enter key: 
 *carraige return(\r) brings the pointer location back to the FIRST letter of SAME line it was printing at and starts overwriting the previously written texts
 *enter key just moves back to the FIRST letter of line BELOW/NEXT to the one it was printing at. */