#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y,m;
cin>>X>>Y;
m=Y-2*X;
if((m>=0)&&(m%2==0)&&(X-m/2>=0)){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
