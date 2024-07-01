#include<iostream>
#include<cmath> 
using namespace std;

int main() {
    const int MAX_SIZE = 10000; // Maximum size of the array
    int arr[MAX_SIZE];
    int n;
    cin >> n;
    if (n < 1 || n > MAX_SIZE) {
        
        return 1;
    }

    // Input array elements
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Square each element
    for (int i = 0; i < n; i++){
        arr[i] = pow(arr[i], 2);
    }

    // Bubble sort
    for(int times = 0; times < n - 1; times++ ){
        for(int j = 0; j < n - times - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Output sorted array
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
