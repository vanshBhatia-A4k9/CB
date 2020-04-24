#include<iostream>
using namespace std;
int main(void) {
	int start,stop,step;	cin>>start>>stop>>step;
	double c;
	for(int i=start; i<=stop; i+=step){
        c = (i-32)*(5/9.0);
		cout<<i<<" "<<(int)c<<"\n";
	}
	return 0;
}
