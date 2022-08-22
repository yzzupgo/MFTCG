#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
const int INF = 1001001001;
int main() {
int x,y ;
cin >> x >> y ;
for (int i = 0; i <= x; i++)
{
for (int j = (x-i); i+j <= x ; j++)
{
int ashi = i*2+j*4 ;
if(ashi==y){
cout << "Yes" << endl ;
return 0 ;
}
}
}
cout << "No" << endl ;
return 0 ;
}
