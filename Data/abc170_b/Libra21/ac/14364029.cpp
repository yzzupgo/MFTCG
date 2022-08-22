#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b;
cin >> a >>b;
if(b%2==0 && b%4==0 && b/4<=a && a<=b/2){
cout <<"Yes" <<endl;
}
else if(b%2==0 && b%4!=0 && b/4+1<=a && a<=b/2){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
