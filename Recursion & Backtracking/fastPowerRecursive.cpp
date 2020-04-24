#include<iostream>
using namespace std;

int fastPower(int x, int y){
    if( y==0 ){
        return 1;
    }

    int halfAns = fastPower(x, y/2);
    halfAns *= halfAns;

    if(y&1){
        return x*halfAns;
    }
    return halfAns;
}

int32_t main(void){
    int x,y;   cin>>x>>y;
    cout<<fastPower(x, y);
    return 0;
}
