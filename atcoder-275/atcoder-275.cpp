#include <iostream>
using namespace std;

int main(){
  int n;
  int maisAlto = 0;
  int indiceMaisAlto = 0;


  cin >> n;
  for (int i = 0; i < n; ++i){
    int altura;
    cin >> altura;
    if (altura > maisAlto){
        indiceMaisAlto = i + 1;
        maisAlto = altura;
    }
  }
  
  cout << indiceMaisAlto << endl;
  
  return 0;
}