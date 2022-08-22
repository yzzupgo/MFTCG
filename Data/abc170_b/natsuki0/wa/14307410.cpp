#include <iostream>
using namespace std;
#include <string>
int main(){
int x,y;
cin>>x>>y;
string find = "No";
for(int i = 1; i<=x;i++){
if(i*2+4*(x-i)==y){
find = "Yes";
}
}
cout<<find;
}
