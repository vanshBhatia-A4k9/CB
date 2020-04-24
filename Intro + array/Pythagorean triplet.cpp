#include<iostream>
using namespace std;
int factorial(int n){
    int ans = 1;
    for(int i=2; i<=n; ++i)
        ans*=i;
    return ans;
}

int NCR(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(void) {
    cout << factorial(5)<<"\n";
    cout<< NCR(5,2);
    return 0;
}
