#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float principle, rate, time, amount, si, ci;

    // Getting input from user
    cout << "Enter principle amount: ";
    cin >> principle;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    // Calculating Simple Interest
    si = (principle * rate * time) / 100;
    cout << "Simple Interest is"<<si;

    // Calculating Compound Interest
    amount = principle * pow((1 + rate / 100), time);
    ci = amount - principle;
    cout << "Compound Interest is"<<ci;

    return 0;
}
