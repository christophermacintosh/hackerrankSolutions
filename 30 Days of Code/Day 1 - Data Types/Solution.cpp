#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int intvar;
    double doublevar;
    string stringvar;
    string a;
    string b;

    // Read and save an integer, double, and String to your variables.
    cin >> intvar;
    cin >> doublevar;
    
    //The note below references this
    getline(cin >> ws, a);
    getline(cin >> ws, b);

    stringvar = a + b;
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << intvar + i << endl;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << doublevar + d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + stringvar;
    return 0;
}