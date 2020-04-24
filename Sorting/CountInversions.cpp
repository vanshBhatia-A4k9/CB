#include<iostream>
using namespace std;

unsigned int MergeSort(int* arr, int s, int e){
    ///Calculate Mid
    int mid = (s+e)/2;

    ///Three Pointers for merging the arrays
    int i = s;
    int j = mid+1;
    int k = s;

    ///The array to be merged into
    int temp[10005];

    ///Counter
    unsigned int counter = 0;

    while( i<=mid && j<=e ){
        if( arr[i] < arr[j] )
            temp[k++] = arr[i++];
        else{
            temp[k++] = arr[j++];
            counter += ( mid - (i-1) );
        }
    }

    while( i <= mid )
        temp[k++] = arr[i++];

    while( j <= e )
        temp[k++] = arr[j++];

    for(int i=s; i<=e; i++)
        arr[i] = temp[i];

    return counter;

}

int Merge(int arr[], int s, int e){
    ///Base Case
    if( s >= e )
        return 0;

    ///Calculate Mid:
    int mid = (s+e)/2;

    ///Divide:
    int x = Merge(arr, s, mid);
    int y = Merge(arr, mid+1, e);
    int z = MergeSort(arr, s, e);

    return x + y + z;

}

int32_t main(void){
    int n;  cin>>n;
    int arr[n];
    for(int i=0; i<n; cin>>arr[i++]);

    cout<<Merge(arr, 0, n-1);

    return 0;
}
