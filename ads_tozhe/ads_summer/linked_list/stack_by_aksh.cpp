#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Stack {
    public:
    Node *top;
    int sz;

    Stack(){
        top = NULL;
        sz = 0;
    }

    void push(int data){
        Node *node = new Node(data); // node (data, next)
        node->next = top; //node(6, 0)
        top = node;
        sz++;
    }
    void pop(){
        if(top != NULL){
            top = top->next;
            sz--;
        }
    }

    int size() {
        return this->sz;
    }

    bool empty() {
        // if(sz == 0) return true;
        // else return false;
        return(sz==0); 
    }
};
int main(){
    Stack *st = new Stack();
    st->push(10);
    st->push(20);
    st->push(30);
    cout<<st->top<<" "<<st->top->data;
}