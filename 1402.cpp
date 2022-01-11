// https://acm.timus.ru/problem.aspx?space=1&num=1402
// timus 1402


#include <iostream>


long long factorial(int n);


int main()
{
    int numIngredients = 0;
    std::cin >> numIngredients;

    long long result = 0;

    if (numIngredients == 1)
        result = 0;

    else if (numIngredients == 2)
        result = 2;

    else
        for (int i = 2; i <= numIngredients; i++)
            result = result + factorial(numIngredients) / factorial(numIngredients - i);

    std::cout << result;

    return 0;
}


long long factorial(int n)
{
    long long result = 1;

    for (int i = 2; i <= n; i++)
        result = result * i;
    
    return result;
}
