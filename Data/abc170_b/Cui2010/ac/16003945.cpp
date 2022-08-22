#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int m;
cin >> m;
if(m % 2 == 0)
{
if(m <= n * 4 && m >= n * 2){
cout << "Yes";
return 0;
}
}
cout << "No";
return 0;
}
