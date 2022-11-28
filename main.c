#include <stdio.h>
#include <math.h>

int main ()
{
    float x,y,z,z1,z2;
    x = 4.112;
    y = 1.628;
    z = (3 * pow(x,2) + 1)/(5*y) + (2 * tan(x + 1))/(y-2);
    printf ("result is:%lf",z);


    getchar ();
    return 0;
}