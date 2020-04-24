#include<iostream>
using namespace std;
int main(void) {
    long int n; cin>>n;
    bool flag = false;
    if(!(n&1))
        cout<<"Not Prime\n";
    else{
        for(long int i=3; i*i<n; i+=2){
            if(n%i == 0){
                flag = true;
                break;
            }
        }
        if(flag)
            cout<<"Not Prime\n";
        else
            cout<<"Prime\n";
    }
	return 0;
}
