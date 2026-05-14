#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSum = arr[0];
    int currentSum = arr[0];

    int start = 0;
    int end = 0;
    int tempStart = 0;

    for (int i = 1; i < n; i++) {

        if (arr[i] > currentSum + arr[i]) {
            currentSum = arr[i];
            tempStart = i;
        } else {
            currentSum += arr[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }
    }

    cout << "\nOriginal Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nMaximum Subarray: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nMaximum Subarray Sum = " << maxSum << endl;
    cout << "Start Index = " << start << endl;
    cout << "End Index = " << end << endl;

    return 0;
}