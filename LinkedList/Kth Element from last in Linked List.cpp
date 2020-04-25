#include <iostream>
#include <list>
using namespace std;

int32_t main(void){
    list <int> l;

    int input,k;
    cin>>input;

    while(input != -1){
        l.push_back(input);
        cin>>input;
    }

    cin>>k;

    list<int>::iterator fast = l.begin();
    list<int>::iterator slow = l.begin();

    while(k-- > 0)
        fast++;

    while(fast != l.end()){
        fast ++ ;
        slow ++ ;
    }

    cout<<*slow;
    return 0;
}