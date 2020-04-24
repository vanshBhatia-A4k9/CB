#include<iostream>
#include<string.h>
using namespace std;
int main(void) {
	string a; int b,ctr = 0;	cin>>a>>b;
	for(long int i=0; i<a.size(); i++){
		if(a[i]-48 == b)	ctr++;
	}
	cout<<ctr<<"\n";
	return 0;
}
