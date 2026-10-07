#include <stdio.h>
int calculateAverage(int x, int y, int z) {
    int T,A;
    T = x + y + z;
    A = T/3;
    return A;
}
void main(){
    int a,b,c,average;
    printf("Enter marks of your three subjects\t");
    scanf("%d%d%d", &a, &b, &c);
    average = calculateAverage(a,b,c);
    printf("Your average mark is %d", average);





}

