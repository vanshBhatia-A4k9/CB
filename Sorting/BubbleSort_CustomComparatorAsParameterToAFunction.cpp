#include<iostream>
using namespace std;

bool cmp(int a, int b){
    return a < b;
}

void bubbleSort( int arr[], int n, bool (&cmp)(int a, int b) ){

    ///Bubble sort

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if( cmp( arr[j+1], arr[j] ) )
                swap( arr[j], arr[j+1] );
        }
    }
}

int32_t main(void){

    int n;  cin>>n;

    int arr[n];

    for(int i=0; i<n; cin>>arr[i++]);

    bubbleSort(arr, n, cmp);

    for(int i=0; i<n; cout<<arr[i++]<<" ");

    return 0;
}
