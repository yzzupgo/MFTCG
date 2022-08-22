#include <iostream>
using namespace std;
int main() {
bool check=false;
int a,b,c;
int i=0;
cin>>a>>b;
c=b;
while(c>=0){
if(c%2==0 && i+c/2==a){
check = true;
}
i++;
c=b-4*i;
}
if(check==true){cout<<"Yes\n";}else{cout<<"No\n";}
return 0;
}
