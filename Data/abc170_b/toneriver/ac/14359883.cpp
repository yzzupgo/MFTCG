#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#include<set>
#include<math.h>
#define pai arccos(-1);
#define keta(n) cout << fixed << setprecision((n));
#define ll long long;
int main(){
int x,y;
cin>>x>>y;
bool judge = false;
for(int i = 0;i<=x;i++){
int j=x-i;
if(4*i+2*j==y){
judge = true;
}
}
if(judge==true)cout<<"Yes";
else if(judge==false) cout<<"No";
}
