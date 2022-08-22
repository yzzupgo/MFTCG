#include <iostream>
using namespace std;
int main (){
int age,price;
cin>>age>>price;
if(age>=13)
cout<<price<<endl;
else if(age>5)
cout<<price/2<<endl;
else cout << "0";
return 0;
}
