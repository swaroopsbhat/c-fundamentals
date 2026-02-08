/*
 * Purpose: Demonstrates static allocation of strings and pointer usage in C.
 * Context: Written as part of C fundamentals learning for embedded systems.
 */
 /* A firmware system stores a sensor value in memory using a global variable.
Another module needs to update this sensor value indirectly by using its memory address, not by accessing the variable directly.  */


#include<stdio.h>
int sensor = 0;
int* ptr;

int modify(int *ptr){
    *ptr = 12;          /*ptr = 12 */
    return sensor;
}

 int main(){
    int* adress = &sensor;
    printf("%d", sensor);
    printf("\n%d", *adress);
    int modify_val = modify(&sensor);
    printf("\n%d", modify_val);
    return 0;
 }
