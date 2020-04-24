#include<iostream>
using namespace std;
int main(void) {
	int n,m;	cin>>n>>m;
	int arr[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
			cin>>arr[i][j];
	}
	int k; 	cin>>k;

	bool flag = false;

	for(int i=n-1,j=m-1; (i<0 || j<0 || j>m-1 || i>n-1);){
		if(arr[i][j] < k)
			j++;
		else if(arr[i][j] > k)
			i--;
		else if(arr[i][j] == k){
			cout<<1;
			flag = true;
			break;
		}
	}

	if(!flag)
		cout<<0;
	return 0;
}
