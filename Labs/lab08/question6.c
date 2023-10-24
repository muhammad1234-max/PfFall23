/*
Name:Muhammad Abbas
ID: 23k-0068
Description:You are given an array of integers. Write a C program that
defines a user-defined function processArray to calculate the sum, maximum, and
minimum values in the array. The program should take the array and its size as
parameters and use the function to compute these values.
Date: 24/10/23
*/

#include <stdio.h>
#include <string.h>

//function definition
void processArray(int size, int arr[size]){
int max=arr[0];
int sum=0;
for(int i=0; i<size; i++){
if(arr[i]>max){
max=arr[i];
}
}
printf("Max value is %d\n", max);
int min=max;
for(int i=0; i<size; i++){
if(arr[i]<min){
min=arr[i];
}
sum+=arr[i];
}
printf("Min value is %d\n", min);
printf("Sum is %d\n", sum);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 10};
    processArray(5,arr);
    return 0;
}
