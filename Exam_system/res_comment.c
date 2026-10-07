#include <stdio.h>
int displayResult(int x){
    return x;
}
void main(){
    int a,comment;
    printf("Enter your average mark\t");
    scanf("%d", &a);
    comment = displayResult(a);
    if (comment < 0 || comment > 100 ){
            printf("Enter a valid input?????");

    }else if(comment >= 50){
        printf("Passed $$$$$");
    } else{
        printf("Failed !!!!!");

    }



}


