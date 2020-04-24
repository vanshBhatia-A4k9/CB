#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(string a, string b){
	if( a.find(b) != string::npos || b.find(a) != string::npos )
		return a.length() > b.length();
	else
		return a<b;
}

int main(void) {
	int n;	cin>>n;
	vector<string> v(n);
	for(int i = 0; i<n; cin>>v[i++]);
	sort(v.begin(), v.end(), cmp);
	for(int i=0; i<n; cout<<v[i++]<<"\n");
	return 0;
}
