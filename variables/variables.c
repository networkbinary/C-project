//variables in c:
/*
Author:NetworkBinary
Reg no:BCS-05-0541
*/
#include <stdio.h>
int main() {
    int h_cm;
    char name[15] = "" ;
    float h_m;
    
    printf("Enter your name too:\t");
    scanf("%s", &name);
    
    printf("Enter your height in cm:\t");
    scanf("%d", &h_cm);

    printf("what is your height in metres:\t");
    scanf("%f", &h_m);

    printf("My name is %s\n", name);
    printf("My height is %dcm\n", h_cm);
    printf("Height in M is %.2f\n", h_m);
    printf("Height in metres is %.2f while Height in cm is %d\n", h_m, h_cm);
}
