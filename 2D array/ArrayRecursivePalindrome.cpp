#include<iostream>
using namespace std;

bool solve(int arr[], int start, int end){
	if(start>=end)
		return true;
	if( arr[start] == arr[end] )
		solve(arr, start + 1, end - 1);
	else
		return false;
}

int main(void) {
	int n;	cin>>n;
	int arr[n];
	for(int i=0; i<n; cin>>arr[i++]);
	if( solve(arr, 0, n-1) )
		cout<<"true\n";
	else
		cout<<"false\n";
	return 0;
}
