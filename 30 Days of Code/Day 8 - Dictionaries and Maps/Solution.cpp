#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <iterator>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //Declare variable for test case count, read from STDIN to the variable
    int testcasect;
    cin >> testcasect;

    string pair;

    //Declare dictionary
    //C++ uses the map class
    map<string,int> dictionary;
    
    //Now need a loop to populate the dictionary
    for(int i = 0; i < testcasect; i++){
        
        cin >> pair;

        if(!dictionary[pair]){
            cin >> dictionary[pair];
        }

    }

    //Now look for inputted names to check for
    while(cin>>pair){
        if(dictionary[pair]){
            cout << pair << "=" << dictionary[pair] << endl;
        }
        else{
            cout<< "Not found" << endl;
        }
    }
    return 0;
}

