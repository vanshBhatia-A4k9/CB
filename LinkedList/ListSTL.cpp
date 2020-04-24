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

    list<int> l1{1,2,3,4,5,9,8,7,6,5};
    list<string> l2{"a","b","c"};
    l2.push_back("d");

    print(l1);

    l1.sort();

    print(l1);

    l1.reverse();

    print(l1);
    return 0;
}
