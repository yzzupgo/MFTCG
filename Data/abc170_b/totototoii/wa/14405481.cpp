#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define rep1(i,n) for(int i = 1; i < (n); i++)
int main(){
int x, y;
cin >> x >> y;
bool ok = false;
if(y%2==0 && y <= 4*x)ok = true;
if(ok)cout << "Yes" << endl;
if(!ok)cout << "No" << endl;
}
