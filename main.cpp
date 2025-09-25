/*******************************
* Автор:    Богданов.К.А.      *
* Дата:     26.09.2025         *
* Название: Линейные алгоритмы *
********************************/

#include <iostream>
#include <cmath>

using namespace std;

const double a = 0.52;
const double b = -3.552;
const double c = 3.24;

int main()
{
    double P = b / a;
    double g = c / a;

    double numerator = g;
    double denominator = 2 * pow(-P / 3, 1.5);
    double ratio = numerator / denominator;

    if (ratio > 1) ratio = 1;
    if (ratio < -1) ratio = -1;

    double alpha = acos(ratio);

    double x1 = -2 * sqrt(-P / 3) * cos(alpha / 3);
    double x2 = 2 * sqrt(-P / 3) * cos((alpha + M_PI) / 3);
    double x3 = 2 * sqrt(-P / 3) * cos((alpha - M_PI) / 3);

    cout << "x1 ="<< x1 << endl;
    cout << "x2 ="<< x2 << endl;
    cout << "x3 ="<< x3 << endl;

    return 0;
}
