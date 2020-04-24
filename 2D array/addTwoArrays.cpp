#include<iostream>
using namespace std;

void solve(int arr1[], int arr2[], int n, int m){

	int sum[n];
	int s=0,carry=0;

	int i=n-1,j=m-1,k=n-1;

	while(j>=0){
		s = arr1[i] + arr2[j] + carry;
		sum[k] = s%10;
		carry = s/10;
		i--;
		j--;
		k--;
	}

	while(i>=0){
		s = arr1[i] + carry;
		sum[k] = s%10;
		carry = s/10;
		i--;
		k--;
	}

	for(int i=n-1;i>=0;i--){
		if(carry){
			cout<<carry<<", ";
			carry = 0;
		}
		cout<<sum[i]<<", ";
	}
	cout<<"END";
}

void check(int arr1[], int arr2[], int n, int m){
	if(n>m)
		solve(arr1, arr2, n, m);
	else
		solve(arr2, arr1, m, n);
}

void init(){

	int n;	cin>>n;

	int arr1[n];
	for(int i=0; i<n; cin>>arr1[i++]);

	int m;	cin>>m;

	int arr2[m];
	for(int i=0; i<n; cin>>arr2[i++]);

	check(arr1, arr2, n, m);
}

int main(void) {
	init();
	return 0;
}
