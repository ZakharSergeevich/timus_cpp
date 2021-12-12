// https://acm.timus.ru/problem.aspx?space=1&num=2100
// timus 2100


#include <iostream>

int main()
{
    int numOfFriends = 0;
    std::cin >> numOfFriends;

    int numOfPersonResult = numOfFriends + 2;

    std::string answer;

    for (int i = 0; i < numOfFriends; i++)
    {
        std::cin >> answer;
        if (answer.find('+') != std::string::npos)
            numOfPersonResult = numOfPersonResult + 1;
    }
    
    if (numOfPersonResult == 13)
        numOfPersonResult = 14;

    int price = numOfPersonResult * 100;
    
    std::cout << price;

    return 0;
}
