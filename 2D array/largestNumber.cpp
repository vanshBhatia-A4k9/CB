#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(string X, string Y){

	string XY = X.append(Y);
	string YX = Y.append(X);

	return XY.compare(YX) > 0 ? 1 : 0;

}

int main(void) {
	int t,n;	cin>>t;
	while(t--){
		cin>>n;
		vector<string> arr;
		for(int i=0; i<n; i++){
			string temp;
			cin>>temp;
			arr.push_back(temp);
		}
		sort(arr.begin(), arr.end(), cmp);

		for(int i=0; i<n; cout<<arr[i++]);
		cout<<endl;
	}
	return 0;
}
