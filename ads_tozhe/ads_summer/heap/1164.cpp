#include <iostream>

using namespace std;

struct heap{
    int val[100];
    int hs;

    heap(){
        hs = 0;
    }

    int get_min(){
        return val[0];
    }

    void add(int x){
        int i = hs++;
        val[i] = x;
        int p = (i - 1)/2; 
        while(i && val[i] > val[p]){
            swap(val[i], val[p]);
            i = p;
            p = (i - 1)/2; 
        }
    }

    void del(){
        val[0] = val[--hs];
        int i = 0;
        while(2 * i + 1 < hs){
            int c1 = 2 * i + 1;
            int c2 = 2 * i + 2;
            int mp = c1;
            if(c2 < hs){
                if(val[c2] < val[c1]){
                    mp = c2;
                }
            }
           
            if(val[i] > val[mp]){
                swap(val[i], val[mp]);
                i = mp;
            }else{
                break;
            }
        }
    }

    void print(){
        for(int i = 0; i < hs; ++i){
            cout << val[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    heap h;

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        h.add(a[i]);
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int l,m;
        cin>>l>>m;
        h[l-1] = h[l-1] + m;
    }
    for(int i=0;i<n;i++){
        h.add(a[i]);
    }
    h.print();
    return 0;
}