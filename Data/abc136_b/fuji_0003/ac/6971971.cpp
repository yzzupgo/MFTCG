#include <iostream>
using namespace std;
bool f(int x){
int keta =0;
while(x){
keta ++;
x/=10;
}
return keta%2 ==1;
}
int main(){
int n;
cin >> n;
int ans =0;
for (int i=1; i<=n;i++){
if(f(i)) ans++;
}
cout <<ans <<endl;
return 0;
}
