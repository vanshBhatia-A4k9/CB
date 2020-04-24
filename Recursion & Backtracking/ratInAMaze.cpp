#include<iostream>
using namespace std;

int ctr = 0;

bool solve( char in[10][10], int soln[10][10], int i, int j, int m, int n ){
    ///Base case
    if( (i == m-1) && (j == n-1) ){
        ctr++;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++)
                cout<<soln[i][j]<<" ";
            cout<<"\n";
        }
        cout<<"\n";
        return true;
    }
    /// 'X' case:
    if( in[i][j] == 'X' )
        return false;

    /// Array out of bounds exception
    if( i>=m || j>=n )
        return false;

    ///Recursive case:
    soln[i][j] = 1;

    bool Right = solve(in, soln, i, j+1, m, n);
    bool Down = solve(in, soln, i+1, j, m, n);

    ///Backtracking
    soln[i][j] = 0;

    if( Right || Down )
        return true;
    return false;

}

int32_t main(void){
    char in[10][10] = {"0000",
                       "00X0",
                       "000X",
                       "0X00"};
    int soln[10][10] = {0};
    solve( in, soln, 0, 0, 4, 4 );
    cout<<"Total number of paths: "<<ctr;
    return 0;
}


