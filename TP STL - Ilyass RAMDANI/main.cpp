#include "eleve.h"



int main()
{
    InitRandom();
    int nbNoteComparaison = 0;
    int nbNomComparaison = 0;
    vector<Eleve> E;

    for(int i=0;i<10; i++)
        E.push_back(EleveAleatoire());

    cout<<"\n\nTRI SUIVANT LES NOTES\n\n"<<endl;

    std::sort(E.begin(),E.end(), CompareNote(nbNoteComparaison));

    vector<Eleve>::const_iterator it =E.begin();
    for(;it!=E.end();++it){
        it->affiche_nom();
        it->affiche_note();
    }

    cout<<"\n\nTRI PAR ORDRE ALPHABETIQUE\n\n"<<endl;

    std::sort(E.begin(),E.end(), CompareNom(nbNomComparaison));

    it =E.begin();
    for(;it!=E.end();++it){
        it->affiche_nom();
        it->affiche_note();
    }

    cout<<"Nombre de comparaison de notes : "<<nbNoteComparaison<<endl;
    cout<<"Nombre de comparaison de nom : "<<nbNomComparaison<<endl;

    return 0;
}
