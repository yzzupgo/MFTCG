#include <string>
#include <iostream>
using namespace std;
bool judge(int n){
bool ans = false;
int count = 0;
while(n<0){
count++;
n/=10;
};
if(count%2!=0)ans = true;
return ans;
}
int main(){
int n;
cin >> n;
int ct = 0;
for(int i=1;i<=n;++i){
bool tmp = judge(i);
if(tmp)ct++;
}
cout << ct << endl;
return 0;
}
