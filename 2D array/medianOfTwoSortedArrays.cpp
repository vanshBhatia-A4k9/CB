#include<iostream>
using namespace std;
int main(void) {
	int n;	 cin>>n;
	int arr1[n],arr2[n];
	int arr3[n+n];
	for(int i=0;i<n;cin>>arr1[i++]);
	for(int i=0;i<n;cin>>arr2[i++]);
	int k=0;
	int i=0,j=0;
	while(i<n && j<n){
		if(arr1[i]<arr2[j]){
			arr3[k++] = arr1[i++];
		}
		else{
			arr3[k++] = arr2[j++];
		}
	}
	while(i<n)
        arr3[k++] = arr1[i++];
    while(j<n)
        arr3[k++] = arr2[j++];

    //for(int o=0;o<2*n;cout<<arr3[o++]<<" ");

	cout<<(arr3[(n-1)] + arr3[(n)])/2;

	return 0;
}
