#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using Vll = vector<ll>;
using VVll = vector<Vll>;
using Pa = pair<ll, ll>;
#define INF (ll)1<<60
#define FOR(i,a,b) for(ll i=ll(a); (i)<ll(b); (i)++)
#define FOR_(i,a,b) for(ll i=ll(a); (i)>ll(b); (i)--)
#define ALL(a) (a).begin(),(a).end()
#define ITE(e,a,i) auto(ite)=find(ALL(a),(e)); (i)=distance((a).begin(),(ite)); if((ite)==(a).end()) (i)=-1;
#define OI(s) cout<<(s)<<"\n"
#define OI2(s0,s1) cout<<(s0)<<" "<<(s1)<<"\n"
#define OI3(s0,s1,s2) cout<<(s0)<<" "<<(s1)<<" "<<(s2)<<"\n"
#define OI4(s0,s1,s2,s3) cout<<(s0)<<" "<<(s1)<<" "<<(s2)<<" "<<(s3)<<"\n"
#define OIV(a) for(ll (iii)=0;(iii)<(a).size();(iii)++){cout<<(a)[(iii)]<<" ";} cout<<""<<"\n"
#define OIVV(a) for(ll (iii)=0;(iii)<(a).size();(iii)++){for(ll (jjj)=0;(jjj)<(a[(iii)]).size();(jjj)++){cout<<(a)[(iii)][(jjj)]<<" ";}cout<<""<<"\n";}
int main() {
ll teika = 20628;
ll a;
cin >> a;
a *= 108;
if(a < teika) {
OI("Yay!");
} else if(a == teika) {
OI("so-so");
} else if(a > teika) {
OI(":(");
}
return 0;
}
