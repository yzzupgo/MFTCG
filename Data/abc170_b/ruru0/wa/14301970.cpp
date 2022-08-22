#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
for(int i=1;i<x;i++){
int sum=0;
sum=i*2+(x-i)*4;
if(sum==y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
