// https://acm.timus.ru/problem.aspx?space=1&num=1086
// timus 1086


#include <iostream>
#include <vector>
#include <algorithm>


bool isPrimeNumber(int);
std::vector <int> getPrimeNumbersTo(int);


int main()
{
    int amountNumbers = 0;
    std::cin >> amountNumbers;

    std::vector <int> primeNumberIndexes;
    for (int i = 0; i < amountNumbers; i++)
    {
        int primeNumIndex;
        std::cin >> primeNumIndex;
        primeNumberIndexes.push_back(primeNumIndex);
    }

    int index = 0;
    if (amountNumbers > 0)
    {
        auto maxIndexPrimeNumber = std::max_element(primeNumberIndexes.begin(), primeNumberIndexes.end());
        index = *maxIndexPrimeNumber;
    }
    
    

    std::vector <int> primeNumbers;
    primeNumbers = getPrimeNumbersTo(index);
    
    for (int i = 0; i < amountNumbers; i++)
    {
        int requiredIndex = primeNumberIndexes[i];
        std::cout << primeNumbers[requiredIndex - 1] << std::endl;
    }
    
    return 0;
}


bool isPrimeNumber(int num)
{
    if (num > 1)
    {
        for (int i = 2; i < num; i++)
            if ((num % i) == 0)         
                return false; 
        return true;
    }
    else
        return false;
}


std::vector <int> getPrimeNumbersTo(int indexTo)
{
    std::vector <int> primeNumbers;

    int index = indexTo;
    while (index > 0)
    {
        static int num = 0;
        if (isPrimeNumber(num))
        {
            index = index - 1;
            primeNumbers.push_back(num);
        }

        num = num + 1;
    }

    return primeNumbers;
}