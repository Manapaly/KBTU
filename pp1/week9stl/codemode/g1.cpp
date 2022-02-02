#include <bits/stdc++.h>

using namespace std;
vector<string> v[];
int main(){
    int n;
    cin>>n;
    string country;
    string city;;
    int x;
    for(int i=0;i<n;i++){
        cin>>country;
        vector<string> country;
        cin>>x;
        for(int j=0;j<x;j++){
            cin>>city;
            country.push_back(city);
        }
    }
    int k;
    cin>>k;
    string tagy;
    for(int i=0;i<k;i++){
        cin>>tagy;
        if(country.find(tagy)){
            cout<<country<<endl;
        }else{
            cout<<"NO";
        }
    }
    

    return 0;
}