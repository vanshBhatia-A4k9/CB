#include<iostream>
using namespace std;

int main(void){
    int arr [3][3] = { {1,2,3},
                     {4,5,6},
                     {7,8,9} };
    int temp;
    //Transpose + Row reversal
    int l,r;
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++){
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        l=0;r=2;
        while(l!=r){
            temp = arr[i][l];
            arr[i][l] = arr[i][r];
            arr[i][r] = temp;
            l++,r--;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }


    return 0;
}
