// https://acm.timus.ru/problem.aspx?space=1&num=1014
// timus 1014


#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int num = 0;
    std::cin >> num;

    if (num == 0)
        std::cout << 10;
    else if (num == 1)
        std::cout << 1;
    else
    {
        bool isResult = true;
        std::string result;

        while (isResult && (num != 1))
        {
            isResult = false;

            for (int i = 9; i > 1; i--)
            {
                if ((num % i) == 0)
                {   
                    isResult = true;
                    result = result + (char)('0' + i);
                    num = num / i;
                    break;
                }
            }          
        }

        reverse(result.begin(), result.end());

        if (!isResult)
            std::cout << -1;
        else
            std::cout << result;
    }
    
    return 0;
}
