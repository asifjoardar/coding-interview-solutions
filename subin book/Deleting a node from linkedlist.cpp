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
    while(n != NULL){
        cout<<n->data<<” ”;
        n = n->next;
    }
    cout<<endl;
}

Node* del(Node* n, int pos){
    int i;
    Node* head = n;
    Node* last = n;
    for(i=0;i<pos-2;i++){
        head = head->next;
        last = last->next;
    }
    head->next = last->next->next;
    cout<<head->data<<endl;
    return n;
}

int main(){
    int i,n,num,pos;
    cin>>n;
    cin>>num;
    Node* head = new Node(num);
    Node* tail = head;
    for(i=0;i<n-1;i++){
        cin>>num;
        tail->next = new Node(num);
        tail = tail->next;
        /*
        Node* new_data = new Node(num);
        new_data->next = head;
        head = new_data;
        */
    }
    cin>>pos;
    printlist(head);
    if(pos==1){
        head = head->next;
    }
    else if(pos==n){
        Node* chk = head;
        for(i=0;i<n-2;i++)
            chk = chk->next;
        chk->next = NULL;
    }
    else
        head = del(head, pos);
    printlist(head);
}
