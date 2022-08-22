#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF ((unsigned) ~0)
#define F(i,L,R) for (int i = L; i < R; i++)
#define SZ(x) ((int)((x).size()))
template<typename T> ostream& operator<<(ostream &s,vector<T> t){F(i,0,SZ(t))s<<t[i]<<endl;return s; }
vector<string> in;
ll solve(int n){
if(n==0)
return 1;
if(in[n]=="AND")
return solve(n-1);
if(in[n]=="OR")
return (ll)pow(2,n) + solve(n-1);
}
int main(){
int A,B;
cin >> A >> B;
if(A > 13)
cout << B*0.5 << endl;
else if(A>0)
cout << B << endl;
else
cout << 0 << endl;
}
