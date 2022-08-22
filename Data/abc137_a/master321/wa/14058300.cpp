#include <bits/stdc++.h>
using namespace std;
#define l long
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int a,b,max=0;
cin >> a >> b;
if(a+b > a*b && a+b > a-b){max = a+b;}
if(a-b > a*b && a-b > a+b){max = a-b;}
if(a*b > a-b && a*b > a+b){max = a*b;}
cout << max;
}
