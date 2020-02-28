#include <stdio.h>

struct vector {
    float u;
    float v;
    float result;
};

int main()
{
    struct vector x, y, z;
    printf("Enter u: ");
    scanf("%f %f %f",&x.u, &y.u, &z.u);
    printf("Enter v: ");
    scanf("%f %f %f",&x.v, &y.v, &z.v);
    x.result = y.u*z.v - z.u*y.v;
    y.result = z.u*x.v - x.u*z.v;
    z.result = x.u*y.v - y.u*x.v;
    printf("u x v = %.1f %.1f %.1f\n",x.result, y.result, z.result);
    

  return 0;
}