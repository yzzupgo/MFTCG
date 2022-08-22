#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >>n;
if (n==100000)cout <<90909<<endl;
else if(n>=10000)cout <<n-9999+900+9<<endl;
else if (n>=1000)cout <<909<<endl;
else if(n>=100)cout <<n-99+9<<endl;
else if(n>=10)cout << 9 <<endl;
else cout << n <<endl;
}
