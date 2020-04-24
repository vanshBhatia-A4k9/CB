#include<iostream>
#include<limits.h>
using namespace std;
int main(void) {
    int n;  cin>>n; int arr[n],cum_sum[n];
    cin>>arr[0];
    cum_sum[0] = arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        cum_sum[i] = cum_sum[i-1] + arr[i];
    }
    int max_sum=INT_MIN;
    int cur_sum=0,l,r;
    //Generating sub arrays :
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++){
                cur_sum = cum_sum[j] - cum_sum[i-1];
            if(cur_sum>max_sum){
                max_sum = cur_sum;
                l = i;
                r = j;
            }
    }
    cout<<"max sum is : "<<max_sum<<"\n";
    for(int i=l;i<=r;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    return 0;
}
