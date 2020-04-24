#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isPaliondrome(string s, int n){
    int l=0,h = n-1;
    while(l<h){
        if(s[l++] != s[h--]){
            return false;
        }
    }
    return true;
}

int main(void) {
    int t;  cin>>t;
    string s;
    while(t--){
        cin>>s;
        vector <string> v;
        int n = (int)s.size();
        for(int i=0; i<n; i++){
            for(int j=1; j<= n-i; j++){
                if( (s.substr(i,j)).size() % 3 ==0 )
                v.push_back( (s.substr(i,j)) );
            }
        }
        int ctr = 0;
        for(int i=0; i<v.size(); i++){
            if(isPaliondrome(v[i], (int)v[i].size()))
                ctr++;
        }
        if(ctr == v.size())
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
	return 0;
}
