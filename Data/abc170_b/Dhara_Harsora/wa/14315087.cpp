#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
using namespace std;
int main(int argc, char const *argv[])
{
int a,b;
cin>>a>>b;
bool flag=0;
if(b % 4 == 0){
int x = (b / 4);
if(a==x){
cout<<"Yes"<<endl;
}else{
while(x){
x--;
a++;
if((a) == (x*4)){
cout<<"Yes"<<endl;
flag=1;
break;
}
}
if(!flag){
cout<<"No"<<endl;
}
}
}else if(b % 2 == 0){
if((b / 2) != a){
cout<<"No"<<endl;
}else{
cout<<"Yes"<<endl;
}
}else{
cout<<"NO"<<endl;
}
return 0;
}
