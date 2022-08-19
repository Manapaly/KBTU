#include <iostream>

using namespace std;

struct Node{
    string val;
    int cnt;
    Node * next;

    Node(string val){
        this->val = val;
        cnt = 1;
        next = nullptr;
    }

};
 
class LinkedList{
    Node * head;
    int size = 0;

public:
    LinkedList(){
        head = nullptr;
    }

    void push_back(string val){
        Node * newNode = new Node(val);
        if(head == nullptr){
            head = newNode;
        }
        else{
            Node * cur = head;
            while(cur != nullptr){
                if(cur -> val == val){
                    cur -> cnt ++;
                    return;
                }
                else if(cur -> next == nullptr){
                    cur -> next = newNode;
                    return;
                }
                cur = cur -> next;
            }
            
        }
    }

    void sort(){
        Node * first = head;
        Node * second = nullptr;
        while(first -> next != nullptr){
            second = first -> next;
            while(second != nullptr){
                if(second -> cnt > first -> cnt){
                    swap(second -> val, first -> val);
                    swap(second -> cnt, first -> cnt);
                }
                else if(second -> cnt == first -> cnt){
                    if(second -> val < first -> val){
                        swap(second -> val, first -> val);
                        swap(second -> cnt, first -> cnt);
                    }
                }
                
                second = second -> next;
            }
            first = first -> next;
        }
    }

    void print(){
        Node * cur = head;

        while(cur != nullptr){
            cout << cur -> val << " " << cur -> cnt << endl;
            cur = cur -> next;
        }
    }

};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    LinkedList list;
    string s;
    while(cin >> s){
        list.push_back(s);
    }
    list.sort();
    list.print();
}