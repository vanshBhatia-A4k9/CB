#include<iostream>
using namespace std;
int main(void) {
    long int N; cin>>N;
    long int m,n;
    if(N&1){
        m = (N+1)/2;
        n = (N-1)/2;
    }
    else{
        m = N/2;
        n= 1;
    }
    cout<<2*m*n<<" "<<(m*m) + (n*n)<<"\n";
	return 0;
}

