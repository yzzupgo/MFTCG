#include <bits/stdc++.h>
using namespace std;
#define rep(src,dst) for(int i=src; i<dst; i++)
#define rep2(src,dst) for(int j=src; j<dst; j++)
#define INF 1000000000000
#define MOD 10000007
#define PI acos(-1)
#define ll long long
template<typename T> inline void ChMin(T* a, T* b) {if(*a>*b) *a=*b;}
template<typename T> inline void ChMax(T* a, T* b) {if(*a<*b) *a=*b;}
template<typename T> inline int DivUp(T a, T b) {return ((a+b-1)/b);}
int main(){
int x, y; cin >> x >> y;
rep(0,x+1){
if(i + (y-4*i)/2 == x){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
