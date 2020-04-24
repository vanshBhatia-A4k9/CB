#include<iostream>
using namespace std;

void solve(char input[], char prev, int i){
	if( input[i] == '\0' )
		return;
	if(input[i] == prev)
		cout<<"*";
	cout<<input[i];
	solve(input, input[i], i+1);
}

int main(void) {
	char input[10005];
	cin>>input;
	char prev = input[0];
	cout<<prev;
	solve(input, prev, 1);
	return 0;
}
