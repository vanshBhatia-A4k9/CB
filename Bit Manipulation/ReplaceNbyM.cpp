#include<iostream>
using namespace std;

int clearBits(int n, int i, int j){
    int a = (~0) <<(j + 1);
    int b = (1<<i) - 1;
    int mask = a|b;
    return n & mask;;
}

int main(void) {
	int n,m,i,j;	cin>>n>>m>>i>>j;
    n = clearBits(n,i,j);
    cout<<(n|(m<<i));
	return 0;
}
