#include<iostream>
using namespace std;

int solve(int n){
    if( n >= 1 || n <= 4 )
        return n;
    n = solve(n-1) + solve(n-4);
}

int32_t main(void){
    int n;   cin>>n;
    cout<<solve(n);
    return 0;
}
