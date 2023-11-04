#include <iostream>
using namespace std;

class vect {
protected:
    int nelem; 
    int* adr; 

public:
    vect(int n) : nelem(n), adr(new int[n]) {}

    virtual ~vect() { delete[] adr; }

    int& operator[](int index) { return adr[index]; }
};

class vectok : public vect {
public:
    vectok(int n) : vect(n) {}

    
    vectok(const vectok& other) : vect(other.nelem) {
        for (int i = 0; i < nelem; i++) {
            adr[i] = other.adr[i];
        }
    }

   
    vectok& operator=(const vectok& other) {
        if (this == &other) {
            return *this; 
        }

        delete[] adr; 

        nelem = other.nelem;
        adr = new int[nelem];

        for (int i = 0; i < nelem; i++) {
            adr[i] = other.adr[i];
        }

        return *this;
    }
    int taille() const { return nelem; }
};

int main() {
    vectok vect1(5);
    for (int i = 0; i < vect1.taille(); i++) {
        vect1[i] = i * 10;
    }
    vectok vect2 = vect1;
    vect1[0] = 999;
    for (int i = 0; i < vect1.taille(); i++) {
        cout << "vect1[" << i << "] = " << vect1[i] << ", vect2[" << i << "] = " << vect2[i] << endl;
    }

    return 0;
}