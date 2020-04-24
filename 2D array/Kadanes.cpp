#include<iostream>
#include<limits.h>
using namespace std;
int main(void) {
	int n,t;	cin>>t;
	while(t--){
		int res=0;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; cin>>arr[i++]);
		int mx = INT_MIN;
		int curr = 0;
		for(int i=0; i<n; i++){

			curr+=arr[i];

			if(curr < 0){
				curr = 0;
				//i++;
			}
			else if(curr > mx){
				mx = curr;
			}
		}
		cout<<mx<<"\n";
	}
	return 0;
}
