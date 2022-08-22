#include <iostream>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main(){
int sum,foot;
int souwa;
bool turukame = false;
cin >>sum>>foot;
rep(i,sum){
int j = sum-i;
souwa = 2*i + 4*j;
if(souwa == foot){
turukame = true;
}
}
if(turukame){
cout <<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
}
