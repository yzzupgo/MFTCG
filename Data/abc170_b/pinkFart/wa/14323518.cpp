#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
int n, l;
cin >> n>> l;
if(l > n*4)
cout <<"No"<<endl;
else {
int a = (l/4)-1,b;
if(a>0)
b = n -a;
else{
a=0;
b=(l/2);
}
if(a+b == n)
cout << "Yes" << endl;
else
cout<< "No"<< endl;
}
}
