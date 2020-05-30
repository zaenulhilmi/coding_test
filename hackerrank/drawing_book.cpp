#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    int left = 0;
    if(p % 2 == 0) {
        left =  (p + 2) / 2 ;
    } else {
        left =  (p + 1) / 2 ;
    }

    int right = 0;
    if(n % 2 == 0) {
        right =  (n + 2) / 2 ;
    } else {
        right =  (n + 1) / 2 ;
    }
    right = right - left;


    return min(left-1, right);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

