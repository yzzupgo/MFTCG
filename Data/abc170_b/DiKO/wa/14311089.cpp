#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<=(n);i++)
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
bool flag=0;
rep(i,Y){
if(4*X-2*i==Y){
int K=X-i;
if(i+K==X){
flag=1;
}
}
}
if(flag){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
