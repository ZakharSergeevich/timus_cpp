// https://acm.timus.ru/problem.aspx?space=1&num=1991
// timus 1991


#include <iostream>
#include <vector>

int main()
{
    int blocksNum = 0;
    int droidsNum = 0;

    std::cin >> blocksNum;
    std::cin >> droidsNum;

    std::vector <int> gungans;

    for (int i = 0; i < blocksNum; i++)
    {
        int gungansInBlock = 0;
        std::cin >> gungansInBlock;
        gungans.push_back(gungansInBlock);
    }
    
    int ballsSaved = 0;
    int droidsSaved = 0;

    for (int i = 0; i < blocksNum; i++)
    {
        int delta = droidsNum - gungans[i];

        if (delta > 0)
            droidsSaved = droidsSaved + delta;
        
        if (delta < 0)
            ballsSaved = ballsSaved + (-1) * delta;
    }
    
    std::cout << ballsSaved << ' ' << droidsSaved;
    
    return 0;
}
