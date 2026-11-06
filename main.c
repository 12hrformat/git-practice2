#include <stdio.h>
int main() {
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    float total = 0.0f;
    char currency = '$';
    /* ask user the questions*/
    printf("What would you like to buy: ");
    fgets(item, sizeof(item), stdin);

    printf("How much does it cost: ");
    scanf("%f\n", &price);

    printf("how many each: ");
    scanf(" %d\n", &quantity);

    total = (price * quantity);

    printf("Thank you! you have bought %c", item);
    printf("Your total is: %.2f%c",total, currency );

    return 0;
}