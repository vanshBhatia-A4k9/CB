#include<iostream>
using namespace std;

unsigned long long ctr = 0;


void solve(char* input, char* ans, int i, int j){
    ///Base Case
    if(input[i] == '\0'){
        ctr++;
        ans[j] = '\0';
        cout<<ans<<" ";
        return;
    }

    ///Inclusion of the letter:
    ans[j] = input[i];
    solve(input, ans, i+1, j+1);

    ///Exclusion of the letter:
    solve(input, ans, i+1, j);


}

int main(void) {

    char input[1005];
    char ans[3005];
    cin>>input;
    solve(input, ans, 0, 0);
    cout<<ctr;
	return 0;
}
