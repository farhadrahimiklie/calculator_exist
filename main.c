#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float Add(){
    int a, b;
    printf("➕ Operation \n");
    printf("first number : ");
    scanf("%d", &a);
    getchar();

    printf("second number : ");
    scanf("%d", &b);
    getchar();
    return a + b;
}


float Subtract(){
    int a, b;
    printf("➖ Operation \n");
    printf("first number : ");
    scanf("%d", &a);
    getchar();

    printf("second number : ");
    scanf("%d", &b);
    getchar();

    return a - b;
}

float Multiply(){
    int a, b;
    printf("✖️  Operation \n");
    printf("first number : ");
    scanf("%d", &a);
    getchar();

    printf("second number : ");
    scanf("%d", &b);
    getchar();

    return a * b;
}

float Division(){
    int a, b;
    printf("➗ Operation \n");
    printf("first number : ");
    scanf("%d", &a);
    getchar();

    printf("second number : ");
    scanf("%d", &b);

    return a / b;
}

void Menu(){
    printf("Welcome to Farhad Rahimi Klie Show \n");
    printf("1. for ➕ \n");
    printf("2. for ➖ \n");
    printf("3. for ✖️ \n");
    printf("4. for ➗ \n");
    printf("0. exit \n");
}

int main(){
    int Operation;
    float result;
    do {
    Menu();
    printf("Enter your Choice ");
    scanf("%d", &Operation);
    getchar();
    switch (Operation) {
    case 1:
        result = Add();
        printf("Result is : %.2f \n", result);
        break;
    case 2:
        result = Subtract();
        printf("Result is : %.2f \n", result);
        break;
    case 3:
        result = Multiply();
        printf("Result is : %.2f \n", result);
        break;
    case 4:
        result = Division();
        printf("Result is : %.2f \n", result);
        break;
    default:
        printf("Invalid Operation \n");
        break;
    }
    }while (Operation != 0);

    return 0;
}
