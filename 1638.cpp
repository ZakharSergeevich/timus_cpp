// https://acm.timus.ru/problem.aspx?space=1&num=1638
// timus 1638


#include <iostream>

int main()
{
    int inputData[4];

    for (int i = 0; i < 4; i++)
        std::cin >> inputData[i];

    int sheetsPath = inputData[0];
    int bindingBookPath = inputData[1];
    int firstBook = inputData[2];
    int lastBook = inputData[3];

    int totalPath = 0;

    if (firstBook < lastBook)
    {
        int fullBooksNum = lastBook - firstBook - 1;

        int oneFullBookPath = sheetsPath + (2 * bindingBookPath);

        int rShiftPath = 2 * bindingBookPath;

        totalPath = (oneFullBookPath * fullBooksNum) + rShiftPath;
    }

    if (firstBook > lastBook)
    {
        int fullBooksNum = firstBook - lastBook;

        int oneFullBookPath = sheetsPath + (2 * bindingBookPath);

        int lShiftPath = sheetsPath;

        totalPath = (oneFullBookPath * fullBooksNum) + lShiftPath;
    }

    if (firstBook == lastBook)
    {
        totalPath = sheetsPath;
    }

    std::cout << totalPath;

    return 0;
}
