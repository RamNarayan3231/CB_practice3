#include<iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    cin >> n;

    // Input array elements
    for(int i = 0; i < n; i++){
        cin >> arr[i];
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
