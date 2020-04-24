#include<iostream>
using namespace std;


int linearSearch(int arr[], int i, int n, int key){
    if( i == n )
        return -1;
    if( arr[i] == key )
        return i+1;
    return linearSearch(arr, i+1, n, key);
}

int32_t main(void){
    int n,key;   cin>>n;
    int arr[n];
    for(int i=0; i<n; cin>>arr[i++]);
    cin>>key;
    cout<<linearSearch(arr, 0, n, key);
    return 0;
}
