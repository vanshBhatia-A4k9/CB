#include<iostream>
#include<string.h>
using namespace std;

void solve(char* input, char* ans, int i, int j){
	//Base case
	if( input[i] == '\0' ){
		ans[j] = '\0';
		cout<<ans<<"\n";
		return;
	}
	//Recursive case
	if( i < strlen(input) - 1 && input[i] == 'p' && input[i+1] == 'i' ){
		ans[j] = '3';
		ans[j+1] = '.';
		ans[j+2] = '1';
		ans[j+3] = '4';
		return solve(input, ans, i+2, j+4);
	}
	else{
		ans[j] = input[i];
		return solve(input, ans, i+1, j+1);
	}
}

int main(void) {
	int t;	cin>>t;
	while(t--){
		char input[1005];
		char ans[3005];
		cin>>input;
		solve(input, ans, 0, 0);
	}
	return 0;
}
