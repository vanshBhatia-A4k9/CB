#include <iostream>
#include <algorithm>
using namespace std;

int main(void){

    int arr[] = {5,3,56,7,3,2,4,67,89,5,2,2,5,8,9,0};

    int n = sizeof(arr)/sizeof(arr[0]);

    int mx =  *max_element(arr, arr+n);

    int freq[mx+1] = {0};

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    int res[n];
    int k=0;
    for(int i=0; i<=mx; i++){
        if(freq[i] > 0){
            while(freq[i]>0){
                res[k++] = i;
                freq[i]--;
            }
        }
    }

    for(int i=0; i<n; cout<<res[i++]<<" ");


    return 0;
}
