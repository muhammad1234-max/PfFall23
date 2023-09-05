#include <stdio.h>

int main() {
   int total_distance;
   const int fuel_average = 2;
   int fuel_consumption;
   total_distance = 10 + 10 + 5 + 15;
   fuel_consumption = total_distance * fuel_average;
   printf("the total fuel consumed is: %d\n",fuel_consumption);
   
    return 0;
}
