// https://acm.timus.ru/problem.aspx?space=1&num=1457
// timus 1457


#include <iostream>
#include <vector>
#include <iomanip>
#include <numeric>

int main()
{
    int pointsNum = 0;
    std::cin >> pointsNum;

    std::vector <int> offsets;
    
    long ofsetsSum = 0;
    for (int i = 0; i < pointsNum; i++)
    {
        int offset = 0;
        std::cin >> offset;
        offsets.push_back(offset);
    }
    
    ofsetsSum = std::accumulate(offsets.begin(), offsets.end(), 0);

    double resOffset = (double)ofsetsSum / (double)pointsNum;
    
    std::cout << std::fixed << std::setprecision(6);
    std::cout << resOffset;

    return 0;
}
