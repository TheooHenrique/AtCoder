#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string resposta = "";
    for (int i = n; i > 0; --i) {
        resposta += to_string(i) + ",";
    }

    cout << resposta.substr(0, resposta.length() - 1) << endl;

    return 0;
}