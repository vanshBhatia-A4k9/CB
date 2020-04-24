#include<iostream>
#include<math.h>
using namespace std;
int main(void) {
    long int n,x,sum=0; cin>>n;
    x=n;
    while(x>0){
        sum = sum + (int)(pow( (x%10), 3) + 0.5);
        x/=10;
    }
    (sum==n) ? cout<<"true\n" : cout<<"false\n";
	return 0;
}
