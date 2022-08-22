#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin >> a;
int count = 0;
for(int i = 1;i<=a;i++){
if(i < 10)
count++;
else if(100<=i&&i<1000)
count++;
else if(10000<=i && i<100000)
count++;
}
cout << count << endl;
}
