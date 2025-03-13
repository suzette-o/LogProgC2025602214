#include <stdio.h>
#include <math.h>

int main()
{
    float t, r, c, at, pt, L, h, h2, f1, f2, t1, ts;

    //variables
    L=2;
    f1= L/4.0;

    f2=3;
    //areas
    r= (L*2)*f1; //2
    c= pow(L,2); //4
    t1= (f2*L)/2.0;
    ts= (L*L)/2.0;
    t= ts*2;
    at= r+c+t1+t;

    //perimetros
    r= (f1*2)+(L*2); //Lados del rectangulo
    h=sqrt(pow(L,2) + pow(L,2)); //hipotenusa de los triangulos 2 y 3
    h2= sqrt(pow(f2,2) + pow(L,2)) + (h*2); //hiotenusa del triamgulo 4

    c= (L*3)-(L*2);
    pt= r+h2+c+f2; //sumamos f2 como el cateto del triangulo más grande

    printf("area: %f\n", at);
    printf("perimetro: %f\n", pt);



    return 0;
}
