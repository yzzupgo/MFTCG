#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
for(int i=0;i<x+1;i++){
for(int j=0;j<x-i+1;j++){
if(i*2+j*4==y){
cout << "Yes";
return 0;
}
}
}
cout << "No";
}
