#include <iostream>
using namespace std;

int main(void){
    int n;  cin>>n;
    int arr[n];
    for(int i=0; i<n; cin>>arr[i++]);

    for(int i=0; i<n; i+=2){
        if(i>0 && arr[i-1] > arr[i])
            swap(arr[i-1], arr[i]);
        if(i<n-1 && arr[i+1] > arr[i])
            swap(arr[i+1], arr[i]);
    }
    cout<<"\n";
    for(int i=0; i<n; cout<<arr[i++]<<" ");
    cout<<"\n";
    return 0;
}
