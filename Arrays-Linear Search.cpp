#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
    int arr[n];
  
    if (n < 0 ) {
        
        return 0; 
    }
	//Input of an array.........................
	for(int i = 0 ; i <= n - 1 ; i++){
		cin >> arr[i];
	}
	
	// Search no.......
	long long int key;
	cin >> key ;
	int i;
	for( i=0 ; i <= n-1 ; i++){
		if(arr[i]==key){
			cout << i ;
			break ;
		}

	}
	if (i==n){
		cout << "-1";
	}
	return 0;
}
