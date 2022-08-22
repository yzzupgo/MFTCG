#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin >> a >> b;
if(b > 0)
cout << ((b+1)+(b+a-1))*(a-1)/2 << endl;
else if(abs(b) >= a)
cout << ((b)+(b+a-2))*(a-1)/2 << endl;
else
{
cout << 0 << endl;
}
}
