#include "bits/stdc++.h"
#include <cstdio>
using namespace std;
int main() {

    int begin_hour,begin_min,end_hour,end_min,total_hour;
    cin >> begin_hour >> begin_min >> end_hour >> end_min;
    if (begin_hour == end_hour ) {
        total_hour = 0;
    } else {
        if (end_min < begin_min) {
            total_hour = (end_hour - begin_hour - 1 + 24) % 24;
          } else {
            total_hour = (end_hour - begin_hour + 24) % 24;
          }
    }
    int total_min = (end_min - begin_min + 60) % 60;
    printf("%d %d",total_hour, total_min);

    return 0;
}

// #include<cstdio>
// using namespace std;
// int main()
// {
// 	int a,b,c,d;
// 	scanf("%d %d %d %d",&a,&b,&c,&d);
// 	int e=(c-a)*60+d-b;
// 	printf("%d %d",e/60,e%60);
// 	return 0;
// }
