#pragma once

#include <iostream>
#include <algorithm>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

const int NOTEMAX = 20;
const char alphabet[26] = {
   'a', 'b', 'c', 'd', 'e', 'f', 'g',
   'h', 'i', 'j', 'k', 'l', 'm', 'n',
   'o', 'p', 'q', 'r', 's', 't', 'u',
   'v', 'w', 'x', 'y', 'z'
};
const int NOMMAXLONG = 11;

class Eleve {
private:
    string nom;
    int note;
public:
    Eleve(int n,string name);
    Eleve();
    Eleve(const Eleve& B);                              //Pas besoin de destructeur (pas de pointeur dans la classe Eleve)

    int get_note() const;                               //renvoi la note
    void set_note(int i);                               //defini la note
    void affiche_note() const;                          //affiche la note

    string get_nom() const;                             //renvoi la note
    void set_nom(string s);                             //defini la note
    void affiche_nom() const;                           //affiche la note
};

class CompareNote{
    private:
    int* ptr;
    public:
    CompareNote(int& count){ptr = &count;};
    bool operator()(Eleve A, Eleve B) const{
        ++(*ptr);
        return A.get_note()<B.get_note();
    }
};

class CompareNom{
    private:
    int* ptr;
    public:
    CompareNom(int& count){ptr = &count;};
    bool operator()(Eleve A, Eleve B) const{
        ++(*ptr);
        return A.get_nom()<B.get_nom();
    }
};

void InitRandom();
Eleve EleveAleatoire();
