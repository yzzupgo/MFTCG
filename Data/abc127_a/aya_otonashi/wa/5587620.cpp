#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>> a >> b;
if(a>=13)cout << b <<endl;
if(a<=5)cout << 0 <<endl;
if(6<=a<=12)cout << b/2 <<endl;
return 0;
}
