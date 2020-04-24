#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(void){

    int n,k;  cin>>n;
    int arr[n];
    unordered_map<int, int> m;
    //Take input
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    sort(arr,arr+n);
    //Key input
    cin>>k;
    for(int i=0;i<n;i++){
        if( m.find(k-arr[i]) != m.end() ){
            cout<<arr[i]<<" and "<<k-arr[i]<<"\n";
            m.erase(arr[i]);
        }
    }
    return 0;
}
