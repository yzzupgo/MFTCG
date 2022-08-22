#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#define MAX 20000005
typedef long long ll;
using namespace std;
int main ()
{
int x,y ;
cin >> x >> y;
int cranes = 2 ;
int turtle = 4 ;
int cranelegs = x*cranes;
int turtlelegs = x*turtle;
if (y >= cranelegs && y <= turtlelegs && (y%2==0))
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
return 0;
}
