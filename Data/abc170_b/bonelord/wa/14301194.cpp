#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int x;
int y;
cin>>x>>y;
if (x&1) ++x;
cout<<(y%x == 0 && x*4 >= y ? "Yes" : "No")<<endl;
}
