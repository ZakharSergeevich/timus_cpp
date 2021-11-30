// https://acm.timus.ru/problem.aspx?space=1&num=1083
// timus 1083


#include <iostream>
#include <vector>

int main()
{
    int num = 0;
    std::cin >> num;

    int factCharCounter = 0;
      
    char ch = ' ';
    while (std::cin >> ch)
    {
        if (ch == '!')
            factCharCounter++;

        if (std::cin.eof())
            break;
    }
    
    int sum = num;
    int i = num;
    while (i > 0)
    {
        i = i - factCharCounter;
        if (i > 0)
            sum = sum * i;
    }
    
    std::cout << sum;    

    return 0;
}
