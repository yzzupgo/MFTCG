#include<bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
if(x>y){
cout << "No" << endl; return 0;
}
if(y %2 !=0){
cout << "No" << endl; return 0;
}
if(x==y){
cout << "No" << endl; return 0;
}
if(4*x<y){
cout << "No" << endl; return 0;
}
if(2*x>y){
cout << "No" << endl; return 0;
}
cout << "Yes" << endl;
return 0;
}
