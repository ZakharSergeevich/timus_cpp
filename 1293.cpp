// https://acm.timus.ru/problem.aspx?space=1&num=1293
// 1293


#include <iostream>

int main()
{
    int panelsNum;
    int size[2];

    std::cin >> panelsNum;
    
    std::cin >> size[0];
    std::cin >> size[1];

    int square = 2 * panelsNum * size[0] * size[1];

    std::cout << square;

    return 0;
}
