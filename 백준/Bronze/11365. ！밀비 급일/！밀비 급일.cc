#include <bits/stdc++.h>
using namespace std;

string str;

int main() {
    while(getline(cin, str)) {
        if(str == "END") break;
        reverse(str.begin(), str.end());
        cout << str << "\n";
    }
}