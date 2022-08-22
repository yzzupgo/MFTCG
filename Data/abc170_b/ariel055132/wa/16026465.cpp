#include <iostream>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
for (int i=0; i<=x; i++){
for (int j=0; j<=x; j++){
if(i+j==x){
int leg = i*2 + j*4;
if(leg==y){
cout << "yes" << endl;
return 0;
}
}
}
}
cout << "no" << endl;
return 0;
}
