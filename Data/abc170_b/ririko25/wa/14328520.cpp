#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;
int main()
{
int X,Y;
cin >> X >> Y;
if(X * 4 <= Y){
cout << "No" << endl;
}else if(Y%2 == 1){
cout << "No" << endl;
}else{
cout << "Yes" << endl;
}
}
