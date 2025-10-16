/*
    Program: Activity Selection Problem with K Persons
    Name: Prachi Lahoti
    Roll No: 79
*/

#include <iostream>
#include <algorithm>
using namespace std;

int maxShopsVisited(int S[], int E[], int N, int K) {
    // Sort shops by end time
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (E[i] > E[j]) {
                swap(E[i], E[j]);
                swap(S[i], S[j]);
            }
        }
    }

    int personEnd[100] = {0}; // store when each person is free
    int count = 0; // total shops visited

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (personEnd[j] <= S[i]) { // assign shop to free person
                personEnd[j] = E[i];
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    int N, K;
    cout << "Enter number of shops: ";
    cin >> N;

    int S[100], E[100];
    cout << "Enter start times: ";
    for (int i = 0; i < N; i++)
        cin >> S[i];

    cout << "Enter end times: ";
    for (int i = 0; i < N; i++)
        cin >> E[i];

    cout << "Enter number of persons: ";
    cin >> K;

    cout << "Maximum shops visited = " << maxShopsVisited(S, E, N, K) << endl;
    return 0;
}

/*
-------------------- OUTPUT --------------------
Enter number of shops: 6
Enter start times: 1 3 3 5 7 8
Enter end times: 2 4 6 7 8 9
Enter number of persons: 2
Maximum shops visited = 6

*/
