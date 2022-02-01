// https://acm.timus.ru/problem.aspx?space=1&num=1446
// timus 1446


#include <iostream>
#include <vector>

int main()
{
    int studentsNum = 0;
    std::cin >> studentsNum;

    std::vector <std::string> slyth;
    std::vector <std::string> huffl;
    std::vector <std::string> gryff;
    std::vector <std::string> reven;

    for (int i = 0; i < studentsNum; i++)
    {
        std::string name;
        std::string faculty;
        
        std::cin.ignore();
        std::getline(std::cin, name);
        
        std::cin >> faculty;
        
        if (faculty == "Slytherin")
            slyth.push_back(name);

        else if (faculty == "Hufflepuff")
            huffl.push_back(name);

        else if (faculty == "Gryffindor")
            gryff.push_back(name);

        else if (faculty == "Ravenclaw")
            reven.push_back(name);
    }
    

    std::cout << "Slytherin:" << std::endl;
    for (int i = 0; i < slyth.size(); i++)
        std::cout << slyth[i] << std::endl;
    std::cout << std::endl;
    
    std::cout << "Hufflepuff:" << std::endl;
    for (int i = 0; i < huffl.size(); i++)
        std::cout << huffl[i] << std::endl;
    std::cout << std::endl;

    std::cout << "Gryffindor:" << std::endl;
    for (int i = 0; i < gryff.size(); i++)
        std::cout << gryff[i] << std::endl;
    std::cout << std::endl;

    std::cout << "Ravenclaw:" << std::endl;
    for (int i = 0; i < reven.size(); i++)
        std::cout << reven[i] << std::endl;
    std::cout << std::endl;


    return 0;
}
