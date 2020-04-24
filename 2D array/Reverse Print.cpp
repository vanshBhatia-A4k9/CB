#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<cstring>
using namespace std;

int test(char c[]){
    if(c=="x")
        return 1;
    else
        return 0;
}

int main(void) {
    // char ch[100];
    // cin.getline(ch,100,'.');
    // cout<<ch;
//    int m;  cin>>m;
//    cin.ignore();
//    string s1,s2;
//    getline(cin,s1);
//    getline(cin,s2);
//    //cin>>s;
//    int s1_Size = s1.size(), s2_Size = s2.size();
//    int i = 0;
//    int Hash[256] = {0};
//    if( s1_Size != s2_Size )
//        cout<<"No\n",exit(0);
//    while(i<s1_Size){
//        Hash[s1[i]]++;
//        Hash[s2[i]]--;
//    }
//
//    for(int i=0; i<s1_Size; i++)
//        if(Hash[i] - 48)
//            cout<<"No\n",exit(0);
//
//    cout<<"Yes\n";
    char c[10];
    scanf("%s",c);
    printf("%d",test(c));

	return 0;
}
