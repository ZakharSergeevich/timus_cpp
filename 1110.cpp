// https://acm.timus.ru/problem.aspx?space=1&num=1110
// 1110


#include <iostream>
#include <vector>


int bigMod(int, int, int);


int main()
{
    int n = 0;
    int m = 0;
    int y = 0;

    std::cin >> n;
    std::cin >> m;
    std::cin >> y;

    if (m == 0)
        return -1;

    std::vector<int> nums;

    for (int x = 0; x < m; x++)
        if (bigMod(x, n, m) == y)      
            nums.push_back(x);
        
    if (nums.size() > 0)
        for (auto num : nums)
            std::cout << num << std::endl;
    else
        std::cout << -1 << std::endl;

    return 0;
}


int bigMod(int x, int n, int m)
{
    int result = 1;

    x =  x % m;

    for (int i = 0; i < n; i++)
        result = (result * x) % m;
    
    return result;
}
