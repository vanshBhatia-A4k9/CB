#include<iostream>
using namespace std;

int main(void){

    int r,c;  cin>>r;

    int** arr = new int*[r];

    for(int i=0;i<r;i++){
        cout<<"\nEnter the number of elements in the "<<i<<"th row: ";
        cin>>c;
        arr[i] = new int[c+1];
        arr[i][0] = c;
        cout<<"\nEnter the elements in the "<<i<<"th row: ";
        for(int j=1;j<c+1;j++){
            cin>>arr[i][j];
        }
    }


    for(int i=0;i<r;i++){
        for(int j=1;j<=arr[i][0];j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }

    for(int i=0;i<r;i++)
        delete [] arr[i];
    delete []arr;
    return 0;
}
