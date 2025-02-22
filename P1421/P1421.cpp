#include "bits/stdc++.h"
#include <cstdio>
using namespace std;

int main(){

    int yuan,jiao;
    cin >> yuan >> jiao;
    int geshu;
    geshu = (yuan * 10 + jiao)/19;
    cout << geshu;

    return 0;

}