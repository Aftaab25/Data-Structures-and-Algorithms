#include<bits/stdc++.h>

using namespace std;

int find_max_subarray_sum(vector<int>& nums) {
	// Kadane's ALgorithm

	int sum = 0;
	int maxSum = INT_MIN;
	for (auto i: nums) {
		sum += i;
		if (sum > maxSum) {
			maxSum = sum;
		}

		if (sum < 0) sum = 0;

	}

	return maxSum;
}

int main() {
#ifndef ONLINE_JUDGE
    // For getting input from input.txt
    freopen("input.txt", "r", stdin);
    // For writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

	vector<int> v;
	int num;

	while(cin >> num) {
		v.emplace_back(num);
	}

	cout << find_max_subarray_sum(v) << endl;

}