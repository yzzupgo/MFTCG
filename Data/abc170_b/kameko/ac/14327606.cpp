#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int diff = 4*x - y;
int minnmum = 2*x;
if(minnmum > y){
cout << "No" << endl;
return 0;
}
if (diff ==0){
cout << "Yes" << endl;
} else if (diff > 0){
if( diff % 2 ==0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}else{
cout <<"No"<<endl;
}
return 0;
}
