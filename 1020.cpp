// https://acm.timus.ru/problem.aspx?space=1&num=1020
// timus 1020


#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>


float getPi();


int main()
{
    int nailsNum = 0;
    std::cin >> nailsNum;

    int radius = 0;
    std::cin >> radius;

    struct coordinate
    {
        float x = 0;
        float y = 0;
    };

    std::vector <coordinate> area;

    for (int nail = 0; nail < nailsNum; nail++)
    {
        coordinate point;

        std::cin >> point.x;
        std::cin >> point.y;

        area.push_back(point);
    }
    
    float circumference = 0;
    circumference = 2 * getPi() * radius;

    float pointPerimeter = 0;
    for (int nail = 1; nail < nailsNum; nail++)
    {
        int pointFrom = nail - 1;
        int pointTo = nail;
        
        float line = 0;
        float deltaX = area[pointTo].x - area[pointFrom].x;
        float deltaY = area[pointTo].y - area[pointFrom].y;

        line = sqrtf(powf(deltaX, 2) + powf(deltaY, 2));

        pointPerimeter = pointPerimeter + line;
    }
    
    float dLine = 0;
    float deltaX = area[nailsNum - 1].x - area[0].x;
    float deltaY = area[nailsNum - 1].y - area[0].y;
    dLine = sqrtf(powf(deltaX, 2) + powf(deltaY, 2));

    pointPerimeter = pointPerimeter + dLine;

    float totalPerimeter = circumference + pointPerimeter;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << totalPerimeter;

    return 0;
}


float getPi()
{
    return 3.14159265358979323846;
}
