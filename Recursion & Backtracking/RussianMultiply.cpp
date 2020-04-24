#include<iostream>
using namespace std;

int mul(int x, int y){
    int ctr = 0;
    while(x){
        if(y&1)
            ctr += y;
//        cout<<"\nX:: "<<x<<" Y:: "<<y<<"\n";
        y <<= 1;
        x >>= 1;
    }
    return ctr + (y>>1);
}

int32_t main(void){
    int x,y;   cin>>x>>y;
    cout<<mul(x,y);
    return 0;
}
