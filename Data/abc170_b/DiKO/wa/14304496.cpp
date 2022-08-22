#include<bits/stdc++.h>
#define rep(i,n) for(int i=1;i<=(n);i++)
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
bool flag=0;
rep(i,Y){
if(4*X-2*i==Y) flag=1;
}
if(flag){
cout << "Yse" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
