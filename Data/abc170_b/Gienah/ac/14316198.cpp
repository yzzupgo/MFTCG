#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
if(y%2!=0){
cout << "No" << endl;
}else if(y/x >= 4){
if(y%x>0){
cout << "No" << endl;
}else if(y/x == 4){
cout << "Yes" << endl;
}else{
cout << "No" <<endl;
}
}else if(y/x < 2){
cout << "No" << endl;
}else{
cout << "Yes" << endl;
}
}
