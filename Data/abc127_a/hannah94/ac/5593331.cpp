#include<iostream>
using namespace std;
int main()
{
int y, n;
cin >> y >> n;
if(y>=13){
n=n;
}
else if(y<=5){
n=0;
}
else{
n=n/2;
}
cout << n;
return 0;
}
