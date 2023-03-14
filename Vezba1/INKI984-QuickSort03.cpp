#include <iostream>
using namespace std;
// Swap two elements - Utility function  
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
   
// partition the array using last element as pivot
int partition (int asciiVals[], int low, int high) 
{ 
    int pivot = asciiVals[high];    // pivot 
    int i = (low - 1);   
   
    for (int j = low; j <= high- 1; j++) 
    { 
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if (asciiVals[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&asciiVals[i], &asciiVals[j]); 
        } 
    } 
    swap(&asciiVals[i + 1], &asciiVals[high]); 
    return (i + 1); 
} 
   
//quicksort algorithm
void quickSort(int asciiVals[], int low, int high) 
{ 
    if (low < high) 
    { 
        //partition the array 
       int pivot = partition(asciiVals, low, high); 
   
        //sort the sub arrays independently 
        quickSort(asciiVals, low, pivot - 1); 
        quickSort(asciiVals, pivot + 1, high); 
    } 
} 
   
void displayArray(int asciiVals[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<asciiVals[i]<<"\t"; 
      
} 
   
int main() 
{ 
     int MAX_SIZE = 100;
     
    char arr[]={'A','l','e','k','s','a','n','d','a','r','V','r','t','e','s','k','i','I','N','K','I','9','8','4'};
    MAX_SIZE = sizeof(arr)/sizeof(arr[0]);
    int asciiVals[MAX_SIZE];

    cout<<endl;
    for (int i = 0; i<MAX_SIZE; i++)
        cout<<arr[i];
        cout<<endl;
    for (int i = 0; arr[i] != '\0'; i++) 
        asciiVals[i] = (int)arr[i];
        cout << "ASCII values of the string: ";
    for (int i = 0; arr[i] != '\0'; i++) 
        cout << asciiVals[i] << " ";
    
    cout<<endl;
    quickSort(asciiVals, 0, MAX_SIZE-1); 
    cout<<"Array sorted with quick sort"<<endl; 
    displayArray(asciiVals,MAX_SIZE); 
    return 0; 
}