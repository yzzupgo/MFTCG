#include<iostream>
using namespace std;
int main()
{
int A;
int B;
cin >> A >> B;
if(B<=0&&A-B-A*B>=0){
cout <<"A-B";
}else if(B>=0&&A*B-A-B<0){
cout <<"A+B";
}else{
cout << "A×B";
}
return 0;
}
