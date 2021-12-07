// https://acm.timus.ru/problem.aspx?space=1&num=2149
// 2149


#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int numBirds = 0;
    
    std::string birdHeads;
    std::string birdTails;
    std::string birdPaws;

    std::cin >> numBirds;

    std::cin >> birdHeads;
    std::cin >> birdTails;
    std::cin >> birdPaws;

    std::vector <char> birdOrientation;

    for (int i = 0; i < birdHeads.length(); i++)
    {
        if (birdHeads[i] == '<')        
            birdOrientation.push_back('L');
        
        if (birdHeads[i] == '>')
            birdOrientation.push_back('R');        
    }

    std::vector <char> genFirstLeftBirdOrientation;
    std::vector <char> genFirstRightBirdOrientation;
    std::vector <char> genHalfLeftBirdOrientation;
    std::vector <char> genHalfRightBirdOrientation;

    // GENERATION
    for (int i = 0; i < numBirds; i++)
        if ((i % 2) == 0)
            genFirstLeftBirdOrientation.push_back('L');
        else
            genFirstLeftBirdOrientation.push_back('R');

    for (int i = 0; i < numBirds; i++)
        if ((i % 2) == 0)
            genFirstRightBirdOrientation.push_back('R');
        else
            genFirstRightBirdOrientation.push_back('L');

    if (numBirds % 2 == 0)
    {
        for (int i = 0; i < numBirds; i++)
        {
            if (i < (numBirds / 2))
                genHalfLeftBirdOrientation.push_back('L');

            if (i >= (numBirds / 2))
                genHalfLeftBirdOrientation.push_back('R');
        }

        for (int i = 0; i < numBirds; i++)
        {
            if (i < (numBirds / 2))
                genHalfRightBirdOrientation.push_back('R');

            if (i >= (numBirds / 2))
                genHalfRightBirdOrientation.push_back('L');
        }
    }
    //

    // CHECK
    int changeCounter[4] = { 0, 0, 0, 0 };

    for (int i = 0; i < numBirds; i++)
        if (birdOrientation[i] != genFirstLeftBirdOrientation[i])   
            changeCounter[0]++;

    for (int i = 0; i < numBirds; i++)
        if (birdOrientation[i] != genFirstRightBirdOrientation[i])   
            changeCounter[1]++;

    for (int i = 0; i < numBirds; i++)
        if (birdOrientation[i] != genHalfLeftBirdOrientation[i])   
            changeCounter[2]++;

    for (int i = 0; i < numBirds; i++)
        if (birdOrientation[i] != genHalfRightBirdOrientation[i])   
            changeCounter[3]++;
        
    std::sort(changeCounter, changeCounter + (sizeof(changeCounter) / sizeof(changeCounter[0])));

    std::cout << changeCounter[0];
    
    return 0;
}
