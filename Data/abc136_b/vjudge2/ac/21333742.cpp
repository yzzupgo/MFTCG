#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{ long long A,B=0;
cin>>A;
for(int i=1;i<=A;i++)
{if(i>=1&&i<=9){B++;}
else if(i>=100&&i<=999){B++;}
else if(i>=10000&&i<=99999){B++;}
}
cout<<B<<endl;
}
