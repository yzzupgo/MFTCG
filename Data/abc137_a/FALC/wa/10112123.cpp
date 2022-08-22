#include <iostream>
#include <vector>
using namespace std;
int main(){
int a,b,ans=0;
cin >> a >> b;
vector<int> an(3);
an[0]=a+b;
an[1]=a-b;
an[2]=a*b;
ans = an[0];
if(an[2]>an[1] && ans < an[1])
ans = an[1];
else if(an[2]<an[1] && ans < an[2])
ans = an[2];
cout << ans << endl;
}
