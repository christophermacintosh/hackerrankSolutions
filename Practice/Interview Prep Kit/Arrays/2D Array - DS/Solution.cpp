#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    // 4 is the maximum number of columns over an array can be
    // My array has to start on the 1st and it's 1st value must shift right 4 columns's
    // then advance to the next row (repeats the above 4 times)
    
    //This holds the first sum that we'll use to compare to each iteration
    int maxsum = arr[0][0]+arr[0][1]+arr[0][2]+arr[1][1]+arr[2][0]+arr[2][1]+arr[2][2];
    int countx;
    int county;
    int countz;
    int i,j,k,l; //iterators for loops
    int sum;
    //i is the top row of the hourglass' starting point
    for(i=0; i < 4; i++){
        //this will move the hourglass one unit to the right
        for(j=0; j < 4; j++){
            sum = 0; //new hourglass reset

            //iterate through where the hourglass is located in the array
            for(k = j; k < j+3; k++){ //first row
                
                sum += arr[i][k]; //First row hourglass sum

                if(k == j+1){//middle row of hour glass
                    sum += arr[i+1][k]; //middle row sum
                }

                l = i+2; //third row of the hourglass
                sum += arr[l][k]; //third row sum
            }

            //if the newly calculated sum in the iteration is greater than the original, it'll save the new one and repeat this until the loop completes
            if(sum > maxsum) {
                maxsum = sum;
            }
        }
    }
    return maxsum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}