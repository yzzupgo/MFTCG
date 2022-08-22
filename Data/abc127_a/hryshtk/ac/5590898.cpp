#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<map>
#include<set>
#include<vector>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<numeric>
#include<string>
#include<tuple>
using namespace std;
#define BEGIN ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define END return EXIT_SUCCESS
#define rep(I,N) for(auto I=0;I<(N);++I)
#define up(I,A,B) for(auto I=(A);I<=(B);++I)
#define dw(I,A,B) for(auto I=(A);I>=(B);--I)
#define all(C) (C).begin(),(C).end()
#define rall(C) (C).rbegin(),(C).rend()
#define ft first
#define sd second
#define mp make_pair
#define mt make_tuple
#define pf push_front
#define pb push_back
#define pt pop_front
#define pk pop_back
#define lb lower_bound
#define ub upper_bound
#define rs resize
template<class T>inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T>inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
template<class T>inline void in(T &p){cin>>p;}
template<class T1,class T2>inline void in(T1 &p1,T2 &p2){cin>>p1>>p2;}
template<class T1,class T2,class T3>inline void in(T1 &p1,T2 &p2,T3 &p3){cin>>p1>>p2>>p3;}
template<class T1,class T2,class T3,class T4>inline void in(T1 &p1,T2 &p2,T3 &p3,T4 &p4){cin>>p1>>p2>>p3>>p4;}
template<class T1,class T2,class T3,class T4,class T5>inline void in(T1 &p1,T2 &p2,T3 &p3,T4 &p4,T5 &p5){cin>>p1>>p2>>p3>>p4>>p5;}
template<class T>inline void out(T p){cout<<p<<endl;}
template<class T1,class T2>inline void out(T1 p1,T2 p2){cout<<p1<<" "<<p2<<endl;}
template<class T1,class T2,class T3>inline void out(T1 p1,T2 p2,T3 p3){cout<<p1<<" "<<p2<<" "<<p3<<endl;}
template<class T1,class T2,class T3,class T4>inline void out(T1 p1,T2 p2,T3 p3,T4 p4){cout<<p1<<" "<<p2<<" "<<p3<<" "<<p4<<endl;}
long A,B;
inline void solve(void){
in(A,B);
if(A<=5)out(0);
else if(A>=13)out(B);
else out(B/2);
}
int main(int argc,char**argv){
BEGIN;
solve();
END;
}
