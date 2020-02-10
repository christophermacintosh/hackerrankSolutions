#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;



int main() {

    int testcasecount;
    cin >> testcasecount;

    //itterate through each test case
    for(int i = 0; i < testcasecount; i++){
        string testcasestr;
        cin >> testcasestr;

        //itterate through each character in the current string
        for(int j = 0; j < testcasestr.length(); j++){
            //if it's even, output it
            if(j%2 == 0){
                cout << testcasestr[j];
            }
        }
        
        //whitespace
        cout << " ";
        
        for (int k = 0; k < testcasestr.length(); k++){
                if(k%2 != 0){
                    cout << testcasestr[k];
                }
            }

        cout <<"\n";
    }

    return 0;
}
