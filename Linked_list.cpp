#include<iostream>
using namespace std;

void append();
void display();
int  length();
void append();
void insertAfter();
void insertAfter();

class Node{
    public:
    int data;
    Node *ptr;
};
Node* LLT = new Node();

int length(){
    Node *temp;
    temp = LLT;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp -> ptr;
    }
    return(len);
}
void display(){
    Node *temp;
    temp = LLT;
    while(temp != NULL){
        cout << temp->data << '\n';
        temp = temp -> ptr;
    }
}

void append(){
    Node *temp;
    temp = new Node();
    cout << "Enter the value: ";
    cin >> temp -> data;
    temp->ptr = NULL;
    if(LLT == NULL){
        LLT = temp;
    }
    else{
        Node *p;
        p = LLT;
        while(p->ptr != NULL){
            p = p->ptr;
        }
        p = temp;
    }
}

void insertBegin(){
    Node *temp;
    temp = new Node();
    cout << "Enter the value: ";
    cin >> temp->data;
    temp->ptr = NULL;
    if(LLT == NULL){
        LLT = temp;
    }
    else{
        temp->ptr = LLT;
        LLT = temp;
    }
}

void insertAfter(){
    Node *temp;
    int location;
    cout << "Enter the location where you want to insert a new element: ";
    cin >> location;
    if(location >> length()){
        cout << "Invalid location.";
    }
    else{
        Node *pre;
        pre = LLT;
        int i = 1;
        while(i < location){
            pre = pre->ptr;
            i++;
        }
        temp = new Node();
        cout << "Enter the data: ";
        cin >> temp->data;
        temp->ptr  =NULL;
        temp->ptr = pre->ptr;
        pre->ptr = temp;
    }
}
int main(){
    int n=0;
    cout << "1. Length." << endl;
    cout << "2. Display." << endl;
    cout << "3. Append." << endl;
    cout << "4. InsertBegin." << endl;
    cout << "5. InsertAfter." << endl;
    cout << "Enter the choice: ";
    cin >> n;
    
    switch(n){
        case 1:
            length();
            break;
        case 2:
            display();
            break;
        case 3:
            append();
            break;
        case 4:
            insertBegin();
            break;
        case 5:
            insertAfter();
            break;
        default:
            cout << "Invalid choice.";
            break;
    }
    return 0;
}