/*****************************************
* Автор:    Богданов.К.А.                *
* Дата:     25.09.2025                   *
* Название: Циклы с пред- и постусловием *
******************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    const int n = 9;
    int i;
    double V[n], c, m0, m;

    cout <<"c = ";
    cin >> c;

    cout <<"m0 = ";
    cin >> m0;

    cout << "Введите 9 элементов:" << endl;
    for (i = 0; i < 9; i++) {
        cin >> V[i];

}
    cout << "/t" << "V" << "/t/t" << "m" << endl;
    cout << fixed << setprecision(2);

    for (int j = 0; j < 9; j++) {
        m = m0 * sqrt(1 / (1 - pow(V[j] / c, 2)));
        cout << "/t" << V[j] << "/t/t" << m << endl;
    }
        return 0;
}
