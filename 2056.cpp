// https://acm.timus.ru/problem.aspx?space=1&num=2056
// timus 2056


#include <iostream>
#include <vector>


std::string getNamedScholarship();
std::string getCommonScholarship();
std::string getHighScholarship();
std::string getNoneScholarship();
float getAverageScore(std::vector <int>);


int main()
{
    int numExam = 0;
    std::cin >> numExam;

    int A_counter = 0;
    int B_counter = 0;
    int C_counter = 0;

    std::vector <int> examGrades;
    for (int i = 0; i < numExam; i++)
    {
        int grade = 0;
        std::cin >> grade;
        examGrades.push_back(grade);

        if (grade == 5)
            A_counter++;

        if (grade == 4)
            B_counter++;
        
        if (grade == 3)
            C_counter++;
    }
    
    if (C_counter)
        std::cout << getNoneScholarship();
    else if (B_counter)
    {
        float averageScore = getAverageScore(examGrades);
        if (averageScore >= 4.5f)  
            std::cout << getHighScholarship();
        else
            std::cout << getCommonScholarship();
    }
    else
        std::cout << getNamedScholarship();
    

    return 0;
}


std::string getNamedScholarship()
{
    return "Named";
}


std::string getCommonScholarship()
{
    return "Common";
}


std::string getHighScholarship()
{
    return "High";
}


std::string getNoneScholarship()
{
    return "None";
}


float getAverageScore(std::vector <int> grades)
{
    float averageScore = 0;
    int sum = 0;

    for (int grade : grades)
        sum = sum + grade;
    
    averageScore = (float)sum / (float)grades.size();
    
    return averageScore;
}
