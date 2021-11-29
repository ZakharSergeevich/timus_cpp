// https://acm.timus.ru/problem.aspx?space=1&num=1585
// 1585


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

int main()
{
    std::vector <std::string> penguins;

    int num = 0;
    std::cin >> num;
    std::cin.ignore(100, '\n');

    for (int i = 0; i < num; i++)
    {
        std::string penguin;
        
        std::getline(std::cin, penguin);
        penguins.push_back(penguin);
    }

    std::string imperror = "Emperor Penguin";
    std::string macaroni = "Macaroni Penguin";
    std::string little = "Little Penguin";

    int numImperror = 0;
    int numMacaroni = 0;
    int numLittle = 0;

    numImperror = std::count(penguins.cbegin(), penguins.cend(), imperror);
    numMacaroni = std::count(penguins.cbegin(), penguins.cend(), macaroni);
    numLittle =  std::count(penguins.cbegin(), penguins.cend(), little);

    std::vector <int> countPenguins;
    countPenguins.push_back(numImperror);
    countPenguins.push_back(numMacaroni);
    countPenguins.push_back(numLittle);

    auto maxNum = std::max_element(countPenguins.begin(), countPenguins.end());
    
    int group = std::distance(countPenguins.begin(), maxNum);

    switch (group)
    {
        case 0:
            std::cout << imperror;
            break;

        case 1:
            std::cout << macaroni;
            break;

        case 2:
            std::cout << little;
            break;
        
        default:
            break;
    }

    return 0;
}