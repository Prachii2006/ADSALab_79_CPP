/*
    Program: Coin Change Problem
    Name: Prachi Lahoti
    Roll No: 79
*/

#include <iostream>
using namespace std;

// Function to find all combinations
void solve(int coins[], int n, int target, int start, int path[], int len, int &count) {
    if (target == 0) { // base condition: target achieved
        count++;
        for (int i = 0; i < len; i++)
            cout << path[i] << " ";
        cout << endl;
        return;
    }

    for (int i = start; i < n; i++) {
        if (coins[i] <= target) {
            path[len] = coins[i]; // include coin
            solve(coins, n, target - coins[i], i, path, len + 1, count);
        }
    }
}

int main() {
    int n;
    cout << "Enter number of coin types: ";
    cin >> n;

    int coins[100];
    cout << "Enter coin values: ";
    for (int i = 0; i < n; i++)
        cin >> coins[i];

    int sum;
    cout << "Enter target sum: ";
    cin >> sum;

    int path[100]; // temporary array to store a combination
    int count = 0;

    cout << "\nCombinations to make " << sum << ":\n";
    solve(coins, n, sum, 0, path, 0, count);

    cout << "\nTotal ways = " << count << endl;
    return 0;
}

/*
-------------------- OUTPUT --------------------
Enter number of coin types: 3
Enter coin values: 1 2 3
Enter target sum: 4

Combinations to make 4:
1 1 1 1
1 1 2
1 3
2 2

Total ways = 4
------------------------------------------------
*/
