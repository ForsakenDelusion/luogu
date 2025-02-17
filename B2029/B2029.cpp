#include "bits/stdc++.h"
#include <math.h>

using namespace std;

int main(){


    int a,b;
    cin >> a >>  b;
    double volumn =a * b * b * 3.14 * 0.001;
    double ton_f = 20.0 / volumn;
    int ton = ceil(ton_f);

    cout << ton;



    return 0;
}