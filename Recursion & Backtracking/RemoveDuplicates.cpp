#include<iostream>
#include<cstring>
using namespace std;

void solve(char *input, char *op, int i, int j, char prev){
	if( input[i] == '\0' ){
		op[j] = '\0';
		cout<<op<<"\n";
		return;
	}

	if( prev == input[i] )
		return solve(input, op, i+1, j, input[i]);

	op[j] = input[i];
	return solve(input, op, i+1, j+1, input[i]);

}

int main(void) {
//	char input[1005];
//	char op[1005];
//	cin>>input;
//	op[0] = input[0];
//	solve(input, op, 1, 1, input[0]);
    string s;   cin>>s;
    cout<<s.substr(1);
	return 0;
}
