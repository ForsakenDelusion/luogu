#include <bits/stdc++.h>

using namespace std;
// 这个单独浪费的十分钟 一开始没算在计算过程中。
int main() {
  double s, v;
  cin >> s >> v;
  double time = s / v + 10;
  int hours = time / 60;
  int mins = ceil(time);
  int min = mins % 60;
  int time_hous = (8 -1 - hours + 24)%24;

  printf("%02d:%02d",time_hous,60 - min);
  return 0;
}

// #include <iostream>
// #include <cstdio> 
// #include <cmath> 

// using namespace std;

// const int CLK = 24;  // 24小时制 
// const int LMT_H = 8;  // 到校小时上限 
// const int LMT_M = 0;  // 到校分钟上限 
// const int EXT = 10;  // 额外消耗分钟数

// int main() {
// 	int s, v;
// 	cin >> s >> v;
	
// 	int costM = ceil(1.0 * s / v) + EXT;  // 计算消耗分钟
// 	int costH = ceil(1.0 * costM / 60);  // 计算消耗小时
// 	costM %= 60;  // 保留60进制下的分钟部分 
// 	printf("%02d:%02d", (LMT_H - costH + CLK) % CLK, (LMT_M - costM + 60) % 60);  // 输出结果 

// 	return 0;
// }
