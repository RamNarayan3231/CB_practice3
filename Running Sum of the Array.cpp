#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 1000000; 
    int arr[MAX_SIZE];
    int n;
    cin >> n;
    if (n < 1 || n > MAX_SIZE) {
        
        return 1; 
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        arr[i] = sum;
        cout << arr[i] << " ";
    }

    return 0;
}
