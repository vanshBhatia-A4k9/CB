#include<iostream>
using namespace std;

void solve(int *arr, int n, int i, int key){
	if( i == n-1 )
		return;

	if(arr[i] == key)
		cout<<i<<" ";

	solve(arr, n, i+1, key);
}

int main(void) {
	int n,key;	cin>>n;
	int *arr = new int[n];
	for(int i=0; i<n; cin>>arr[i++]);
	cin>>key;
	solve(arr, n, 0, key);
	return 0;
}
