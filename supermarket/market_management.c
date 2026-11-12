#include <stdio.h>
#include <string.h>
struct Product {
    int prod_code;
    char prod_name[30];
    float unit_price;
    int quant;
};


int main(){
    struct Product p1;


    printf("Enter the product name: ");
    fgets(p1.prod_name, sizeof(p1.prod_name), stdin);

    printf("Enter the product code: ");
    scanf("%d", &p1.prod_code);

    printf("Enter the product quantity: ");
    scanf("%d", &p1.quant);

    printf("Enter the price per unit: ");
    scanf("%f", &p1.unit_price);

    printf("Product name: %s", p1.prod_name);
    printf("Product code: %d\n", p1.prod_code);
    printf("Product quantity: %d\n", p1.quant);
    printf("Price per unit: %.2f\n",p1.unit_price);
    printf("Total value of available stock: %.2f", p1.quant * p1.unit_price);

return 0;
}
