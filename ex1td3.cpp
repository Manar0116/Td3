#include <iostream>
#include <math.h>

using namespace std;

class Complexe {
public:
    float re;
    float img;

public:
    Complexe(float a, float b) {
        re = a;
        img = b;
    }

    Complexe somme(Complexe x){
        Complexe s(0,0);
        s.re=re+x.re;
        s.img=img+x.img;
        return s;
    }
    float module()
    {
        return sqrt(re*re+ img *img);
        }
   Complexe multiple(Complexe x){
    Complexe M(0,0);
    M.re=re*x.re-img*x.img;
    M.img=re*x.img+x.re*img;
    return M;
   }
   Complexe soustraction(Complexe x){
    Complexe N(0,0);
    N.re=re-x.re;
    N.img=img-x.img;
    return N;
   }
    void afficher() {
        cout << re << " + " << img << "i" << endl;
    }
    
};
int main(){
    Complexe s(0,0);
    Complexe M(0,0);
    Complexe N(0,0);
float img1;
float img2;
float re1;
float re2;
cout<<"entrer la partie reelle et imaginaire du 1er nombre";
cout<<"re=";
cin>>re1;
cout<<"img=";
cin>>img1;

cout<<"entrer la partie reelle et imaginaire du 2eme nombre";
cout<<"re=";
cin>>re2;
cout<<"img=";
cin>>img2;
Complexe x1(re1,img1);
Complexe x2(re2,img2);
x1.afficher();
x2.afficher();
s=x1.somme(x2);
s.afficher();
M=x1.multiple(x2);
M.afficher();
N=x1.soustraction(x2);
N.afficher();
float mod ;
mod=x1.module();
cout<<"le module est ";
cin>>mod;

}