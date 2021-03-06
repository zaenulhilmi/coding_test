#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int altitude = 0;
    int valeys = 0;
    for(int i = 0; i < s.size(); i++){
        int c = s[i];
        if(c == 'U'){
            altitude += 1;
        } else {
            if(altitude == 0){
                valeys += 1;
            }
            altitude -= 1;
        }
    }
    return valeys;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

