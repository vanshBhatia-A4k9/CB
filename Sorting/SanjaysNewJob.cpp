#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> &p1, pair<string, int> &p2){

    if(p1.second == p2.second)
        return p1.first < p2.first;

        return p1.second > p2.second;
}

int32_t main(void){
    int k;  cin>>k;
    int n;  cin>>n;
    pair<string, int> p[n];
    for(int i=0; i<n; i++){
        cin>>p[i].first;
        cin>>p[i].second;
    }
    sort(p, p+n, cmp);
    for(int i=0; i<n; i++)
        if(p[i].second >= k)
            cout<<p[i].first<<" "<<p[i].second<<"\n";

    return 0;
}
