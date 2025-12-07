#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    double f_x;
    int rounded_f;
    int remainder;

    cout << "Enter x (0...1]: ";
    cin >> x; // Введення x

    if (x == 0) { // Перевірка ділення на нуль
        cout << "Error: x cannot be 0." << endl;
        return 1;
    }

    // Обчислення функції f(x)
    f_x = abs(pow(x, 3)) + x / (3.8 * atan(x));

    cout << "f(x): " << f_x << endl;

    rounded_f = round(f_x); // Округлення 
    cout << "Rounded: " << rounded_f << endl;

    remainder = rounded_f % 10; // Обчислення залишку
    cout << "Mod 10: " << remainder << endl;

    return 0;
}