#include <bits/stdc++.h>
using namespace std;
int main(void){
int X,Y;
cin >> X >> Y;
if(Y%2 != 0){
cout << "No" << endl;
}else if(Y > 4*Y){
cout << "No" << endl;
}else{
cout << "Yes"<< endl;
}
}
