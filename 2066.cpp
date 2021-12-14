// https://acm.timus.ru/problem.aspx?space=1&num=2066
// timus 2066


#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int min = 0;

    min = a + b + c;

    if ((a - b * c) < min)
        min = a - b * c;
        
    if ((a - b - c) < min)
        min = a - b - c;

    std::cout << min;

    return 0;
}
