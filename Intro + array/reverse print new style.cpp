#include<iostream>
using namespace std;
int main(void) {
    int n;  cin>>n; int arr[n];
    for(int i=0;i<n;cin>>arr[i++]);
    //Generating sub arrays :
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++)
                cout<<arr[k]<<" ";
            cout<<"\n";
    }
    return 0;
}
