#include <stdio.h>
#define PI 3.14
int main () {

float radious, area;
    printf ("Enter the radious of circle:");
       scanf ("%2f",&radious);
           area= PI*radious*radious;
               printf ("Area of circle is:%2f\n",area); 
        return 0;
  }