#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <list>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b;
int aT,aC;
aT=2*a;
aC=4*a;
c = aC-aT;
if(b>aC||c%2==1||aT>b){
cout<<"No"<<endl;
}else {
cout<<"Yes"<<endl;
}
}
