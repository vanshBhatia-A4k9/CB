#include<iostream>
using namespace std;

void Merge( int *arr, int s, int e ){
    int mid = ( s + e )/2;

    int i = s;
    int j = mid+1;
    int k = s;

    int temp[100];

    while( i <= mid && j <= e ){
        if( arr[i] < arr[j] )
            temp[k++] = arr[i++];
        else if( arr[i] > arr[j] )
            temp[k++] = arr[j++];
    }

    while( i<=mid )
        temp[k++] = arr[i++];
    while( j<=e )
        temp[k++] = arr[j++];

}

void mergeSort( int *arr, int s, int e ){
    if( s>=e )
        return;

    int mid = (s+e)/2;

    mergeSort( arr, s, mid );
    mergeSort( arr, mid+1, e );

    Merge( arr, s, e );
}

int32_t main(void){
    int n;   cin>>n;
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i=0; i<n; cin>>arr[i++]);
    mergeSort(arr ,0, n);
    for(int i=0; i<n; cout<<arr[i++]<<" ");
    delete(arr);
    return 0;
}
