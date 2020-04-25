#include <iostream>
using namespace std;

unsigned int length = 0;

class node{
public:
    int data;
    node* next;
    ///constructor
    node(int value):data(value),next(NULL){}
};

void insertAtTail(node* &head, int data){
    if(!head){
        node* newNode = new node(data);
        head = newNode;
    }
    else{
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    node* newNode = new node(data);
    temp->next = newNode;
    }
}

void print(node* head){
    while(head!=NULL){
        cout << head->data<<" -> ";
        head = head->next;
    }
}

void build(node* &head){
    int data ;
    int n = length;
    while( n-- ){
        cin >> data ;
        insertAtTail(head, data) ;
    }
}

istream& operator >> (istream &is, node* &head){
    build(head);
    return is;
}

ostream& operator << (ostream &os, node* &head){
    print(head);
    return os;
}

node* appendK(node *head,int k){
    node *oldHead = head;
    node *fast = head;
    node *slow = head;
    for(long i=0;i < k && fast->next!=NULL ;i++){
        fast = fast->next;
    }
    while(fast->next!=NULL && fast!=NULL){
        fast = fast->next;
        slow = slow->next;
    }
    node *newHead = slow->next;
    slow->next = NULL;
    fast->next = oldHead;
    return newHead;
}

int32_t main(void){
    int k ;    cin >> length ;

    node* head = NULL;

    cin >> head >> k;

    head = appendK(head, k);

    cout<<head;

    return 0 ;
}
