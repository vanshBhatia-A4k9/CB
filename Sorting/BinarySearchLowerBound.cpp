#include <iostream>
using namespace std;

int lowerBound(int arr[], int n, int key){
    int s = 0, ed = n-1;
    int mid,ans=-1;

    while(s<=ed){
        mid = (s+ed)/2;
        if(arr[mid] == key){
            ans = mid;
            ed = mid - 1;
        }
        else if(arr[mid] > key)
            ed = mid-1;
        else if(arr[mid] < key)
            s = mid+1;
    }

//    if(s>ed)
//        cout<<"Key Not present in the array!",exit(0);

    return ans;
}


int upperBound(int arr[], int n, int key){
    int s = 0, ed = n-1;
    int mid,ans=-1;

    while(s<=ed){
        mid = (s+ed)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] > key)
            ed = mid-1;
        else if(arr[mid] < key)
            s = mid+1;
    }

//    if(s>ed)
//        cout<<"Key Not present in the array!",exit(0);

    return ans;
}


int main(void){
    int n;  cin>>n;
    int arr[n];
    for(int i=0; i<n; cin>>arr[i++]);
    int key;    cin>>key;
    cout<<"Lower Bound: "<<lowerBound(arr,n,key)<<"\n";
    cout<<"Upper Bound: "<<upperBound(arr,n,key)<<"\n";
    return 0;
}

