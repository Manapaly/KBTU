#include <bits/stdc++.h>

using namespace std;

struct node{
    int val;
    node * next;
    node * prev;

    node(int x){
       val = x;
       next = NULL; 
       prev = NULL;
    }

    //node(int x):val(x),next(NULL),prev(NULL){}

};

struct ll{
    node * head;   
    node * tail;
    int sz;
    ll(){
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    void add(int x){
        node * newNode = new node(x);
        sz++;
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;   
        }
    }

    node * find(int x){
        node * temp = head;
        node * result = NULL;
        while(temp != NULL){
            if(temp->val == x){
                result = temp;
                break;
            }
            temp = temp->next;
        }   
        return result;
    }

    void dl(node * n){
        if(n != NULL){
            sz--;
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

    void dl(int x){
        node * temp = find(x);
        if(temp == NULL){
            cout<<"ERROR"<<endl;
            return;
        }
        dl(temp);
    }

    void print(){
        node * temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void print2(){
        node * temp = tail;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

    bool isEmpty(){
        return sz == 0;
    }
    void sort(){
        node * first = head;
        node * second = nullptr;
        while(first -> next != nullptr){
            second = first -> next;
            while(second != nullptr){
                if(second -> val < first -> val){
                    // swap(second -> soz, first -> soz);
                    swap(second -> val, first -> val);
                }
                // else if(second -> cnt == first -> cnt){
                //     if(second -> soz < first -> soz){
                //         swap(second -> soz, first -> soz);
                //         swap(second -> cnt, first -> cnt);
                //     }
                // }
                
                second = second -> next;
            }
            first = first -> next;
        }
    }

};



int right_int(string s){
    string res = "";
    for(int i=1;i<sizeof(s)/sizeof(int);i++){
        res += s[i];
    }
    return stoi(res);
}
ll * l = new ll();
int main(){
    freopen("input.txt","r",stdin); 
    freopen("output.txt", "w", stdout);
    string s;
    while(cin>>s){
        if(s[0]=='+'){
            l->add(right_int(s));
        }else if(s[0]=='-'){
            l->dl(right_int(s));
        }
    }
    if(l->isEmpty()){
        cout<<"EMPTY";
        return 0;
    }
    l->sort();
    l->print();

    return 0;
}