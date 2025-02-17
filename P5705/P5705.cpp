// #include <bits/stdc++.h>
// using namespace std;
// int main() {
    
//     double x;
//     cin >> x;
//     int y = x;
//     double xiaoshudian = (x - y)*10;
//     int ge = y % 10;
//     int shi = y/10%10;
//     int bai = y/100%10;
    
//     cout <<  xiaoshudian+double(ge/10.0)+double(shi/100.0)+double(bai/1000.0) << endl;

//     return 0;
// }

#include <cstdio>
using namespace std;
char a, b, c, d;

int main(){
    scanf("%c%c%c.%c", &a, &b, &c, &d);
    printf("%c.%c%c%c", d, c, b, a);
    return 0;
}
