#include<iostream>
using namespace std;

void Merge( int *arr, int s, int e ){
    int mid = ( s + e )/2;

    int i = s;
    int j = mid+1;
    int k = s;

    int temp[100];

    while( i <= mid && j <= e ){
        if( arr[i] <= arr[j] )
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while( i<=mid )
        temp[k++] = arr[i++];
    while( j<=e )
        temp[k++] = arr[j++];

    for(int i=s; i<=e; arr[i] = temp[i++]);
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
    mergeSort(arr ,0, n-1);
    for(int i=0; i<n; cout<<arr[i++]<<" ");
    delete(arr);
    return 0;
}


//
//#include<bits/stdc++.h>
//using namespace std;
//struct node
//{
//int key;
//struct node *left;
//struct node * right;
//};
//struct node *push(int ndata){
//    struct node* newnode=(struct node*)malloc(sizeof(struct node));
//    newnode->key=ndata;
//    newnode->right=newnode->left=NULL;
//    return newnode;
//}
//struct node *insert(struct node* temp,int key)
// {
//     if(temp==NULL)
//        return push(key);
//    if(temp->key>key)
//        temp->left=insert(temp->left,key);
//     else if(temp->key<key)
//        temp->right=insert(temp->right,key);
//
//        return temp;
// }
//
//struct node* inorder(struct node *head)
//{
//  if(head!=NULL)
//  {
//      inorder(head->left);
//      cout<<head->key<<"\n";
//      inorder(head->right);
//  }
//
//}
//
//int main()
//{
//    int n,n1;
//    cin>>n;
//    struct node *head=NULL;
//    for(int i=0;i<n;i++)
//    {
//
//        cin>>n1;
//        head = insert(head,n1);
//    }
//    inorder(head);
//    return 0;
//
//}



