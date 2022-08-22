#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define F(i,L,R) for(long i = L; i < R; i++)
#define FE(i,L,R) for(long i = L; i <= R; i++)
#define FR(i,L,R) for(long i = L; i > R; i--)
#define FRE(i,L,R) for(long i = L; i >= R; i--)
#define Int long
#define ul unsigned long
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define us unsigned shoft
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> ii;
#define ALL(c) (c).begin(),(c).end()
#define last(vec) vec.size()-1
#define lastEle(vec) vec[last(vec)]
#define pb push_back
#define InputV(a,n) F(i,0,n){long l; cin >> l; a.pb(l);}
#define DBG(vari) cerr<<#vari<<" = "<<(vari)<<endl;
#define printA(a,L,R) FE(i, L, R) cout << a[i] << (i==R?'\n':' ')
#define printAF(a,L) printA(a, 0, L-1)
#define printV(a) printA(a, 0, a.size()-1)
#define char2int(c) (c-'0')
#define bit(x,i) (x&(1<<i))
#define space ' '
#define PI 3.14159265358979323
#define TST 0
int main() {
#if TST==1
ifstream in ("input.txt");
cin.rdbuf(in.rdbuf());
#endif
int x,y;
cin >> x >> y;
int b_2 = y - 2*x;
if(b_2 % 2 == 0 && b_2 >= 0){
int b = b_2/2;
if(b > x){
cout << "No" << endl;
return 0;
}
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
#if TST==1
#endif
}
