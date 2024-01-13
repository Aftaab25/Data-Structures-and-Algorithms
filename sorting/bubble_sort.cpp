#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}



int main(){
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}

/*
    With each iteration, it tries to store the largest
    element at the end of the array.
    6 0 3 6

    i = 0 => j = 0 : 3
    i = 1 => j = 0 : 2
    i = 2 => j = 0 : 1
    i = 3 => j = 0 : 0
*/

