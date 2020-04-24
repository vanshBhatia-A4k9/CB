#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string s;	cin>>s;
	string res = "";
	int dif;
	int i;
	for(i=0; i<(int)s.size()-1; i++){
		dif = s[i+1] - s[i];
		res+=s[i];
		res+=to_string(dif);
	}
	res+=s[i];
	cout<<res<<"\n";
	return 0;
}
