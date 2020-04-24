#include<iostream>
using namespace std;

int countBits(int n){
    int counter=0;
    while(n){
        n &= (n-1);
        counter++;
    }
    return counter;
}

unsigned int solve(int a, int b){
	unsigned int ctr = 0;
	for(int i=a; i<=b; i++){
		ctr += countBits(i);
	}
	return ctr;
}

int main(void) {
	int q,a,b;	cin>>q;
	while(q--){
		cin>>a>>b;
		cout<<solve(a, b)<<"\n";
	}
	return 0;
}
