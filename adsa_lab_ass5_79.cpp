/*
    Program: Maximizing Profit by Trading Stocks
    Name: Prachi Lahoti
    Roll No: 79
*/

#include <iostream>
using namespace std;

int maxProfit(int arr[], int n) {
    int profit = 0;

    // Loop through prices
    for (int i = 1; i < n; i++) {
        // If price goes up, add the difference to profit
        if (arr[i] > arr[i - 1]) {
            profit += arr[i] - arr[i - 1];
        }
    }
    return profit;
}

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    int arr[100];
    cout << "Enter stock prices: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Maximum Profit = " << maxProfit(arr, n) << endl;
    return 0;
}

/*
-------------------- OUTPUT --------------------
Enter number of days: 6
Enter stock prices: 7 1 5 3 6 4
Maximum Profit = 7
------------------------------------------------
Explanation:
Buy at 1 and sell at 5 → profit 4
Buy at 3 and sell at 6 → profit 3
Total profit = 7
*/
