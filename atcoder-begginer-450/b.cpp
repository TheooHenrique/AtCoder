#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){

    int n, r;
    cin >> n;
    int o = n - 1;
    map<pair<int, int>, int> map;

    vector<int> vec;

    vector<vector<int>> m;

    int quantas_entradas = 0;
    for (int i = o; i > 0; --i){
        quantas_entradas += i;
    }

    for (int i = 0; i < quantas_entradas; ++i){
        cin >> r;
        vec.push_back(r);
    }
    
    for (int i = o; i > 0; --i){
        vector<int> v2;
        copy(vec.begin(), vec.begin() + i, back_inserter(v2));
        m.push_back(v2);
        vec.erase(vec.begin(), vec.begin() + i);
    }


    for (int i = 1; i < m.size() + 1; ++i){
        for (int j = 1; j < m[i-1].size() + 1; ++j){
            map[make_pair(i, i + j)] = m[i-1][j-1];
        }
    }

    for(auto it = map.begin(); it != map.end(); ++it)
    {
        cout << it->first.first << " " << it->first.second << " " << it->second << "\n";
    }

    

    return 0;
}