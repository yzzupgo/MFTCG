#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include <iomanip>
#include <bits/stdc++.h>
#include <fstream>
#include <map>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
int main(){
int x,y;
cin >> x >> y;
FOR(i,0,x){
FOR(j,0,x-i){
if((i*2+j*4)==y){
cout << "Yes" << endl;
return 0;
}
}
}
FOR(i,0,x){
FOR(j,0,x-i){
if((i*4+j*2)==y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
