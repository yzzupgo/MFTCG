#include<iostream>
#include<string>
using namespace std;
int main(){
long long x,y;
string ans = "No";
cin >> x >> y;
for(int i = 1; i <= x; i++){
if(((i*2) + ((x-i)*4)) == y){
ans = "Yes";
break;
}
}
cout << ans << endl;
}
