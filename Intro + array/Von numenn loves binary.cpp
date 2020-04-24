#include<bits/stdc++.h>
//#define sync std::ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL)
//#define ll long long
//#define pb push_back
//#define eb emplace_back
//#define MOD 1000000007
//using namespace std;
//ll dp[10000005];

int main(void){
    //sync;
    int n;
    string s;
    cin>>s;
    n = s.size()-1;
    int dec = 0;
    for(int i=0; i<=n; i++){
        if(s[i] == '0')
            continue;
        else
            dec = dec + (int)(pow(2,n-i) + 0.5);
    }
    cout<<dec<<"\n";
    return 0;
}
