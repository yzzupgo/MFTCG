#include <iostream>
#include <string>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
bool possible = false;
for(int i=0;i<=a;i++){
if(2*i+4*(a-i)==b){
possible=true;
}
}
if(possible==true){
cout<<"Yes";
}
else{
cout<<"No";
}
return 0;
}
