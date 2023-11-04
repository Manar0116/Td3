#include<iostream>
template <typename T>
T carre(T x) {
  return x * x;
}
int main(){
    int x=5;
    cout << "Le carré de 5 est : " << carre(x) <<endl;
    return 0;
}