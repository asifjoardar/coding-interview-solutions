#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void printlist(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
    cout<<endl;
}

Node* rev(Node* n){
    Node* tem = NULL;
    Node* prev = NULL;
    Node* cur = n;
    while(cur!=NULL){
        tem = cur->next;
        cur->next = prev;
        prev = cur;
        cur = tem;
    }
    return prev;
}

Node* insert(Node* n,int data,int pos){
    int i,p=1;
    Node* head = n;
    Node* last = n;
    Node* new_data = new Node(data);
    for(i=1;i<pos-1;i++){
        head = head->next;
        last = last->next;
    }
    last = last->next;
    head->next = new_data;
    new_data->next = last;
    return n;
}

int main(){
    int i,n,num;
    cin>>n>>num;
    Node* head = new Node(num);
    Node* tail = head;
    for(i=0;i<n-1;i++){
        cin>>num;
        tail->next = new Node(num);
        tail = tail->next;
        //Node* tem = new Node(num);
        //tem->next = head;
        //head = tem;
    }
    printlist(head);
    //head = rev(head);
    //printlist(head);
    head = insert(head, 4, 2);
    printlist(head);
    return 0;
}
