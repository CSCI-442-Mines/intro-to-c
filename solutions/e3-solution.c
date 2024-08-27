// Excercise 3: Stack, Heap and Malloc

#include <stdio.h>
#include <stdlib.h> 

// A function to create and populate an int array of size 10 using stack
int *generateArray1(int start_value){
    int myArray[10];

    for(int i=0; i<10; i++){
        myArray[i] = start_value + i;
    }
    return myArray;
}

// A function to create and populate an int array of size 10 using heap
int *generateArray2(int start_value){
    int *myArray = malloc(sizeof(int) * 10); 

    for(int i=0; i<10; i++){
        myArray[i] = start_value + i;
    }
    return myArray;
}


// A function to print a given int array
void printIntArray(int *array, int size){
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}


// Main function
int main(int argc, void *argv[]){
    // Write a function to create and populate an int array of size 10 using stack
    int *myGeneratedArray = generateArray1(442);

    // Print the generated array using the stack-based function
    printf("\n> Print the generated array using the stack-based function:\n");
    // printIntArray(myGeneratedArray,10);  // ATTENTION!!

    // Write a function to create and populate an int array of size 10 using heap
    int *myGeneratedArray2 = generateArray2(442);

    // Print the generated array using the stack-based function
    printf("\n> Print the generated array using the stack-based function:\n");
    printIntArray(myGeneratedArray2,10);

    // Cleanup after myGeneratedArray2
    free(myGeneratedArray2);

    return 0;
}

