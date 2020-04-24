#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;
int main(void) {
    bool flag = false;
    int arr [4][4]= {{1,4,8,10}, {2,5,9,15}, {6, 16, 18, 20}, {11, 17, 19, 23} };
    int k = 23;
    for(int i=0,j=3; ;){
        //cout<<"I :: "<<i<<" J:: "<<j<<"\n";
        if(i<0 || j<0 || j>3 || i>3){
            break;
        }
        if(arr[i][j] == k){
            cout<<"Found!\n";
            flag = true;
            break;
        }
        else if (k>arr[i][j])
            i++;
        else if (k<arr[i][j])
            j--;
    }

    if(!flag)
        cout<<"Not Found\n";
	return 0;
}
