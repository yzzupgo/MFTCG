#include<iostream>
using namespace std;
int count_digits(int N)
{
string n = to_string(N);
int s = n.size();
return s;
}
int main()
{
int N;
cin>>N;
int s = count_digits(N);
if(s==1)
{
cout<<N;
}else if(s==2)
{
cout<<"9";
}
else if(s==3)
{
int r = (N-100)+1;
cout<<r+9;
}
else if(s==4)
{
cout<<"909";
}
else if(s==5)
{
int r = (N-10000)+1;
cout<<r+900+9;
}
else if(s==6)
{
cout<<9+900+90000;
}
}
