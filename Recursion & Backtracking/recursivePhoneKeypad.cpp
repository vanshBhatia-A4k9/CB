#include<iostream>
using namespace std;

char letters [][10] = { "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };

void keypad(char *arr, char *ans, int i, int j){
    if( arr[i] == '\0' ){
        ans[j] = '\0';
        cout<<ans<<", ";
        return;
    }
    ///Extract the digit
    int digit = (arr[i] - '0');
    if( digit == 1 || digit == 0 ){
        keypad( arr, ans, i+1, j );
    }

    ///Inclusion
    for( int k=0; letters[digit][k] != '\0'; k++ ){
        ans[j] = letters[digit][k];
        keypad( arr, ans, i+1, j+1 );
    }
    ///Exclusion
//    keypad( arr, ans, i+1, j );

}

int32_t main(void){
//    int n;   cin>>n;
//    char *arr = (char *)malloc(n*sizeof(char));
//    char *ans = (char *)malloc(n*sizeof(char));
//    for(int i=0; i<n; cin>>arr[i++]);
    char arr[100];
    char ans[100];
    cin>>arr;
    keypad(arr ,ans, 0, 0);
//    for(int i=0; i<n; cout<<arr[i++]<<" ");
//    delete(arr);
//    delete(ans);
    return 0;
}


