#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    for (int i = 0; i<10; i++){
        cout <<to_string(n)+" x "+to_string(i+1)+" = "+ to_string(n * (i+1))+"\n";
    }
    
    return 0;
}
