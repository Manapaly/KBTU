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
    void dl(node * n){
        if(n != NULL){
            
            if(n->prev == NULL && n->next == NULL){
                head = tail = NULL;
            }else if(n->prev != NULL && n->next != NULL){
                n->prev->next = n->next;
                n->next->prev = n->prev;
            }else if(n->prev == NULL && n->next != NULL){
                head = n->next;
                n->next->prev = NULL;
            }else if(n->next == NULL && n->prev != NULL){
                tail = n->prev;
                n->prev->next = NULL;  
            }
            delete n;
        }
    }    
};
ll list1;
ll list2;
int cnt = 1;




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
    
    node * temp = list1.head;
    node * temp2 = list2.head;
    while(temp != NULL && temp2 != NULL){
  
        if (temp->val==0 && temp2->val==9){
            list1.add(0);
            list1.add(9);
            cnt++;
            cout<<"1 utty "<< "0 > 9"<<endl;
            list2.dl(temp2);
        }
        if (temp->val==9 && temp2->val==0){
            list2.add(0);
            list2.add(9);
            cnt++;
            cout<<"2 utty "<< "0 > 9"<<endl;
            list1.dl(temp);
        }
        if (temp->val > temp2->val){
            list1.add(temp->val);
            list1.add(temp2->val);
            cnt++;
            cout<<"1 utty "<<temp->val<<" > "<<temp2->val<<endl;
            list2.dl(temp2);
        }
        if (temp->val < temp2->val){
            list2.add(temp2->val);
            list2.add(temp->val);
            cnt++;
            cout<<"2 utty "<<temp2->val<<" > "<<temp->val<<endl;
            list1.dl(temp);
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    cout<<cnt;
    return 0;
}