#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
int N;
cin >> N ;
int ans,count,key;
for(int i=1;i<=N;i++){
key = i;
while (key < 0)
{
key /= 10;
count++;
}
if(count%2 != 0)ans++;
count = 0;
}
cout << ans << endl;
}
