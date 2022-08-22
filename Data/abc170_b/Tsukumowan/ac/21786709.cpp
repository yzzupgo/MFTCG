#include <bits/stdc++.h>
using namespace std;
int main(){
int64_t X, Y;
cin >> X >> Y;
if(X * 2 <= Y && X * 4 >= Y && Y % 2 == 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
