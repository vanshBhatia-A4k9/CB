#include<iostream>
using namespace std;

int decrease(int n){
    if(n==0)
        return 1;
    cout<<n<<" ";
    decrease(n-1);
}

int increase(int n){
    if(n==0)
        return 1;
    increase(n-1);
    cout<<n<<" ";
}

int32_t main(void){
    int n;   cin>>n;
    increase(n);
    cout<<"\n";
    decrease(n);
    return 0;
}
