#include <iostream>
#include <string>
using namespace std;
int main()
{
int a,count=0;
int counter = 0;
cin >> a;
for (int i = 1; i <= a; i++)
{
counter = 0;
int k = i;
while (k != 0)
{
k = k / 10;
counter++;
}
if (counter%2!=0||counter==0)
count++;
}
cout << count<<endl;
return 0;
}
