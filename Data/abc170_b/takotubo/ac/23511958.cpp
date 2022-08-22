#include<bits/stdc++.h>
using namespace std;
using lint = int64_t;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(i,s,n) for (int i = (s); i < (int)(n); i++)
int main(){
int x,y; cin>>x>>y;
rep(i,x+1){
cerr << i << " "<< (y-i*2)%4 << " " <<(y-i*2)/4+i<<endl;
if((y-i*2)%4==0 && (y-i*2)/4+i == x){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
