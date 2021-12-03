// https://acm.timus.ru/problem.aspx?space=1&num=1025
// timus 1025


#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int groupsNum = 0;
    std::cin >> groupsNum;

    std::vector <int> groupsOfVoters;
    for (int i = 0; i < groupsNum; i++)
    {
        int votersNum = 0;
        std::cin >> votersNum;
        groupsOfVoters.push_back(votersNum);
    }
    
    std::sort(groupsOfVoters.begin(), groupsOfVoters.end());

    int votersNumNeeds = 0;
    
    int requredNumOfGroups = (groupsNum / 2) + 1;
    for (int i = 0; i < requredNumOfGroups; i++)
    {
        int requaredNumOfVoters = (groupsOfVoters[i] / 2) + 1;
        votersNumNeeds = votersNumNeeds + requaredNumOfVoters;
    }
    
    std::cout << votersNumNeeds;

    return 0;
}
