#include<iostream>
using namespace std;

int solve(int *arr, int n, int i, int key){
	//Base Case:
	if( i == n )
		return -1;

	int ans = solve( arr, n, i+1, key );

	if( arr[i] == key && ans == -1 )
		return i;

	return ans;
}

int32_t main(void) {
	int n;	cin>>n;
	int *arr = new int[n];
	for(int i=0; i<n; cin>>arr[i++]);
	int key;	cin>>key;
	cout<<solve(arr, n, 0, key);
	delete(arr);
	return 0;
}
