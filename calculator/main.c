#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    printf("Enter the second number: ");
    scanf("%d", &num2);


    if(op == '+'){
        printf("%d", num1 + num2);
    }else if(op == '-'){
        printf("%d", num1 - num2);
    }else if(op == '*'){
        printf("%d", num1 * num2);
    }else{
        printf("%d", num1 / num2);
    }
    return 0;
}
