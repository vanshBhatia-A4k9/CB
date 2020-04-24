#include<iostream>
using namespace std;

char digits[][10] = {"zero ", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine " };

void solve(int n){
    ///Base case
    if( n == 0 )
        return;
    solve(n/10);
    cout<<digits[n%10];
}

int32_t main(void){
    int n;   cin>>n;

    if(n<0)
        cout<<"Negative ",solve(-n);
    else
        solve(n);

    return 0;
}
