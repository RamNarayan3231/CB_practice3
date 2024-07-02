#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long int arr[n];

    //array input......
    for(long int i=0;i<=n-1;i++){
        cin >> arr[i];
    }

    //main function.
    for(long int i=0 ; i <=n-1 ; i++){
        long int sum=1;
        
        for (long int j = 0; j <= n-1 ; j++)
        {
            sum= (sum * arr[j]);
            
        }
        long int a = sum / arr[i];
        if(arr[i]!=0){
                long int a = sum / arr[i];
            }
            else{
                long int a=sum;
            }
        cout << a << " ";
    }
    return 0;
}
