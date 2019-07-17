//
// Created by Parrot on 2019-07-11.
//
#include <stdlib.h>
#include <stdio.h>

// global variable to keep track of array size
int ARRAY_SIZE = 5;

// helper function to print out the array
void printArray(int arr[]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n-------\n");
}

int main() {

    // here is the unsorted array
    int array[] = {8,4,1,9,0};
    printf("Original array:\n");
    printArray(array);

    // 1. create a new empty array to store the sorted result
    int results[] = {0,0,0,0,0};

    // 2. loop through the unsorted array
    int k = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        //  - search for the smallest number
        // -----------------------------------
        // searching the smallest item in the array
        int smallestValue = array[0];
        int positionOfSmallest = 0;
        for (int j = 0; j < ARRAY_SIZE; j++) {
            int current = array[j];
            if (current < smallestValue) {
                smallestValue = current;
                positionOfSmallest = j;
            }
        }
        printf("Smallest item: %d\n", smallestValue);
        // -----------------------------------

        //  - put the smallest number into the results array
        results[k] = smallestValue;
        k++;

        //  - "fake" delete the smallest number (replace it with 999999)
        array[positionOfSmallest] = 999999;

    }


    // 3. print the results to the screen
    printf("Original Array after Fake delete: \n");
    printArray(array);

    printf("Results after sorting: \n");
    printArray(results);
    return 0;
}



