#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i=0 ; i<n ; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({y, x});
    }

    sort(v.begin(), v.end());

    for(int i=0 ; i<n ; i++) cout << v[i].second << " " << v[i].first << "\n";
}
