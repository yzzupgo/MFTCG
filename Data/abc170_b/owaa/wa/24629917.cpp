#include <bits/stdc++.h>
using namespace std;
int i,j;
int main() {
int x,y;
cin >> x >> y;
for(i=0;i<=x;i+=2){
if(x*2+i == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
