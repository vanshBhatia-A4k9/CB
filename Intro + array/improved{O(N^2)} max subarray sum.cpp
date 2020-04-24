#include<iostream>
#include<limits.h>
using namespace std;
int main(void) {
    int n;  cin>>n; int arr[n];
    for(int i=0;i<n;cin>>arr[i++]);
    int max_sum=INT_MIN;
    int cur_sum=0,l=0,r;
    //Generating sub arrays :
    for(int i=0;i<n;i++){
        if(cur_sum<0){
            cur_sum = 0;
            l = i;
        }
        cur_sum+=arr[i];
        if(cur_sum>max_sum){
            max_sum=cur_sum;
            r = i;
        }
    }
    cout<<"max sum is : "<<max_sum<<"\n";
    for(int i=l;i<=r;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    return 0;
}
