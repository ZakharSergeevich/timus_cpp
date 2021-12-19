// https://acm.timus.ru/problem.aspx?space=1&num=1517
// timus 1517


#include <iostream>
#include <vector>

int main()
{
    int lengthSpeech = 0;
    std::cin >> lengthSpeech;
    
    std::string speach_1;
    std::cin >> speach_1;

    std::string speach_2;
    std::cin >> speach_2;

    std::vector <std::string> fragments;
    for (int i = 0; i < lengthSpeech; i++)
    {
        int letter = i;
        bool isFound = false;
        std::string fragment;
        for (int j = 0; j < lengthSpeech; j++)
        {
            if (speach_1[i] == speach_2[j])
            {  
                isFound = true;
                fragment.push_back(speach_1[i]);
                i++;
            }
            else
            {
                if (isFound)
                {
                    isFound = false;
                    i = letter;
                    fragments.push_back(fragment);
                    fragment = "";
                }          
            }
        }
        if (isFound)
        {
            fragments.push_back(fragment);
        }
    }


    int maxSize = 0;
    int indexMaxSize = 0;
    for (int i = 0; i < fragments.size(); i++)
    {
        int speachSize = fragments[i].size();
        if (speachSize > maxSize)
        {
            maxSize = speachSize;
            indexMaxSize = i;
        }
    }

    if (maxSize)
        std::cout << fragments[indexMaxSize];
    else
        std::cout << "";

    return 0;
}
