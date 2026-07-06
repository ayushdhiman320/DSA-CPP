#include <bits/stdc++.h>
using namespace std;

struct Node{
    public: 
    int data;
    Node* next;
    
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
// Convert array into linkedlist or add insert elemnets in the linked list
Node* array2LL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover =temp;
    }
    return head;
}

void traversal(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

void lengthofLL(Node* head){
    int cnt=0;
    Node* temp = head;
    while(temp){
        cnt++;
        temp=temp->next;
    }
    cout<<endl;
    cout<<"Length of linked list = "<<cnt<<endl;
}

void checkElement(Node* head, int n){
    int cnt=0;
    Node* temp = head;
    while(temp){
        if(temp->data==n){
            cout<<"Element is Present"<<endl;
            cnt++;
        } 
        temp=temp->next;
    }
    if(cnt==0){
        cout<<"element not found"<<endl;
    }
}

void del_beg(Node* head){
    Node* temp = head;
    if(head==nullptr) cout<<"linked list is empty"<<endl;
    else{
        head=head->next;
        free(temp);
    }
    
    cout<<"linked list after deletion from begining: ";
    traversal(head);
    
}

void del_end(Node* head){
    Node* temp = head;
    Node* temp1 = head;
    if(head==nullptr) cout<<"linked list is empty"<<endl;
    else{
        while(temp->next!=nullptr){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=nullptr;
        free(temp);
    }
    cout<<"linked list after deletion from end : ";
    traversal(head);
}
int main(){
    vector<int> arr={2,5,8,7,12,14};
    // call array to linked list function
    Node* head = array2LL(arr);
    
    // call traversing function
    traversal(head);
    
    // Length of the linked list
    lengthofLL(head);
    
    //search elemnt in the linked list
    int n=8;
    checkElement(head,n);
    
    // deletion of element from begining of link list
    del_beg(head);
    
    //deletion from end
    del_end(head);
    
    return 0;
}
