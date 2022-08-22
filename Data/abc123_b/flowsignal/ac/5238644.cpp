#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B ,C, D, E;
    cin >> A >> B >> C >> D >> E;

    int Q[5], R[5];

    R[0] =A%10;
    R[1] =B%10;
    R[2] =C%10;
    R[3] =D%10;
    R[4] =E%10;

    int rmin=10;
    for(int i=0; i<5; i++){
        if(R[i]!=0){
            rmin = min (rmin, R[i]);
        }
    }
//    if(rmin ==10){
//        rmin =0;
//    }

    int a1=(A+9)/10;
    int a2=(B+9)/10;
    int a3=(C+9)/10;
    int a4=(D+9)/10;
    int a5=(E+9)/10;
    cout << (a1+a2+a3+a4+a5-1)*10 +rmin <<endl;

}