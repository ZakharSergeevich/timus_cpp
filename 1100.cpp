// https://acm.timus.ru/problem.aspx?space=1&num=1100
// timus 1100


#include <iostream>
#include <vector>


struct Pair
{
    int id = 0;
    int m = 0;
};



int main()
{
    int dataNums = 0;
    std::cin >> dataNums;

    std::vector <Pair> commandsNum;

    for (int i = 0; i < dataNums; i++)
    {
        Pair command;
        
        std::cin >> command.id;
        std::cin >> command.m;
        
        commandsNum.push_back(command);
    }

    std::vector <Pair> commandsNumSorted;
    commandsNumSorted = commandsNum;


    Pair buff;

    for (int i = 0; i < dataNums; i++)
        for (int j = dataNums - 1; j > i; j--)
        {
            if (commandsNumSorted[j - 1].m < commandsNumSorted[j].m)
            {
                buff = commandsNumSorted[j - 1];
                commandsNumSorted[j - 1] = commandsNumSorted[j];
                commandsNumSorted[j] = buff;
            }          
        }


    for (int i = 0; i < dataNums; i++)
        std::cout << commandsNumSorted[i].id << ' ' << commandsNumSorted[i].m << std::endl;

    return 0;
}
