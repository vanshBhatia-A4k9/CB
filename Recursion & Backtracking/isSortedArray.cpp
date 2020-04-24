#include<iostream>
using namespace std;

bool isSorted(int *arr, int n){
    if(n == 1)
        return true;
    if( (arr[0] < arr[1]) && isSorted(arr+1, n-1) )
        return true;
    return false;
}

int32_t main(void){
    int n;   cin>>n;
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i=0; i<n; cin>>arr[i++]);
    cout<< ( isSorted(arr, n) ? "True" : "False" );
    return 0;
}
