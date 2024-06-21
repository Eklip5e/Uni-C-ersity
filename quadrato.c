#include <stdlib.h>
#include <stdio.h>

float quadrato(float);

void main()
{
    float x;
    printf("Inserire il valore di x per calcolarne il quadrato: ");
    scanf("%f", &x);
    printf("\nIl quadrato di %f e\': %f\n", x, quadrato(x));
    return 0;
}

float quadrato(float x)
{
    float quad;
    quad=x*x;
    return quad;
}
