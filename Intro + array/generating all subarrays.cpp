#include<iostream>
#include<limits.h>
using namespace std;
int main(void) {
    int n;  cin>>n; int arr[n];
    for(int i=0;i<n;cin>>arr[i++]);
    int max_sum=INT_MIN;
    int cur_sum=0,l,r;
    //Generating sub arrays :
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++){
                cur_sum = 0;
            for(int k=i;k<=j;k++){
                //cout<<arr[k]<<" ";
                cur_sum +=arr[k];
            }
            if(cur_sum>max_sum){
                max_sum = cur_sum;
                l = i;
                r = j;
            }
            cout<<"\n";
    }

    for(int i=l;i<=r;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    return 0;
}
