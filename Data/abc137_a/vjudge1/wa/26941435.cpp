#include <iostream>
using namespace std;
int main()
{
int A , B , C , F , G ;
cin >> A >> B ;
C = A * B ;
F = A + B ;
G = A - (B) ;
if (-100<= A && -100<=B && A<=100 && B<=100 ){
if ((C > F) && (C > G) ){
cout << A * B ;
}
else if ((G > C) && (G > F)){
cout << A - (B) ;
}
else if ((F > C) && (F > G)){
cout <<A + B ;
}
}
return 0 ;
}
