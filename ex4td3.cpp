#include <iostream>
#include <set>
#include <vector>
#include <list>
using namespace std;

//1
  set<int> creer(){
    for (int i = 1; i <= 100; i++) {
        set.insert(i);
}
return set;
}

//2
template <typename C>
bool recherche(const C&C, int valeur) {
    return C.count(valeur) > 0;
}
template <typename I, typename T>
bool recherche(I debut, I fin, T valeur) {
    while (debut != fin) {
        if (*debut == valeur) {
            return true;
        }
        debut++;
    }
    return false;
}
int main(){
set<int>T = creer();

    vector<int> vect = {1, 2, 3, 4};
    list<string> list = {"cpp", "java", "html", "css"};
    char arr[4] = {'a', 'b', 'c', 'd'};

    cout << " 3 se trouve dans le set : " << recherche(set, 3) << endl;
    cout << " 1 se trouve dans l'ensemble vecteur : " << recherche(vect.begin(), vect.end(), 1) << endl;
    cout << "html se trouve dans la liste : " << recherche(list.begin(), list.end(), "html") << endl;
    cout << "a se trouve dans le tableau : " << recherche(begin(arr), end(arr), 'a') << endl;
return 0;

}
