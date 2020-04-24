#include<iostream>
#include<limits.h>
#define ll long long int
using namespace std;
int main(void) {
    string s;  cin>>s;
    for(ll i=0;i<s.size();i++){
        if('9' - s[i] < s[i] - '0') ///{57 - 52 < }
             s[i] = ('9' - s[i]) + '0';
             //cout<<(int)('9' - s[i]);
        cout<<s[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
