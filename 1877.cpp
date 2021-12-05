// https://acm.timus.ru/problem.aspx?space=1&num=1877
// 1877


#include <iostream>

int main()
{
    int code_1 = 0;
    int code_2 = 0;

    std::cin >> code_1;
    std::cin >> code_2;

    std::string answer = "no";

    if ((code_1 % 2) == 0)
        answer = "yes";

    if ((code_2 % 2) != 0)
        answer = "yes";
    
    std::cout << answer;

    return 0;
}
