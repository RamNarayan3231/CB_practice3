#include<iostream>
using namespace std;
int main() {
	int arr[100];
	int n;
	cin >> n;
	//Input of array..........................
	for(int i = 0 ; i <= n - 1 ; i++){
		cin >> arr[i];
	}

	int largest = arr[0];
	// Search largest no......................
	int i = 1;
	while(i <= n-1){
		if(largest < arr[i]){
			largest = arr[i];
		}
		i++;
	}
	cout << largest ;

	return 0;
}
