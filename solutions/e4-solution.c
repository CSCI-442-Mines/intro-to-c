// Excercise 4: C Strings and string functions

#include <stdio.h>
#include <string.h>


int main(int argc, void *argv[]){
    printf("\n> Print Hello 442 using C Strings\n");
    printf("Hello 442!\n");
    char* myString = "Hello 442!";
    printf("%s\n", myString);


    printf("\n> Print argv\n");
    printf("argv[0]=%s\n", argv[0]);
    
    printf("\n> Find and print the length of myString\n");
    int length = strlen(myString);
    printf("Length of myString: %d\n", length);

    printf("\n> Creaete myString2 using stack, copy contents from myString and print\n");
    char myString2[length+1];
    strncpy(myString2, myString, length);
    printf("%s\n", myString2); // Warning!!!
    myString2[10]='\0';
    printf("%s\n", myString2);
    
    printf("\n> Change 442 to 542 in myString2 and print again.\n");
    myString2[6]='5';
    printf("%s\n", myString2);

    printf("\n> Creaete myString3 using heap, copy contents from myString and print\n");
    char *myString3 = malloc (length+1);
    strncpy(myString3, myString, length);
    myString3[10]='\0';
    printf("%s\n", myString3);
    free(myString3);

    printf("\n> Creaete another string that contains \"I love \", concatate it with myString1 and print\n");
    // Check man 3 strnlen first (https://linux.die.net/man/3/strncat/)
    char *iLoveString = "I love ";
    int concatenatedSize = strlen(iLoveString) + strlen(myString) + 1;
    printf("concatenatedSize: %d\n", concatenatedSize);

    char concatenatedString[concatenatedSize];
    // Check man 3 strncpy first (https://linux.die.net/man/3/strncpy)
    strncpy(concatenatedString, iLoveString, strlen(iLoveString));
    printf("concatenatedString (in progress): %s\n", concatenatedString);

    strncat(concatenatedString,myString,concatenatedSize);
    printf("concatenatedString (final): %s\n", concatenatedString);

    return 0;
}
