#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    // 请在此输入您的代码
    int months[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    int year, month, day;
    int start = 6;
    int cnt = 0;
    for (year = 2000; year <= 2020; year++)
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            months[2] = 29;
        }
        else
            months[2] = 28;
        for (month = 1; month <= 12; month++)
        {
            for (day = 1; day <= months[month]; day++)
            {
                cnt++;
                if (start == 8)
                {
                    start = 1;
                }
                if (start == 1 || day == 1)
                {
                    cnt++;
                }
                start++;
                if (year == 2020 && month == 10 && day == 1)
                    printf("%d", cnt);
            }
        }
    }
    return 0;
}