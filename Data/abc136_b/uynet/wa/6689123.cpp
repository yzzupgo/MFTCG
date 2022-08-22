#include <cstdio>
#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ALL(a) (a).begin(),a.end()
#define MAXE(a) *max_element(ALL(a))
#define MINE(a) *min_element(ALL(a))
int main(){
int N;
cin >> N;
int p = 0;
if(N<10)p = 10;
if(N<100)p = 10;
if(N<1000)p = 10 + 900;
if(N<10000)p = 10 + 900;
if(N<100000)p = 10 + 900 + 9000;
if(N<1000000)p = 10 + 900 + 9000;
cout << p << endl;
}
