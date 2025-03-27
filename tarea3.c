#include <stdio.h>
#include <math.h>

int main ()
{
    float semi, t, r, v1, at, pt, L;

    //variables
    L=7;
    v1= 21/2.0;
    float v2=L*3;

    //areas
    semi= (3.1416*pow(v1,2))/2; //173.1807
    float t1= (L*v2)/2.0;
     t= t1*2;//73.5
    r= (L*v2)*2; //294
    at= semi+t+r;

    //perimetros
    semi= v1*(2+3.1416);
    t= pow(v2,2) + pow(L,2);
    float t2= (sqrt(t))*2;

    r= (L*4);
    pt= semi+t2+r;
    printf("area: %f\n", at);
    printf("perimetro: %f\n", pt);



}
