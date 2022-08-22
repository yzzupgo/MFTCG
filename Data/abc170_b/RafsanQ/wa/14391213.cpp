#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
if(x == 0 || y == 0){
if(x == 0 && y == 0)
cout << "Yes\n";
else
cout << "No\n";
return 0;
}
if((y-2*x)%2 != 0){
cout << "No\n";
return 0;
}
int t = (y-2*x)/2;
int c = x-t;
if(c < 0){
cout << "No\n";
return 0;
}
cout << "Yes\n";
return 0;
}
