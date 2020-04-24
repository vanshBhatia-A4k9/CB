#include<iostream>
using namespace std;

void solve(char input[], int i){
	if(input[i] == '\0')
		return;

	int digit = (input[i] - '0');
	cout<<digit;
	solve(input, i+1);
}

int main(void) {
	char input[15];
	cin>>input;
	solve(input, 0);
	return 0;
}
