#include <stdio.h>
int calculateTotal(int x, int y, int z){
    return x + y + z;
}
void main(){
    int a,b,c,total;
    printf("Enter marks of your three subjects\t");
    scanf("%d%d%d", &a, &b, &c);
    total = calculateTotal(a,b,c);
    printf("Your total marks is %d", total);


}
