// https://acm.timus.ru/problem.aspx?space=1&num=2012
// timus 2012


#include <iostream>

int main()
{
    int fullNumbersOfExercise = 12;
    int fullTime = 5;
    int fredomMakeTime = 1;
    int fixMakeTime = fullTime - fredomMakeTime;
    int fixMinutes  = fixMakeTime * 60;

    int numbersOfFirstSolvedExercise = 0;

    std::cin >> numbersOfFirstSolvedExercise;

    int minutesForExercise = 45;
    int numbersOfExercise  = fixMinutes / minutesForExercise;
    int numbersOfFullSolvedExercise = numbersOfFirstSolvedExercise + numbersOfExercise;

    if (numbersOfFullSolvedExercise >= fullNumbersOfExercise)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}
