#include<iostream>
using namespace std;

void filterChars(string s, int n){
    int j = 0;
    while(n){
        if(n&1)
            cout<<s[j];
        j++;
        n >>= 1;
    }
    cout<<"\n";
}

void subsets(string s){
    int n = s.size();
    for(int i=0; i<(1<<n); i++ )
        filterChars(s,i);
}

int32_t main(void){
    string s;   cin>>s;
    subsets(s);
    return 0;
}
