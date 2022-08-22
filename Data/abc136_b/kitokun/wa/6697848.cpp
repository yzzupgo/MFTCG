#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
string sn = to_string(n);
int size = sn.size();
vector<long long int> keta(7,0);
for(int i = 0;i < 7;i++){
if(i % 2 == 0 && i == 0){
keta[i] = pow(9,i + 1);
}
else if(i % 2 == 0 && i != 0){
keta[i] = 9 * pow(10, i);
}
}
int ans = 0;
if(size % 2 == 0){
for(int i = 0;i < size;i++){
ans += keta[i];
}
}
else{
for(int i = 0;i < size - 1;i++){
ans += keta[i];
}
int a = n / pow(10,size - 1);
ans += n - a * pow(10, size - 1) + 1;
}
cout << ans;
return 0;
}
