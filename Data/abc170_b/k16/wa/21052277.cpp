#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin >> x >>y;
int sum=0;
for(int a=1;a<=100;a++){
for(int b=1;b<=100-a;b++){
if(a+b==x&&2*a+4*b==y) sum++;
}
}
if(sum==0) cout << "No" << endl;
else cout << "Yes" << endl;
return 0;
}
