#include <stdio.h>

struct complex {
    float a;
    float b;
};

struct complex add_complex(struct complex a, struct complex b)
{
    struct complex result;
    result.a = a.a + b.a;
    result.b = a.b + b.b;
    // printf("DEBUG tmp.a %f %f\n", result.a, result.b);
    return result;
};

struct complex multiply_complex(struct complex a, struct complex b)
{
    struct complex tmp;
    tmp.a = a.a * b.a - a.b * b.b;
    tmp.b = a.a * b.b + a.b * b.a;
    return tmp;
};

void print_complex(char str[], struct complex b)
{
    if ((b.a > 0 && b.b > 0) || (b.a < 0 && b.b > 0)){
        printf("%s", str);
        printf("%.1f + %.1fi\n", b.a, b.b);
    }
    else if(b.b == 0 && b.a == 0){
        printf("%s", str);
        printf("0.0\n");
    }
    else if (b.b == 0.0){
        printf("%s", str);
        printf("%.1f\n", b.a);
    }
    else if (b.a == 0){
        printf("%s", str);
        printf("%.1fi\n", b.b);
    }
    // +  -
    else if(b.a > 0 && b.b < 0){
        printf("%s", str);
        printf("%.1f - %.1fi\n", b.a, b.b*-1);
    }
    // - +
    // - -
    else if(b.a < 0 && b.b < 0){
        printf("%s", str);
        printf("%.1f - %.1fi\n", b.a, b.b*-1);
    }
    
}

int main()
{
    struct complex C, D, E, F;
    printf("Enter C: ");
    scanf("%f %f", &C.a, &C.b);

    printf("Enter D: ");
    scanf("%f %f", &D.a, &D.b);


    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}