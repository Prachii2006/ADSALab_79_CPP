#include <iostream>
using namespace std;

int main() {
    int a[20], n;
    int low = 0, high, mid;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter array elements (1s followed by 0's):\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    high = n - 1;
    int count = 0;

    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == 0) {

            if (mid == 0 || a[mid - 1] == 1) {
                count = n - mid;
                break;
            } else {
                high = mid - 1;
            }
        }
        else {
            low = mid + 1;
        }
    }

    cout << "\nNumber of 0s in array: " << count << endl;

    return 0;
}