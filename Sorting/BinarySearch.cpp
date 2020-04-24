#include <iostream>
using namespace std;

int solve(int arr[], int n, int key){
    int s = 0, ed = n-1;
    int mid;

    while(s<=ed){
        mid = (s+ed)/2;
        if(arr[mid] == key)
            return mid+1;
        else if(arr[mid] > key)
            ed = mid-1;
        else if(arr[mid] < key)
            s = mid+1;
    }

    if(s>ed)
        cout<<"Key Not present in the array!",exit(0);
}

int main(void){
    int n;  cin>>n;
    int arr[n];
    for(int i=0; i<n; cin>>arr[i++]);
    int key;    cin>>key;
    cout<<solve(arr,n,key)<<"\n";
    return 0;
}
