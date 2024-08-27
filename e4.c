// Excercise 4: C Strings and string functions

#include <stdio.h>
#include <string.h>


int main(int argc, void *argv[]){
    printf("\n> Print Hello 442 using C Strings\n");

    printf("\n> Print argv\n");
    
    printf("\n> Find and print the length of myString\n");

    printf("\n> Creaete myString2 using stack, copy contents from myString and print\n");

    
    printf("\n> Change 442 to 542 in myString2 and print again.\n");

    printf("\n> Creaete myString3 using heap, copy contents from myString and print\n");

    printf("\n> Creaete another string that contains \"I love \", concatate it with myString1 and print\n");
    // Check man 3 strnlen first (https://linux.die.net/man/3/strncat/)
    // Check man 3 strncpy first (https://linux.die.net/man/3/strncpy)

    return 0;
}
