#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    queue <double> q;
    queue <double> q1;
    vector <pair<string,double> > v;
    while (n--) {
        string s;
        double a;
        cin >>s >> a;
        q.push (a);
        v.push_back(make_pair(s,a));
    }
    while (n--) {
        double x = q.front();
        q.pop();
        if (x > q.front()) {
            q1.push(x);
        }else {
            q.push(x);
        }
        if (q1.size() == k)break;
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i].second == q1.front()) {
            cout << v[i].first << endl;
            q1.pop();
        }
    }
    return 0;
}