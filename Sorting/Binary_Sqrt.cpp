#include <iostream>
using namespace std;

float solve(int no, int p){
    int s=0, ed = no;
    int mid;
    float ans;

    while(s<=ed){
        mid = (s+ed)/2;
        if( mid*mid == no ){
            ans = mid;
            break;
        }
        else if( mid*mid > no ){
            ed = mid - 1;
        }
        else if( mid*mid < no ){
            ans = mid;
            s = mid + 1;
        }
    }
    float inc = 0.1;
    for(int i=0; i<p; i++){
        while( ans*ans <= no ){
            ans+=inc;
        }
        ans-=inc;
        inc/=10;
    }
    return ans;
}

int main(void){
    int n,no,p;  //cin>>n;
//    for(int i=0; i<n; i++){
        cin>>no>>p;
        cout.precision(18);
        cout<<solve(no,p);
//    }
    return 0;
}
