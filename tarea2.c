#include <stdio.h>
#include <math.h>

int main() {
    float L, pt, at, semi, c, c2, f1, r, f2, f3;
    L=7;
    //fracciones
    f1= L/5.0;
    f2= 3*f1;
    f3= L/2.0;

    //areas
    semi= (3.1416*pow(f3,2))/2;
    c= pow(L,2);
    c2= (pow(f1,2))*2;
    r= (f1*f2)*2;

    at= semi+c+c2+r;

    //perimetros
    semi= f3*(2+3.1416);
    c=  f1*7;
    c2= (f1*3)*2;
    r= (f1*2)+f2;


    pt= c+semi+c2+r;



    printf("area: %f\n", at);
    printf("perimetro: %f\n", pt);


}
