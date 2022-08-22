#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int mul(int p){
int ans = 1;
for(int i = 0;i < p;i ++){
ans = ans * 10;
}
return ans;
}
int dig(int a){
int ans = 1;
int p = 9;
while(p<a){
p = p*10;
ans++;
}
return ans;
}
int main(void){
int n;
cin >> n;
int p = dig(n);
int ans;
if(p == 1){
ans = n;
}else if(p % 2 == 0){
ans = 0;
p = p/2;
for(int i = 0;i < p;i ++){
ans = ans*100+9;
}
}else{
int q = (p-1)/2;
ans = 9;
for(int i = 0;i < q;i ++){
ans = ans*100+9;
}
ans = ans + n -mul(p) + 1;
}
cout << ans << endl;
return 0;
}
