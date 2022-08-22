#include <iostream>
#define s true
using namespace std;
int abs(int i,int j){
int f=i-j;
if(f<0){
i*=-1;
}
return f;
}
int main(){
int a,b;
cin>>a>>b;
a*=4;
if(b%2==0&&a>b){
cout<<"Yes";
}
else cout<<"No";
return 0;
}
