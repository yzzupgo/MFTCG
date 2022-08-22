#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i <(n);i++)
using namespace std;
int main() {
int x,y;
cin >> x>>y;
rep(ik,x+1){
if(ik*4+(x-ik)*2==y){
cout << "Yes"<<endl;break;
}
if(ik==x){
cout << "No"<<endl;break;
}
}
}
