//#include<iostream>
//#include<map>
//using namespace std;
//int main(void) {
//	string s;	cin>>s;
//	map <char,int> mp;
//	for(int i=0; i<(int)s.size(); i++)
//		mp[s[i]]++;
//	for(auto i : mp)
//		cout<<i.first<<i.second;
//	return 0;
//}
#include<iostream>
//#include<map>
using namespace std;
int main(void) {
	string s;	cin>>s;
	int arr[26] = {0};
	for(int i=0; i<(int)s.size(); i++){
		arr[s[i] - 'a']++;
	}
	for(int i=0; i<26; i++)
        if(arr[i]>0)
            cout<<(char)(i + 'a')<<arr[i];
	return 0;
}
