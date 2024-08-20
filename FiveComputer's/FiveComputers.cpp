#include <iostream>
#include <fstream>
using namespace std;

const int COLS = 5;
const int ROWS = 7;

void CalculateColumnAverages(int usage[ROWS][COLS], double labsAvarages[COLS]);
void PrintLabsAvarages(double labsAvarages[COLS]);
void PrintUsage(int usage[ROWS][COLS]);
void ReadLabUsageFile(int usage[ROWS][COLS]);

int main()
{
    int usage[ROWS][COLS];
    ReadLabUsageFile(usage);
    PrintUsage(usage);

    double labsAvarages[COLS];
    CalculateColumnAverages(usage, labsAvarages);
    PrintLabsAvarages(labsAvarages);

    return 0;
}

void CalculateColumnAverages(int array[ROWS][COLS], double averages[COLS])
{
    for (int col = 0; col < COLS; col++)
    {
        double sum = 0;
        for (int row = 0; row < ROWS; row++)
        {
            sum += array[row][col];
        }
        averages[col] = sum / ROWS;
    }
}

void CalculateRowAverages(int array[ROWS][COLS], double averages[ROWS])
{
    for (int row = 0; row < ROWS; row++)
    {
        double sum = 0;
        for (int col = 0; col < COLS; col++)
        {
            sum += array[row][col];
        }
        averages[row] = sum / COLS;
    }
}

void PrintLabsAvarages(double labsAvarages[COLS])
{
    for (int lab = 0; lab < COLS; lab++)
    {
        cout << "Lab " << lab + 1 << " average usage: " << labsAvarages[lab] << endl;
    }
}

/// <summary>
/// Print the usage of the labs
/// </summary>
/// <param name="usage"></param>
void PrintUsage(int usage[ROWS][COLS])
{
    cout << "Day\t";

    for (int lab = 0; lab < COLS; lab++)
        cout << "Lab " << lab + 1 << "\t";
    cout << endl;

    for (int day = 0; day < ROWS; day++)
    {
        cout << "Day " << day + 1 << ":\t";
        for (int lab = 0; lab < COLS; lab++)
            cout << usage[day][lab] << "\t";
        cout << endl;
    }
    cout << endl;
}
void ReadLabUsageFile(int usage[ROWS][COLS])
{
    ifstream file;
    file.open("values.txt");

    for (int day = 0; day < ROWS; day++)
        for (int lab = 0; lab < COLS; lab++)
            file >> usage[day][lab];
    file.close();
}
