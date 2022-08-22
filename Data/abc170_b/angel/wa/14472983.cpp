#include <bits/stdc++.h>
using namespace std;
int main()
{
int X,Y;
cin>>X>>Y;
if (Y%2==0 && Y<=4*X && Y>=2*X){
cout << "YES" <<endl;
}
else{
cout << "NO" <<endl;
}
}
