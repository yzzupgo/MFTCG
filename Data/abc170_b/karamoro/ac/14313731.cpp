#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
if(X*4 >= Y and Y/2 >= X and Y%2 == 0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
