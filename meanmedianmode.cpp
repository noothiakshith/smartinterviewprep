#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Calculate sum
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << "Sum: " << sum << endl;
    
    // Calculate mean
    double mean = sum / double(n);  // Make sure the result is a floating-point value
    cout << "Mean: " << mean << endl;
    
    // Sort the array to find median and mode
    sort(arr.begin(), arr.end());
    
    // Calculate median
    double median;
    if (n % 2 == 1) {
        median = arr[n / 2];  // Odd length: take the middle element
    } else {
        median = (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;  // Even length: average of the two middle elements
    }
    cout << "Median: " << median << endl;
    
    // Calculate mode
    unordered_map<int, int> freq_map;
    for (int i = 0; i < n; i++) {
        freq_map[arr[i]]++;
    }
    
    int mode = arr[0];
    int max_count = 0;
    for (auto it : freq_map) {
        if (it.second > max_count) {
            max_count = it.second;
            mode = it.first;
        }
    }
    cout << "Mode: " << mode << endl;
    
    return 0;
}
