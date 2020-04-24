#include<iostream>
#include<string.h>
using namespace std;

unsigned long long ctr = 0;

void solve(char* input, char* ans, int i, int j){
    ///Base Case
    if(input[i] == '\0'){
        ans[j] = '\0';
        cout<<ans;
        return;
    }

    if(input[i] == 'x'){
        ctr++;
        return solve(input, ans, i+1, j);
    }
    else{
        ans[j] = input[i];
        return solve(input, ans, i+1, j+1);
    }


}

int main(void) {

    char input[1005];
    char ans[3005];
    cin>>input;
    solve(input, ans, 0, 0);
    for(int k=0; k<ctr; k++)
        cout<<'x';
	return 0;
}

