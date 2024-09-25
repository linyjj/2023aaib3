#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    printf("%d\n",'a'); ///單引號代表一個字母,會對應一個數值
    printf("%d\n","a"); ///雙引號代表黑多個字幕(字串),就是陳列,就是指標
    if('a'==97) printf("其實'a'是數值97\n");
}
