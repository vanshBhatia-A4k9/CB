#include<iostream>
using namespace std;

int iterativeCount(int n){
    int ans = 0;
    while(n){
        ans += (n&1);
        n = n>>1;
    }
    return ans;
}

unsigned int brainKernighans(int n){
    unsigned int ctr = 0;
    while(n){
        n &= (n-1);
        ctr++;
    }
    return ctr;
}

int main(void) {
	int n;	cin>>n;
    cout<<"Iterative Method: "<<iterativeCount(n);
    cout<<"\nBrian Kernighan's Method: "<<brainKernighans(n);
    cout<<"\nGCC: "<<__builtin_popcount(n);
	return 0;
}
