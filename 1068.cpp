// https://acm.timus.ru/problem.aspx?space=1&num=1068
// timus 1068


#include <iostream>

int main()
{
    int num = 0;
    std::cin >> num;

    int sum = 0;
    
    if (num == 1)
        sum = 1;
    else if (num > 1)
        for (int i = 1; i <= num; i++)
            sum = sum + i;
    else if (num < 1)
        for (int i = 1; i >= num; i--)
            sum = sum + i;

    std::cout << sum;
    
    return 0;
}
