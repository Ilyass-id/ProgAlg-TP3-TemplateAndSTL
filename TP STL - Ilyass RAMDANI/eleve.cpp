#include "eleve.h"

////////////////////////
/// Constructeurs et constructeur par copie

Eleve::Eleve(int n,string name){
    note = n;
    nom = name;
};


Eleve::Eleve(){};

Eleve::Eleve(const Eleve& B){
    nom = B.nom;
    note = B.note;
};

////////////////////////
/// Definition des Methodes portant sur la NOTE de l'eleve

int Eleve::get_note() const{                                //renvoi la note
    return note;
};                                                          //defini la note

void Eleve::set_note(int i){
    note = i;
};
                                                            //affiche la note
void Eleve::affiche_note() const{
    cout<<nom<<" a eu "<< note<<endl;
};

////////////////////////
/// Definition des Methodes portant sur le NOM de l'eleve
                                                            //renvoi le nom
string Eleve::get_nom() const{
    return nom;
};
                                                            //defini le nom
void Eleve::set_nom(string s){
    nom = s;
};
                                                            //affiche le nom
void Eleve::affiche_nom() const{
    cout<<"L'eleve s'appelle "<<nom<<endl;
};

void InitRandom(){srand((unsigned int)time(0));};

Eleve EleveAleatoire(){
    Eleve E;
    string s = "";
    for (int i = 0; i < 1 + rand()%NOMMAXLONG; i++)
       s = s + alphabet[rand() % 26];
    s[0] = toupper(s[0]);
    E.set_nom(s);
    E.set_note(rand()%(NOTEMAX+1));
    return E;
}
