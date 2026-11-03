#include <stdio.h>
int main (){
    float revenue[7];
    float sum = 0;
    int size = 7;

    for (int i = 0; i < size;i++){
            printf("Enter today's revenue: ");
            scanf("%f", &revenue[i]);

            sum += revenue[i];
            }

            float average = sum / size;
            printf("Total weekly revenue is: %.2f\n", sum);
            printf("Average daily revenue is: %.2f", average);




return 0;
}
