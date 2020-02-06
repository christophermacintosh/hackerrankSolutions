#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    
    float fraction1;
    float fraction2;

    fraction1 = float(tip_percent)/100;
    fraction2 = float(tax_percent)/100;

    double tip = meal_cost * fraction1;
    double tax = meal_cost * fraction2;
    
    double totalCost;
    totalCost = meal_cost + tip + tax;
    totalCost = round(totalCost);

    cout << totalCost;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
