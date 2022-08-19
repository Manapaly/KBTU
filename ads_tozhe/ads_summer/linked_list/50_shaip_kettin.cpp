#include <iostream>

using namespace std;


struct node{
    int val;
    node * next;
    node * prev;

    node(int x){
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

    void add(int x){
        node * newNode = new node(x);
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
            cout << temp->val <<" ";
            temp = temp->next;
        }
    }
};
ll list1;
ll list2;
int cnt = 0;
string winner(ll list1, ll list2){
    if (list1.head==NULL){
        return "second";
    if (list2.head==NULL){
        return "firts";
    }
    }else if (list1.head->val > list2.head->val && list1.head->val != 0 && list2.head->val != 9){
        list1.add(list1.head->val);
        list1.add(list2.head->val);
        cnt++;
    }else if (list1.head->val > list2.head->val && list1.head->val != 9 && list2.head->val != 0){
        list1.add(list1.head->val);
        list1.add(list2.head->val);
        cnt++;
    }
    else if(list1.head->val < list2.head->val && list1.head->val != 0 && list2.head->val != 9){
        list2.add(list2.head->val);
        list2.add(list1.head->val);
        cnt++;
    }else if(list1.head->val < list2.head->val && list1.head->val != 9 && list2.head->val != 0){
        list2.add(list2.head->val);
        list2.add(list1.head->val);
        cnt++;
    }
    else if(list1.head->val == 0 && list2.head->val == 9){
        list1.add(list1.head->val);
        list1.add(list2.head->val);
        cnt++;
    }else if(list1.head->val == 9 && list2.head->val == 0){
        list2.add(list2.head->val);
        list2.add(list1.head->val);
        cnt++;
    }


}



int main(){
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // ll list1;
    // ll list2;
    int n;
    for(int i=0;i<5;i++){
        cin>>n;
        list1.add(n);
    }
    for(int i=0;i<5;i++){
        cin>>n;
        list2.add(n);
    }
    
    // list.sort();
    list1.print();
    // cout<<endl<<list1.head->val;
    // cout<<endl;
    // list1.add(125);
    // list1.print();
    cout<<endl;
    list2.print();
    for(int i=0;i<1000000;i++){
        cout<<winner(list1, list2);
    }
}