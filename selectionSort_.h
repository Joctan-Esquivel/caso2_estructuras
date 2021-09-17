#ifndef SELECTIONSORT
#define SELECTIONSORT 1
#include <iostream>
#include <stdlib.h>
using namespace std;

void swap(float *a , float *b){
    float temp = *a; 
    *a = *b;
    *b = temp;
} 


void sortBySelectionSort(float *pValuesToSort, int pSize){
    float minValue = pValuesToSort[0];
    for (int index = 0; index < pSize ;index++){

        for (int nextIndex = index+1; nextIndex< pSize;nextIndex++){
            if (pValuesToSort[nextIndex]<pValuesToSort[index]){

                swap(&pValuesToSort[index] , &pValuesToSort[nextIndex]);
            }


        }

    } 
    for (int i = 0; i < pSize; i++)
        cout << *(pValuesToSort + i) << "  ";
    cout << endl;

}
#endif

