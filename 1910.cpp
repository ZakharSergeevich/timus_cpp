// https://acm.timus.ru/problem.aspx?space=1&num=1910
// timus 1910


#include <iostream>
#include <vector>

int main()
{
    int sectionsNum = 0;
    std::cin >> sectionsNum;

    std::vector <int> force;
    for (int i = 0; i < sectionsNum; i++)
    {
        int forceOfSection = 0;
        std::cin >> forceOfSection;
        force.push_back(forceOfSection);
    }
    
    int maxForceSections = 0;
    int centerNum = 0;
    
    maxForceSections = force[0] + force[1] + force[2]; 
    centerNum = 2;
    
    for (int i = 1; i < sectionsNum - 1; i++)
    {
        int sumForce = force[i - 1] + force[i] + force[i + 1];
        if (sumForce >= maxForceSections)
        {
            maxForceSections = sumForce;
            centerNum = i + 1;
        } 
    }
    
    std::cout << maxForceSections << ' ' << centerNum;

    return 0;
}
