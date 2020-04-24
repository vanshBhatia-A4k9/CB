#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
ll solve(ll n, ll k){
	ll s=0, ed = n;
	ll mid,ans;
	while(s<=ed){
		mid = (s+ed)/(ll)(pow(2,k) + 0.5);
		cout<<"MID:: "<<mid<<"\n";
		cout<<"POW:: "<<(ll)(pow(mid,k) + 0.5)<<"\n";
		if((ll)(pow(mid,k) + 0.5) == n){
			ans = mid;
			break;
		}
		else if( (ll)(pow(mid,k) + 0.5) > n )
			ed = mid - 1;
		else if( (ll)(pow(mid,k) + 0.5) < n ){
			ans = mid;
			s = mid + 1;
		}
	}
	return ans;
}
int main(void) {
	ll t,n,k;	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<solve(n,k)<<"\n";
	}
	return 0;
}
