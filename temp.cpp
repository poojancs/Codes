#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string arr[]={"xxxx", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
        "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three",
        "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight",
        "twenty nine", "thirty"};
int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    string hour;
    if (m == 0)
    {
       cout << hour << " o' clock";
    }
    else if (m == 15) {
       cout << "quarter past " << hour;
    }
    else if (m == 30) {
        cout << "half past " << hour;
    }
    else if (m == 1) {
        cout << "one minute past " << hour;
    }
    else if (m < 30) {
        cout << arr[m] << " minutes past " << hour;
    }
    else {
        string next_hour;
        if(h<12)
            next_hour=arr[h+1];
        else
            next_hour=arr[1];
        if (m == 45) {
            cout << "quarter to " << next_hour;
        } else if (m == 59) {
            cout << "one minute to " << next_hour;
        } else {
            cout << arr[60-m] << " minutes to " << next_hour;
        }
    }

    cout << endl;

    return 0;
}
