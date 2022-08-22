#include<iostream>
#include<cstdio>
#include<algorithm>
#include<iomanip>
#include<cstring>
#include<string>
#include<cmath>
#include<map>
#include<vector>
#include<queue>
#include<set>
#include<sstream>
#define ll long long
#define mes(x,y) memset(x,y,sizeof(x))
using namespace std;
int main(){
double a,b;
while(cin>>a>>b){
if(a>=13){
cout<<b<<endl;
}
else if(a>=6&&a<=12){
cout<<b/2<<endl;
}
else if(a>=0&&a<5){
cout<<"0"<<endl;
}
}
}
