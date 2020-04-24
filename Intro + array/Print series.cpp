#include<iostream>
using namespace std;
int main(void) {
    int t;  cin>>t;
    long int n,even_sum,odd_sum;
    while(t-- > 0){
        cin>>n;
        even_sum = 0;
        odd_sum = 0;
        while(n>0){
            if( (n%10) & 1 )
                odd_sum += n%10;
            else
                even_sum += n%10;
            n/=10;
        }

        if(odd_sum % 3 == 0 || even_sum % 4 ==0)
            cout<<"\nYES";
        else
            cout<<"NO\n";
    }
	return 0;
}
