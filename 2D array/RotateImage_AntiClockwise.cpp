#include<iostream>
using namespace std;
int main(void) {
	int n;	cin>>n;
	int arr[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>arr[i][j];

	int l,r;

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++)
			swap(arr[i][j], arr[j][i]);

		l = 0;
		r = n-1;
		while(l<r){
			swap(arr[l++][i], arr[r--][i]);
		}
	}

    for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout<<arr[i][j]<<" ";
        cout<<"\n";
    }


	return 0;
}
