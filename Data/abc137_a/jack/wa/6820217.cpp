#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,MX=-1000000;
cin >> a >> b;
max(MX,max(a-b,max(a*b,a+b)));
cout << MX << endl;
return 0;
}
