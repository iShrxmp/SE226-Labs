#include <iostream>
#include <new>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int x, Node *n){
        data=x;
        next=n;
    }
};

void top(Node *h) {
    cout << h << endl;
}

void isEmpty(Node *h) {
    if(h == nullptr){cout << "Queue is empty." << endl;}
    else{cout<<"Queue isn't empty."<<endl;}
}

void dequeue(Node *h, Node *p) {
    for(p=h; p->next->next != nullptr; p=p->next);
    delete p->next;
    p->next=nullptr;
}

void enqueue(int inp, Node *h, Node *p) {
    if(h == nullptr){
        h=new Node(inp, nullptr);
        p=h;
    }
    else {
        p->next=new Node(inp, nullptr);
        p=p->next;
    }
}

void size(int size){
    cout<<size<<endl;
}
int main() {
    Node *h = nullptr;
    Node *p = nullptr;
    int input=-1;
    int sizeCounter=0;
    do{
        cout<<"Enter a node value/Enter -1 to exit/Enter -2 to delete last node: "<<endl;
        cin>>input;
        if(input==-2)
        {
            dequeue(h,p);
            sizeCounter--;
        }
        if(input!=-1)
        {
            enqueue(input, h, p);
            sizeCounter++;
        }
    }while(input!=-1);
    top(p);
    isEmpty(h);
    size(sizeCounter);
    for(p=h;p!= nullptr;p=p->next)
        cout<<p->data<<" ";
        cout<<endl;

    return 0;
}