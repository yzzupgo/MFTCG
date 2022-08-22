#include <string>
#include <iostream>
using namespace std;
bool judge(int n){
bool ans = false;
int count = 0;
do{
count++;
n/=10;
}while(n/10>0);
if(count%2==1)ans = true;
return ans;
}
int main(){
int n;
cin >> n;
int count = 0;
for(int i=1;i<=n;++i){
bool tmp = judge(i);
if(tmp)count++;
}
cout << count << endl;
return 0;
}
