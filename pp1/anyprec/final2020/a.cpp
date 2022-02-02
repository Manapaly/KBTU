#include <bits/stdc++.h>

using namespace std;

bool mysort(pair<pair<string,string>, double> &p1, pair<pair<string,string>, double> &p2){
    return p1.second<p2.second;
}

double MarkToInt(string s){
    if(s=="A+") return 4.00;
    if(s=="A") return 3.75;
    if(s=="B+") return 3.50;
    if(s=="B") return 3.00;
    if(s=="C+") return 2.50;
    if(s=="C") return 2.00;
    if(s=="D+") return 1.50;
    if(s=="D") return 1.00;
    if(s=="F") return 0;
}

int main(){
    int n;
    cin>>n;
    vector<pair<pair<string,string>, double> > v;
    for(int i=0;i<n;i++){
        string name,soname;
        cin>>soname>>name;
        int count_of_subjects;
        cin>>count_of_subjects;
        double total_marks=0;
        double sum_of_kredits=0;
        for(int j=0;j<count_of_subjects;j++){
            string marks;
            int number_of_credits;
            cin>>marks>>number_of_credits;
            total_marks+=double(MarkToInt(marks)*number_of_credits);
            sum_of_kredits+=number_of_credits;
        }
        double gpa=total_marks/sum_of_kredits;
        v.push_back(make_pair(make_pair(soname,name),gpa));
    }
    sort(v.begin(),v.end(),mysort);
    for(int i=0;i<v.size();i++){
        cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<fixed<<setprecision(3)<<v[i].second<<endl;
    }
    return 0;
}