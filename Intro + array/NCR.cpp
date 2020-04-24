#include<iostream>
using namespace std;
int main(void) {
    int n=3;
    int arr[n] = {1,2,3};
    for(int i=0;i<n;i++)
        cout<<arr[n-i-1]<<" ";
    return 0;
}
