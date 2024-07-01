#include<iostream>
using namespace std;
int main() {
	int arr[100];
	int n;
	cin >> n;
	for(int i = 0 ; i <= n - 1 ; i++){
		cin >> arr[i];
	}
	for(int times = 1 ; times <= n - 1 ; times++ ){
		for(int j = 0 ; j <= n - times -1 ; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	for ( int i=0 ; i <= n-1 ; i++){
		cout << arr[i] << endl;
	}
	return 0;
}
