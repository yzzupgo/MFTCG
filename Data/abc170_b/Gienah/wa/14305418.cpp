#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
if(y%2!=0){
cout << "No" << endl;
}else if(y/x+y%x > 4){
cout << "No" << endl;
}else if(y/x < 2){
cout << "No" << endl;
}else{
cout << "Yes" << endl;
}
}
