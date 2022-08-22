#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y,k=0;
cin >> x >> y;
for(int i=0;i<x;i++){
if(4*i + 2*(x-i) == y){
k = -1;
}
}
if(k == -1) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
