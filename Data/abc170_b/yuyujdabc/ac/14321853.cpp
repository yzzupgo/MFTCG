#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
int a = y-2*x;
if(a%2 == 0){
if(a/2 <= x && a/2 >= 0){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
