#include<iostream>
using namespace std;

int mul(int x, int y){
    if(y==0)
        return 0;
    if(y>0) return x + mul(x,y-1);
    else if(y<0) return -mul(x,-y);
}

int32_t main(void){
    int x,y;   cin>>x>>y;
    cout<<mul(x,y);
    return 0;
}
