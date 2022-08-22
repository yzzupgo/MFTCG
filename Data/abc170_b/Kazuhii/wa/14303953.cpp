#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
int main(){
int x,y; cin >> x >> y;
int k=0,t=0;
rep(k,x+1){
rep(t,x-k+1){
if(2*k+4*t==y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
