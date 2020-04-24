#include<iostream>
#include<math.h>
using namespace std;

int main(void) {
	int n,temp,ans=0;	cin>>n;
//	while(n--){
//        cin>>temp;
//        ans ^= temp;
//	}
//	for(int i=1; i<=n; i++){
//        ans ^= i;
//	}
	cout<< log2(n&(-n)) + 1;
	return 0;
}
