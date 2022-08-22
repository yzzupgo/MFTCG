#include<iostream>
using namespace std;
main(){
int a,b,ans;
cin >> a >> b;
if(a>=13){
ans = b;
}else if(a>=6){
ans = b/2;
}else{
ans = 0;
}
cout << ans <<endl;
}
