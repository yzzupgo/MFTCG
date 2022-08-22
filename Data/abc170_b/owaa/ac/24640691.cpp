#include <bits/stdc++.h>
using namespace std;
int i,j;
int main() {
int x,y;
cin >> x >> y;
int c,t;
for(i=0;i<=x;i++){
for(j=0;j<=x;j++){
if(j+i==x&&2*i+4*j==y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
