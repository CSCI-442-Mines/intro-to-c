// Excercise 2: Arrays and Pointers 

#include <stdio.h>

// A function to print a given int array
void printIntArray(int *array, int size){
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

// A function to double the value at the given address 
void doubleValue(int *input){
    *input = *input * 2;
}

// Main function
int main(int argc, void *argv[]){
    // Declare an uninitalized array (myArray1) and set 3rd element to 442
    int myArray1[10];
    myArray1[2] = 442;

    // Declare an array (myArray2) of 10 integers and initialize all to zero
    int myArray2[10] = { 0 };

    // Declare an array (myArray3) of 3 integers with separate initial values
    int myArray3[] = {1, 2, 3};

    printf("\n> Write a printIntArray function and print the 3 arrays above\n");
    printIntArray(myArray1, 10);
    printIntArray(myArray2, 10);
    printIntArray(myArray3, 3);    

    printf("\n> Create an integer pointer that points to beginning of myArray3 and print it\n");
    int *myPtr1 = myArray3;
    printIntArray(myPtr1, 3);

    printf("\n> Print the value of myPtr1\n");
    printf("%p\n", myPtr1);

    printf("\n> Print the value at the memory address pointed by myPtr1\n");
    printf("%d\n", myPtr1[0]);


    printf("\n> Reference operator: Create an integer pointer that points to second index of myArray3 and print it\n");
    int *myPtr2 = &myArray3[1];
    printIntArray(myPtr2, 3); // Warning!!!
    printIntArray(myPtr2, 2); 

    printf("\n> De-Reference operator: Print the value of the third index pointed by myPtr1\n");
    printf("%d\n", *(myPtr1+2));
    printf("%d\n", myPtr1[2]);

    printf("\n> Pointer arithmetic: Print the address of the third index pointed by myPtr1 \n");
    printf("%p\n", myPtr1+2);
    printf("%p\n", &myPtr1[2]);

    printf("\n> Create a function to double the value of third index pointed by myPtr1 and print myArray3 \n");
    doubleValue (myPtr1+2);
    printIntArray(myArray3, 3);    
    doubleValue (&myPtr1[2]);
    printIntArray(myArray3, 3);    
    // doubleValue (myPtr1[2]);
    // printIntArray(myArray3, 3); // Warning!!!

    printf("\n> Nullify myPtr1\n");
    myPtr1=NULL;
    printf("%p\n", myPtr1);
    printf("%p\n", myArray3);
    // printIntArray(myPtr1,3); // Warning!!!
    printIntArray(myArray3,3);    


    return 0;
}
