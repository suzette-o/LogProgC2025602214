#include <stdio.h>
#include <math.h>


int main() {
    float result;
    int x = 3;

    float A = (1 / 2) * x;
    float B = (3.0 + x) / 2.0;
    float C = pow(x, 2);
    float E = C * 2.0;
    float D = (2.0 + 3.0) * x;

    result = ((A + B) * E) / D;

    printf("res: %.1f\n", result);
    return 0;
}
