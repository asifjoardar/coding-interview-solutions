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

bool ispalindrom(Node* n){
    
    Node* cnt = n;
	Node* head = n;
	int count=0;
    while(cnt != NULL){
	    count++;
	    cnt = cnt->next; 
	}
	stack<int>s;
	int i=0;
	while(i<(count/2)){
		s.push(head->data);
		head = head->next;
		i++;
	}
	cout<<s.size()<<endl;
	if(count%2)
	    head = head->next;
	while(head != NULL){
		if(head->data != s.top() )
		    return false;
		s.pop();
		head = head->next;
	}
	return true;
}

int main(){
    int n,num,i;
    cin>>n>>num;
    Node* head = new Node(num);
	Node* tail = head;
    for(i=0;i<n-1;i++){
		cin>>num;
		tail->next = new Node(num);
		tail = tail->next;
	}
	cout<<ispalindrom(head)<<endl;
}
