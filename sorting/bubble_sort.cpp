#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n) {
    // int n = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){
    //
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

