#include <iostream> 
using namespace std;
int main() 
{
    int arr[100], n;  

    cout << "Enter number of elements: ";
    cin >> n;  // To take number of elements from user

    cout << "Enter " << n << " elements:\n"; 
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];  // Take each element and store in array
    }
    int index = 0; -zero

    for (int i = 0; i < n; i++)
      {
        if (arr[i] != 0) // Check if current element is not zero
        {        
            arr[index] = arr[i];  // Place the non-zero element at index
            index++;              
        }
    }
// To fill the remaining positions with 0
    while (index < n) {
        arr[index] = 0;  // Put zero at current index
        index++;         
    }
    cout << "\nArray after pushing all 0s to end:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i];  
    }

    return 0;
}
