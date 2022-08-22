#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <iomanip>
#include <string>
#include <cctype>
#include <cstdio>
#include <cmath>
using namespace std;
int main() {
int x,y;
bool Ans=true;
cin>>x>>y;
for(int i=0;i<=x;i++){
if(4*i+2*x-i*2==y){
cout<<"Yes"<<endl;
Ans=false;
break;
}
}
if(Ans)
cout<<"No"<<endl;
}
