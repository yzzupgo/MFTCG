#include <iostream>
using namespace std;
#include <math.h>
int main() {
int a,b;
cin>>a>>b;
cout<< max(a*b,max((a+b),(a-b)));
}
