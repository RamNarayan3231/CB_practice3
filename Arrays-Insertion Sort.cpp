#include<iostream>
using namespace std ;
int main() {
	
    int arr[1000];
    int n;
    cin >> n;
	//Input array..........................
	for(int i=0 ; i <= n - 1 ; i++){
		cin >> arr[i] ;
	}

	// Insertin soet.......................
	for(int i=1 ; i < n ; i++){
    	int ele = arr[i];
    	int j = i - 1;
    	while(j >= 0 && ele < arr[j]){
        	arr[j+1] = arr[j];
        	j--;
    	}
    arr[j+1] = ele;
	}


	//Print sorted array......................
	for(int i=0 ; i <= n - 1 ; i++){
		cout << arr[i] <<" ";
	}

	return 0;
}
