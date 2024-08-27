// Excercise 1: printf 

#include <stdio.h>

int main(int argc, void *argv[]){
    // Print Hello 442
    printf("Hello 442!");
    printf("Hello 442!\n");

    // Print integers:
    int a = 3;
    printf("value of a:%d\n", a);
    
    // Print character
    char myChar='C';
    printf("myChar:%c\n", myChar);
    printf("myChar:%d\n", myChar);
    
    // Print hexadecimal
    int myHex=0xC442;
    printf("myChar:%x\n", myHex);
    printf("myChar:%d\n", myHex);

    int myDec=50242;
    printf("myChar:%x\n", myDec);
    printf("myChar:%d\n", myDec);

    // Print floating point numbers
    float myFloat=4.42;
    printf("myChar:%f\n", myFloat);
    printf("myChar:%1.1f\n", myFloat);
    printf("myChar:%1.2f\n", myFloat);

    return 0;
}
