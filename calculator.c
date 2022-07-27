#include<stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2;
    printf("Enter the operator (+,-,*,/,pow): ");
    scanf("%c", &operator);
    printf("Enter the two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
        printf("%lf + %lf = %lf", num1, num2, num1+num2);
        break;

        case '-':
        printf("%lf - %lf = %lf", num1, num2, num1-num2);
        break;

        case '*':
        printf("%lf*%lf = %lf", num1, num2, num1*num2);
        break;

        case '/':
        printf("%lf/%lf = %lf", num1, num2, num1/num2);
        break;

        default:
        printf("Wrong Operator");
        break;
    }

    return 0;
}
