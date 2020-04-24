#include<iostream>
#define ll long long
using namespace std;

ll fastExponentiation(ll x, ll y){
    ll ans = 1;
    while(y){
        if(y&1)
            ans *= x;
        x *= x;
        y >>= 1;
    }

    return ans;
}

int32_t main(void){
    ll x,y; cin>>x>>y;
    cout<<fastExponentiation(x, y)<<"\n";
    return 0;
}
