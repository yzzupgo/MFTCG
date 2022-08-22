#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <map>
#include <cmath>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
double pi=3.14159265358979323846264338;
bool issqt(long long k){
if(k<=3)return true;
long long s=(long long)sqrt(k);
for(long long i=2;i<=s;i++)
if(k%i==0)return false;
return true;
}
int main() {
int x,y;
cin>>x>>y;
if(y<=4*x&&y>=2*x){
cout<<"Yes"<<endl;
}
else cout<<"No"<<endl;
return 0;
}
