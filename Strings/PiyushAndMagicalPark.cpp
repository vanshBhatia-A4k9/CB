#include<iostream>
using namespace std;
int32_t main(void) {
	std::ios_base::sync_with_stdio(false);	cin.tie(0);	cout.tie(0);
	int n,m,k,s;	cin>>n>>m>>k>>s;
	char arr[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == '.' && j != m-1)
				s-=3,cout<<s<<" Encountered: "<<arr[i][j]<<"\n";
			else if (arr[i][j] == '.' && j == m-1)
				s-=2,cout<<s<<" Encountered: "<<arr[i][j]<<"\n";
			if(arr[i][j] == '*' && j != m-1)
				s+=4,cout<<s<<" Encountered: "<<arr[i][j]<<"\n";
			else if (arr[i][j] == '*' && j == m-1)
				s+=5,cout<<s<<" Encountered: "<<arr[i][j]<<"\n";
			if(arr[i][j] == '#' && i != n-1){
                   // for(int k=j; k<m; cin>>arr[i][k++]);
				cout<<"Changed Row\n";
				break;
			}
			else if( ((arr[i][j] == '#' && i == n-1) || (i == n-1 && j == m-1)) && s >= k ){
				cout<<"Yes\n"<<s;
				exit(0);
			}
        }
	}

	cout<<"No\n";

	return 0;
}
