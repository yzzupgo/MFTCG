#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i <(n) ; ++i)
#define PI 3.14159265
#define pb push_back
#define pr pair<int,int>
using namespace std;
using ll = long long;
void self_max(int &a,int b){
a = max(a,b);
}
void self_min(int &a,int b){
a = min(a,b);
}
int main(){
int a,b; cin >> a >> b;
bool check = true;
if(a==0){
if(b!=0) check = false;
}
if(b%2 != 0){
check = false;
}
if(a*4 < b or 2*a < b) check = false;
if((b- 2*a)%2 !=0){
check = false;
}
if(check)cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
