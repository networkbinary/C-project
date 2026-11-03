#include <stdio.h>
int main(){
    int seen[10] = {0};
    int X;
    int rem;
    printf("Enter a number: ");
    scanf("%d", &X);
    while(X > 0){
        rem = X%10;
        if (seen[rem] == 1)
            break;
            seen[rem] = 1;
        X = X/10;
    }
    if (X > 0){
        printf("There is a repeat");
    }else{
        printf("No repeat");

    }






}
