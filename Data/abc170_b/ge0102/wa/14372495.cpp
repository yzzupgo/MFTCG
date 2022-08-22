#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n,l;
cin >> n >> l;
int t = 0;
int c = 0;
for(int i=n; i>0; i--){
if(l>=4){
l-=4;
t++;
}else{
l-=2;
c++;
}
}
if(l <= 0 && (t>=1 || c+t == n)){
cout << "YES";
}else{
cout << "NO";
}
}
