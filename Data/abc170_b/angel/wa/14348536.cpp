#include <bits/stdc++.h>
using namespace std;
int main()
{
int X,Y;
cin>>X>>Y;
if(Y/4==X){
cout << "YES" <<endl;
}
else if(Y/2==X){
cout << "YES" <<endl;
}
else if(Y%X==2){
cout << "YES" <<endl;
}else {
cout << "NO" <<endl;
}
}
