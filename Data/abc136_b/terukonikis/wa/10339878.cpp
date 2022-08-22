#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin >> a;
int count = 0;
for(int i = 1;i<=a;i++){
if((10 <= i || i <= 99 || 1000 <= i || i <= 9999))
count++;
}
cout << count << endl;
}
