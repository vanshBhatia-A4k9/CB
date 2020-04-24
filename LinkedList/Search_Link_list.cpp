#include<iostream>
#include<cstring>
using namespace std;

class node{
public:
    int data;
    node* next;
    ///constructor
    node(int value):data(value),next(NULL){}
};

int searchIterative(node* head, int key){
    if(head == NULL){
        cout<<"Linked list does not exist";
        return -1;
    }
    else{
        int index = 0;
        while(head->data != key && head->next != NULL){
            head = (*head).next;
            index++;
        }
        return ( (head->data == key) ? index : -1 );
    }
}

int searchRecursive(node* head, int key, int idx=0){
    if(head == NULL)
        return -1;
    if(head->data == key)
        return idx;
    return searchRecursive(head->next, key, idx+=1);
}

int len(node* head){
    int ctr = 0;
    while(head != NULL){
        head = head->next;
        ctr++;
    }
    return ctr;
}

void print(node *head){
    while (head != NULL){
        cout<<head->data<<"-> ";
        head = head->next;
    }
}

void insertHead(node* &head, int value){
    node* temp = new node(value);
    temp->next = head;
    head = temp;
}

int32_t main(void){
    node* head = NULL;
    insertHead(head, 10);
    insertHead(head, 20);
    insertHead(head, 30);

    print(head);

    cout<<"\n"<<searchIterative(head, 20);

    cout<<"\n"<<searchRecursive(head, 0);

    return 0;
}
