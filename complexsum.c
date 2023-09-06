#include <stdio.h>

typedef struct Complex {
    double real;
    double imagine;
} complex;

int main() {
    
    complex c1 = {.real = 28.24, .imagine = 40};
    complex c2 = {.real = 36.3, .imagine = 19.1};
    complex subtract;
    
    subtract.real = c1.real - c2.real;
    subtract.imagine = c1.imagine - c2.imagine;
    
    printf("Result is %.2lf + %.2lfi\n", subtract.real, subtract.imagine);
    
    return 0;
}
