#include <iostream> 
using namespace std; 
#include <queue> 
string get_naame(string name){ 
    string na=""; 
    for(int i=0;i<name.size();i++){ 
        if(name[i]==' '){ 
            return na; 
        }else{ 
            na=na+name[i]; 
        } 
    } 
    return na; 
} 
string get_sooname(string name){ 
    int l; 
        string gg=""; 
        for(int i=0;i<name.size();i++){ 
            if (name[i]==' '){ 
                l=i; 
            } 
        } 
        for(int i=l+1;i<name.size();i++){ 
            gg=gg+name[i]; 
        } 
        return gg; 
} 
struct Candidate { 
    private: 
    string name; 
    string soname; 
    string work; 
    int salary; 
 
    public: 
    void init(string namee,string sonamee,string workk, int salaryy){ 
        name = namee; 
        soname=sonamee; 
        work=workk; 
        salary=salaryy; 
 
    } 
    string get_name(){ 
        return name; 
    } 
    string get_soname(){ 
        return soname; 
    } 
    int get_salary(){ 
        return salary; 
    } 
    string get_work(){ 
        return work; 
    } 
     
}; 
 
int main(){ 
    freopen("opop.txt","r",stdin); 
    int n; 
    cin>>n; 
    for(int i=0;i<n;i++){ 
        string name; 
        string soname; 
        string work; 
        int salary; 
        cin>>name>>soname; 
        cin>>work>>salary; 
        Candidate p; 
        p.init(name,soname,work,salary); 
 
        if(p.get_soname()!="Johnson" && p.get_soname()!="Edisson"){ 
            if (p.get_work()!="banker"){ 
                if(p.get_salary()>1000){ 
                    cout<<p.get_name()<<" "<<p.get_soname()<<endl; 
                } 
            } 
        } 
 
    } 
}