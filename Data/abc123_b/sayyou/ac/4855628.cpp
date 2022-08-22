#include <iostream>
#include <cmath>
using namespace std;

int ceil10(int in){
    return ceil(float(in)/10)*10;
}

int main()
{
    int a[5];
    int red=0;
    int last = 0;
    int time = 0;

    for (int i = 0; i < 5; ++i){
        cin >> a[i];
        if ((ceil10(a[i]) - a[i]) % 10 > red){
            red = ceil10(a[i]) - a[i];
            last = i; 
        }
        time += ceil10(a[i]);
    }

    cout << time - ceil10(a[last]) + a[last] << endl;

    return 0;
}
