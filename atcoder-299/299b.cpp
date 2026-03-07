#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main(){

    int n, t;
    cin >> n >> t;
    vector<int> cores(n);
    vector<int> valores;
    bool corPresente = false;

    for (int i = 0; i < n; ++i){
        cin >> cores[i];
        if(cores[i] == t) corPresente = true;
    }

    vector<pair<int, int>> pairs;

    int value;
    for (int i = 0; i < n; ++i){
        cin >> value;
        valores.push_back(value);
    }

    for (int i = 0; i < n; ++i){
        if ((corPresente && cores[i] == t) || (!corPresente && cores[i] == cores[0])) pairs.push_back(make_pair( valores[i], i + 1));
    }

    sort(pairs.begin(), pairs.end());

    cout << pairs[pairs.size() - 1].second;

    return 0;
}