#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> vec;
    int n;
    int first;

    cin >> n >> first;

    int numbers;

    for (int i = 0; i < n-1; ++i){
        cin >> numbers;
        vec.push_back(numbers);
    }

    sort(vec.begin(), vec.end());

    int resposta = 0;
    if (!vec.empty() && (vec[vec.size() - 1] >= first)){
        resposta = vec[vec.size() - 1] + 1 - first;
    }
    
    cout << resposta;

    return 0;
}