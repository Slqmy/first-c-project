#include <stdio.h>
#include <stdlib.h>

float add(float x, float y) {
    return (x + y);
}

int main()
{
    char operation;

    printf("Enter operation: ");
    scanf("%s", &operation);

    float a;
    float b;

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    float result;
    switch (operation) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    }

    printf("%f %c %f = %f", a, operation, b, result);
}
