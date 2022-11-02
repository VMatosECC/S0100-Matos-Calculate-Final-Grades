// S0101-Matos-Calculate-Final-Grades.cpp 
// Author:  V. Matos
// Goals:   Read a list of grades, calculate max, min, avg, and std.
// ------------------------------------------------------------------

//Preprocessor declaration
#include <iostream>
#include <iomanip>
using namespace std;

//Global constants
const int N = 50;

//Prototypes
void getData(int grades[], int n, int& actualSize);
void calculateStats(int grades[], int actualSize, int& maxGrade, int& minGrade, double& avgGrade);
void showResults(int grades[], int actualSize, int maxGrade, int minGrade, double avgGrade);

int main()
{
    //variable declarations
    int grades[N]{};
    int minGrade, maxGrade, actualSize;
    double avgGrade, std;

    getData(grades, N, actualSize);
    calculateStats(grades, actualSize, maxGrade, minGrade, avgGrade);
    showResults(grades, actualSize, maxGrade, minGrade, avgGrade);

}

//User-defined functions
void getData(int grades[], int n, int& actualSize)
{
    //ask for actual size
    do
    {
        cout << "Enter actual num. of students [no more than 50!]: ";
        cin >> actualSize;
        if (actualSize > N)
        {
            cout << "Error - too many students! Try again";
        }
        else
        {
            break;
        }
    } while (true);


    //Accept individual grades
    for (int i = 0; i < actualSize; i++)
    {
        cout << "Enter grade-" << (i + 1) << ": ";
        cin >> grades[i];
    }

}

void calculateStats(int grades[], int actualSize, int& maxGrade, int& minGrade, double& avgGrade)
{
    //TODO
}

void showResults(int grades[], int actualSize, int maxGrade, int minGrade, double avgGrade)
{
    //TODO
}