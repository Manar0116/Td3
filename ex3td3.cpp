
#include <iostream>
#include <list>
#include <string>

using namespace std;

struct Personne {
  string nom;
  string prenom;
  int age;
};
Personne info() {
  Personne personne;
  cout << "Entrez le nom : ";
  cin >> personne.nom;
  cout << "Entrez le prénom : ";
  cin >> personne.prenom;
  cout << "Entrez l'âge : ";
  cin >> personne.age;
  return personne;
}
void trierListePersonnes(list<Personne>& liste) {
  liste.sort([](const Personne& a, const Personne& b) {
    return compare(a, b);
  });
}

bool compare(const Personne& a, const Personne& b) {
  return a.nom.compare(b.nom) < 0 ||
         (a.nom == b.nom && a.prenom.compare(b.prenom) < 0);
}
int main() {
    list<Personne> listePersonnes;
     while (true) {
    Personne personne = info();
    if (personne.nom == "") {
      break;
    }
    liste.push_back(personne);
  }
  trierListePersonnes(liste);
   cout << "Liste triée : " << endl;
  for (const Personne& personne : liste) {
    cout << personne.nom << " " << personne.prenom << " " << personne.age << endl;
  }

  return 0;
}
