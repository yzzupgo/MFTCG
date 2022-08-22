#include <iostream>
using namespace std;
int main() {
bool check=false;
int a,b,c;
cin>>a>>b;
c=b;
for(int i=0;c>=0;i++){
if(c%2==0 && i+c/2==a){
check = true;
}
c=b-4*i;
}
if(check==true){cout<<"Yes\n";}else{cout<<"No\n";}
return 0;
}
