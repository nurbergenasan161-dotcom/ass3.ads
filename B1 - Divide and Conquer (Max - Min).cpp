#include <iostream>
using namespace std;

struct Pair {
    int min;
    int max;
};

Pair findMinMax(int arr[], int low, int high) {
    Pair result, left, right;

    if (low == high) {
        result.min = result.max = arr[low];
        return result;
    }

    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            result.min = arr[low];
            result.max = arr[high];
        } else {
            result.min = arr[high];
            result.max = arr[low];
        }
        return result;
    }

    int mid = (low + high) / 2;

    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);

    result.min = min(left.min, right.min);
    result.max = max(left.max, right.max);

    return result;
}

int main() {
    int arr[] = {12, 45, 7, 23, 89, 15};
    int n = 6;

    Pair result = findMinMax(arr, 0, n - 1);

    cout << "Minimum: " << result.min << endl;
    cout << "Maximum: " << result.max << endl;
    cout << "Range: " << result.max - result.min << endl;

    return 0;
}
