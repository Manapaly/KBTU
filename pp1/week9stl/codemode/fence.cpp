#include <iostream>
#include <set>
#include <vector>
#include <stack>
using namespace std;

void Fence(int n){
    stack < int > st;
    set < int > s;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        while(st.size() > 0 && st.top() < a[i]){
            st.pop();
        }
        st.push(a[i]);
    }
    while(st.size() > 0){
        s.insert(st.top());
        st.pop();
    }
    cout << s.size();
}

int main(){
    int n;
    cin >> n;
    Fence(n);
    return 0;
}