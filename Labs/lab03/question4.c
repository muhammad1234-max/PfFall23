#include <stdio.h>
main() {
    int original_price=1500;
    float discount=0.2;
    int new_price;
    new_price= original_price * discount;
    printf("the final price is: ");
    printf("%d",new_price);
}
