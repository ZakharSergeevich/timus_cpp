// https://acm.timus.ru/problem.aspx?space=1&num=1005
// timus 1005


#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int stonesNum = 0;
    std::cin >> stonesNum;

    std::vector <long> stoneWeights;
    for (int i = 0; i < stonesNum; i++)
    {
        long weght = 0;
        std::cin >> weght;
        stoneWeights.push_back(weght);
    }

    std::sort(stoneWeights.begin(), stoneWeights.end(), std::greater<long>());

    std::vector <long> heaps = { 0, 0 };

    for (int i = 0; i < stoneWeights.size(); i++)
    {
        if (heaps[0] < heaps[1])   
            heaps[0] = heaps[0] + stoneWeights[i];
        else
            heaps[1] = heaps[1] + stoneWeights[i];
    }
    
    long deltaWights = 0;
    deltaWights = abs(heaps[0] - heaps[1]);

    std::cout << deltaWights;

    return 0;
}