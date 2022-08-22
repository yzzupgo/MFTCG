#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y,ans=0;
cin >> x >> y;
ans=2*x-y/2;
if(y%2!=0){
cout << "No" << endl;
} else if(2*x > y){
cout << "No" << endl;
} else if(4*x < y){
cout << "No" << endl;
} else if(ans%2==0) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
