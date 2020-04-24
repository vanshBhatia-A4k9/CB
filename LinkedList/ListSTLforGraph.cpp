#include<iostream>
#include<list>
using namespace std;

template <typename T>

void print(T x){

    for(auto s:x){
        cout<<s<<"->";
    }
    cout<<"\n";
}

int32_t main(void){

    cout<<"Enter the number of points: ";
    int n;  cin>>n;

    list<pair<int, int >> l[n];

    cout<<"Enter the number of edges: ";
    int e;  cin>>e;

    int x,y,wt;
    for(int i=0; i<e; i++){
        cin>>x>>y>>wt;
        ///Bidirectional graph
        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));
    }

    ///Print LL:

    for(int i=0; i<n; i++){
        cout<<"Linked List "<<i<<": ->";
        for( auto x:l[i] ){
            cout<<"("<<x.first<<", "<<x.second<<"), ";
        }
        cout<<"\n";
    }

    return 0;
}
