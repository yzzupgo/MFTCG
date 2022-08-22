#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
int ans;
int count = 0;
int max = 4*x;
if (max >= y){
for (int i = 0; i <=x; i++){
for (int j = 0; j <= x; j++){
ans = 2*i + 4*j;
if (ans == y){
count++;
}
}
}
}
if (count > 0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
