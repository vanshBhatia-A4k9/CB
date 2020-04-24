#include<iostream>
using namespace std;

string solve(int n, string &s){
    ///Base case
    if(n <= 0)
        return "";
    ///extract last digit
    int digit = n%10;
    /// recursive call
    solve(n/10, s);

    switch (digit){
        case 0 : s += "zero ";
                 break;
        case 1 : s += "one ";
                 break;
        case 2 : s += "two ";
                 break;
        case 3 : s += "three ";
                 break;
        case 4 : s += "four ";
                 break;
        case 5 : s += "five ";
                 break;
        case 6 : s += "six ";
                 break;
        case 7 : s += "seven ";
                 break;
        case 8 : s += "eight ";
                 break;
        case 9 : s += "nine ";
                 break;
        default: cout<<"\nInvalid Expression";
                 break;
    }
    return s;
}

int32_t main(void){
    int n;   cin>>n;
    string s;
    if(n<0) cout<<"Negative ";
    cout<<solve(-n, s);
    return 0;
}
