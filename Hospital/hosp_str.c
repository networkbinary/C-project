#include <stdio.h>
#include <string.h>
struct patient {
    int id;
    char name[20];
    int age;
    float temp;
    int days;
};
int main(){
    struct patient p1;
    printf("Enter your name: ");
    fgets(p1.name, sizeof(p1.name), stdin);

    printf("Enter your ID No: ");
    scanf("%d", &p1.id);

    printf("Enter your Age: ");
    scanf("%d", &p1.age);

    printf("Enter No of days you have been admitted: ");
    scanf("%d", &p1.days);

    printf("Enter your temperature: ");
    scanf("%f", &p1.temp);
    printf("\n");
    printf("Patient name: %s", p1.name);
    printf("Patient's ID: %d\n", p1.id);
    printf("Patient's Age: %d\n", p1.age);
    printf("No of days admitted: %d\n", p1.days);
    printf("Hospital accomodation cost: %d", p1.days * 2500);











}
