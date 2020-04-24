#include<iostream>
using namespace std;
int main(void) {
	int n1,n2,k,i=1,j=0;	cin>>n1>>n2;
	while(j!=n1){
		k = (3*i + 2);
		if(k % n2 != 0){
			cout<<k<<"\n";
			j++;
		}
		if(j == n1)
            break;
        i++;
	}
	return 0;
}
