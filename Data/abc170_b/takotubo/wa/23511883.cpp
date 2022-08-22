#include<bits/stdc++.h>
using namespace std;
using lint = int64_t;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(i,s,n) for (int i = (s); i < (int)(n); i++)
int main(){
int x,y; cin>>x>>y;
rep(i,x/2){
if((y-i*2)%4==0 && y-i*2 >= 0){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
