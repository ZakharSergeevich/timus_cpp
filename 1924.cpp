// https://acm.timus.ru/problem.aspx?space=1&num=1924
// timus 1924


#include <iostream>
#include <vector>

int main()
{
    int num = 0;
    std::cin >> num;

    bool a[60];

    for (int i = 0; i < 50; i += 4)
    {
        a[i]     = true;
		a[i + 1] = true;
		a[i + 2] = false;
		a[i + 3] = false;
    }

    if (a[num - 1]) 
        std::cout << "grimy";
    else
        std::cout << "black";

    return 0;
}
