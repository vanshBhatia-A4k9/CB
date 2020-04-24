#include<iostream>
using namespace std;
int main(void) {
	int n;	cin>>n;
	int arr[n];
	for(int i=0; i<n; cin>>arr[i++]);
	int left[n],right[n];
	left[0] = arr[0];
	right[n-1] = arr[n-1];
	for(int i=1; i<n; i++)
		left[i] = max(left[i-1],arr[i]);

	for(int i=n-2; i>=0; i--)
		right[i] = max(right[i+1],arr[i]);

	int res=0;
	for(int i=0; i<n; i++)
		res = res + min(right[i],left[i]) - arr[i];

	cout<<res;
	return 0;
}
