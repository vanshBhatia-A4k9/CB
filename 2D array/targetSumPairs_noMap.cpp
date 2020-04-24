#include <iostream>
#include <algorithm>
using namespace std;

int main(void){

    int n,k;  cin>>n;
    int arr[n];
    //Take input
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);
    //Key input
    cin>>k;
    int l=0,r=n-1;
	while(l<r){
		if(arr[l] + arr[r] == k){
			cout<<arr[l++]<<" and "<<arr[r--]<<"\n";
		}
		else if(arr[l] + arr[r] < k)
			l++;
		else if(arr[l] + arr[r] > k)
			r--;
	}
    return 0;
}
