#include <stdio.h>


int main () {
    char name [15] = "";
    int age;
    printf("What is your name ?\t");
    scanf("%s", &name);
    printf("How old are you ?\t");
    scanf("%d", &age);



    printf("Your name is: %s\n", name);
    if (age >= 18) {
        printf("You are an adult");
    }else{
        printf("You are a minor");


    }

    return 0;



}
