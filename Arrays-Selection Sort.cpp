#include<iostream>
using namespace std;
int main() {
	int arr[100];
	int n;
	cin >> n;

	//Input of an array....................

	for(int i = 0 ; i <= n - 1 ; i++){
		cin >> arr[i];
	}
	
	// Selection sort ......................

	for(int pos = 0 ; pos <= n - 2 ; pos++){
		int mini_index = pos ;
		for(int j = pos+1  ; j <= n - 1 ; j++){
			if( arr[j] < arr[mini_index]){
				mini_index = j ;
			}
		}
		swap (arr[pos] , arr[mini_index]);
	}

	//Print an array.................

	for (int i=0 ; i <= n-1 ; i++){
		cout << arr[i] << endl;
	}
	return 0;
}
