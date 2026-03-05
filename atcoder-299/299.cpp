#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n, t;
    cin >> n >> t;
    vector<int> cores(n);
    vector<int> rank(n);
    vector<int> jogadores;
    bool corPresente = false;

    for (int i = 0; i < n; ++i){
        cin >> cores[i];
        if(cores[i] == t) corPresente = true;
    }
    
    for (int i = 0; i< n; ++i){
        cin >> rank[i];
    }

    for (int i = 0; i < n; ++i){
        if ((corPresente && cores[i] == t) || (!corPresente && cores[i] == cores[0])) jogadores.push_back(i);
    }

    int vencedor; 
    for (int i = 0; i < jogadores.size(); ++i){
            
    }

    return 0;
}