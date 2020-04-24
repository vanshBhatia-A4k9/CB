#include<iostream>
using namespace std;

void solve(int arr[], int n){

    int lo = 0;
    int hi = n-1;
    int mid = 0;

    while(mid<=hi){
        if(arr[mid] == 0){
            swap(arr[mid], arr[lo]);
            lo++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[hi]);
            hi--;
        }
    }

}

int32_t main(void){
    int n;  cin>>n;
    int arr[n];
    for(int i=0; i<n; cin>>arr[i++]);
    solve(arr, n);
    for(int i=0; i<n; cout<<arr[i++]<<" ");
    return 0;
}
