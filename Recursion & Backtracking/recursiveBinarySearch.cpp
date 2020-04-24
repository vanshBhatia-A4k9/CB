#include<iostream>
using namespace std;


int binarySearch(int arr[], int s, int e, int key){
    int mid = (s+e)/2;
    int ans = -1;
    if( arr[mid] == key )
        ans = mid;
    else if( arr[mid] > key )
        return binarySearch( arr, s, mid - 1, key  );
    else if( arr[mid] < key )
        return binarySearch( arr, mid + 1, e, key  );
    return ans;
}

int32_t main(void){
    int n,key;   cin>>n;
    int arr[n];
    for(int i=0; i<n; cin>>arr[i++]);
    cin>>key;
    cout<<binarySearch(arr, 0, n, key);
    return 0;
}
