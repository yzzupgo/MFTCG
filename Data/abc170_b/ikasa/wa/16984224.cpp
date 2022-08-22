#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
double ans;
cin >> x >> y;
ans=2*x-y/2;
if(4*x < y){
cout << "No" << endl;
} else if(ans >= 0) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
