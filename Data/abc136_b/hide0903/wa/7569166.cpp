#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int cnt=0;
for(int i=0;i<n;i++){
int cp=i,digit=0;
while(cp){
digit++;
cp /= 10;
}
if(digit%2)cnt++;
}
cout << cnt << endl;
}
