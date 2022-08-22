#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
string str = "No";
for(int i=0;i<x+1;i++){
if( (2*x + 2*i) == y){
string str = "Yes";
}
}
cout << str << endl;
}
