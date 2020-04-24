#include<iostream>
#include<math.h>
using namespace std;

int firstSetBit(int n){
    return log2( n & -n) + 1;
}

int main(void) {
    int n,tmp=0,ans,mask,toCheckBit,x,y,i;  cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
        tmp ^= arr[i];
    }

    toCheckBit = firstSetBit(tmp);
    ans = 0;
    mask = 1<<toCheckBit;
    for(i=0; i<n; i++){
        if( arr[i] & mask != 0)
            ans ^= arr[i];
    }
    x = ans;
    y = tmp^x;
    cout<<min(x,y)<<" "<<max(x,y);
	return 0;
}
