#include<iostream>
using namespace std;

int countBits(int n){
	int ctr = 0;
	while(n){
		n &= (n-1);
		ctr++;
	}
	return ctr;
}

int minSteps(int n){
	int ctr = 0;
	if(countBits(n) == 1){
		return 1;
	}
	else{
		while(countBits(n--) != 1)
			ctr++;
		return 1 + minSteps(ctr);
	}

}

int main(void) {
	int t,n;	cin>>t;
	while(t--){
		cin>>n;
		cout<<minSteps(n)<<"\n";
	}
	return 0;
}
