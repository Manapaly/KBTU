#include <iostream>

using namespace std;


struct node{
    int val;
    string name;
    node * next;
    node * prev;

    node(string name, int x){
       this->name = name;
       this->val = x;
       next = NULL; 
       prev = NULL;
    }

    //node(int x):val(x),next(NULL),prev(NULL){}

};

struct ll{
    node * head;   
    node * tail;
    ll(){
        head = NULL;
        tail = NULL;
    }

    void add(string name,int x){
        node * newNode = new node(name,x);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;   
        }
    }




    void print(){
        node * temp = head;
        while(temp != NULL){
            cout << temp->val <<" "<<temp->name<< endl;
            temp = temp->next;
        }
    }

};



int main(){
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll list9;
    ll list10;
    ll list11;
    string s;
    int n;
    while(cin >> n){
        cin>> s;
        if (n==9){
            list9.add(s,n);
        }
        if (n==10){
            list10.add(s,n);
        }
        if (n==11){
            list11.add(s,n);
        }
    }
    // list.sort();
    list9.print();
    list10.print();
    list11.print();
}