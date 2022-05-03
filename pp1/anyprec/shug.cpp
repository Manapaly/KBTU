#include <bits/stdc++.h>

using namespace std;

vector<string> func1(vector<string> v,string a){
    v.push_back(a);
    return v;
}
string ff(string s){
    
    for(int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    vector<string> v;
    vector<string> countries;
    func1(countries, ff("Antegria"));
    func1(countries, ff("Arstotzka"));
    func1(countries, ff("Impor"));
    func1(countries, ff("Kolechia"));
    func1(countries, ff("Obristan"));
    func1(countries, ff("Republia"));
    func1(countries, ff("United Federation"));

    for(int i=0;i<n;i++){
        string name,soname,country;
        char a;
        cin>>name>>soname>>a>>country;
    }
    return 0;
}