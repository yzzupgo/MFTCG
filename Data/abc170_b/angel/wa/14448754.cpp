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
else if(X==((4*X-Y)/2)+((4*X-Y)/4)){
cout << "YES" <<endl;
}
else {
cout << "NO" <<endl;
}
}
