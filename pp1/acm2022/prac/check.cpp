
#include <bits/stdc++.h>

using namespace std;

unsigned long long poww(long long k, long long g){
    vector<unsigned long long> v;
    v[0]=1;
    v[1]=k;
    for(long long i=2;i<g;i++){
        v[i]=v[i-1]*v[i-2];
    }
    return v[g-1];
}
double OldApproximatePower(double b, double e) {
    union {
        double d;
        long long i;
    } u = { b };
    u.i = (long long)(4606853616395542500L + e * (u.i - 4606853616395542500L));
    return u.d;
}
double BinaryPower(double b, unsigned long long e) {
       double v = 1.0;
       while(e != 0) {
              if((e & 1) != 0) {
                     v *= b;
              }
              b *= b;
              e >>= 1;
       }
       return v;
}
double FastPowerDividing(double b, double e) {
       if(b == 1.0 || e == 0.0) {
              return 1.0;
       }
 
       double eAbs = fabs(e);
       double el = ceil(eAbs);
       double basePart = OldApproximatePower(b, eAbs / el);
       double result = BinaryPower(basePart, (unsigned long long)el);
 
       if(e < 0.0) {
              return 1.0 / result;
       }
       return result;
}
double FastPowerFractional(double b, double e) {
       if(b == 1.0 || e == 0.0) {
              return 1.0;
       }
 
       double absExp = fabs(e);
       unsigned long long eIntPart = (long long)absExp;
       double eFractPart = absExp - eIntPart;
       double result = OldApproximatePower(b, eFractPart) * BinaryPower(b, eIntPart);
       if(e < 0.0) {
              return 1.0 / result;
       }
       return result;
}
int main(){
    cout<<BinaryPower(5,2222)<<endl;
    cout<<OldApproximatePower(5,2)<<endl;
    cout<<FastPowerDividing(5,2)<<endl;
    cout<<FastPowerFractional(5,2)<<endl;
    return 0;
}