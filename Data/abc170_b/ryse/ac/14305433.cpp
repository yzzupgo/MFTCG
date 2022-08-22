#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main(void){
int x,y;
cin>>x>>y;
string ret="No";
for(int i=0;i<=x;i++){
if(i*4+(x-i)*2==y){
ret="Yes";
break;
}
}
cout<<ret<<endl;
return 0;
}
