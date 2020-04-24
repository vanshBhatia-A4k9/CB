#include<iostream>
#include<math.h>
using namespace std;
int main(void) {
	int n,k,tmp,bit;	cin>>n;
	int bits[64] = {0};
	for(int i=0; i<n; i++){
        cin>>tmp;
		k = 0;
		while(tmp>0){
            bit = tmp&1;
			bits[k] += bit;
			k++;
			tmp = tmp>>1;
		}
	}
	int ans = 0;
	int p = 1;
	for(int i=0; i<64; i++){
		bits[i] %= 3;
		ans += ( bits[i] * p );
		p = p<<1;
	}
	cout<<ans;
	return 0;
}
