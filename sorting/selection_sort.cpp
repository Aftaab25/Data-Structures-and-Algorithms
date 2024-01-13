#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
	for (int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void SelectionSort(int arr[], int n) {
	for (int i=0; i<n; i++) {
		int min_idx = i;

		for (int j=i+1; j<n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}

		if (min_idx != i) {
			swap(arr[min_idx], arr[i]);
		}
	}
}

int main()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr)/sizeof(arr[0]);
	SelectionSort(arr, n);
	printArray(arr, n);
	return 0;
}