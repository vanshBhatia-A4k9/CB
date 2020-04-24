#include<iostream>
using namespace std;
int main(void) {
	int k;	cin>>k;
	string s;	cin>>s;
	int max_for_one=0,max_overall=0;
	int ctr = 0;
	for(int j=0; j<(int)s.size(); j++){
		if(s[j] == 'a'){
			for(int i=j; i<(int)s.size(); i++){
				if(s[i] == 'a'){
					ctr++;
					continue;
				}
				else{
					if(ctr<=k){
						ctr++;
						//max_for_one = max(max_for_one, ctr);
					}
				}
			}
		}
		max_overall = max(max_overall, ctr);
		ctr = 0;
		//max_for_one=0;
	}
	max_for_one = 0, ctr = 0;
	for(int j=0; j<(int)s.size(); j++){
		if(s[j] == 'b'){
			for(int i=j; i<(int)s.size(); i++){
				if(s[i] == 'b'){
					ctr++;
					continue;
				}
				else{
					if(ctr<=k){
						ctr++;
						//max_for_one = max(max_for_one, ctr);
					}
				}
			}
		}
		max_overall = max(max_overall, ctr);
		ctr = 0;
		//max_for_one=0;
	}
	cout<<max_overall;
	return 0;
}
