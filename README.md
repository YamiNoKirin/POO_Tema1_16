# POO_Tema1_16
Prima tema la laboratorul de POO, tema 16 din lista (graf ponderat neorientat)

Necessary files to compile and run: /main.cpp, /graph.h, /vector.h
Sample input and output: /cmake-build-debug/test.in, /cmake-build-debug/test.out

Cerinte comune tuturor temelor:

    - implementare in C++ folosind clase

    - ATENTIE: functiile pe care le-am numit mai jos metode (fie ca sunt supraincarcari de operatori, fie altfel de functii),
        pot fi implementate ca functii prieten in loc de metode ale claselor respective, daca se considera ca aceasta alegere este mai naturala;

    - DONE: supraincarcarea operatorilor << si >> pentru iesiri si intrari de obiecte, dupa indicatiile de mai jos, astfel incat sa fie permise (si ilustrate in program):

    - DONE: citirea de la tastatura si dintr-un fisier;

    - DONE: scrierea pe ecran sau intr-un fisier;

    - DONE: citirea informațiilor complete a n obiecte, memorarea și afisarea acestora

    - DONE: implementarea constructorului de copiere si supraincarcarea operatorului =, pentru fiecare clasa

    - DONE: supraincarcarea operatorului ==, a lui !=, si a lui < (pentru a putea compara 2 obiecte si a putea sorta un vector de obiecte folosind functia sort)

    - DONE: bonus 1p (care se acorda daca toate temele au avut 10) pentru folosirea de templateuri, astfel incat tema aceasta ar putea fi notata cu 11.


Tema 16. grafuri ponderate, reprezentate ca grafuri neorientate cu ponderi atasate muchiilor, in ce mod doreste programatorul:

    - clasa graf ponderat sa contina metode pentru:

    - DONE: citirea grafului, care sa supraincarce operatorul >>;

    - DONE: afisarea grafului, care sa supraincarce operatorul <<;

    - DONE: citirea si afisarea sa foloseasca acelasi mod de reprezentare a grafului, care sa arate intreaga structura a grafului;

    - DONE: determinarea matricii ponderilor drumurilor cu ponderi minime;

    - DONE: determinarea nodurilor intermediare de pe drumul de pondere minima intre doua noduri;

    - DONE: determinarea componentelor conexe, nu ca grafuri, ci ca liste de noduri;

    - determinarea arborelui partial de cost minim al componentei conexe a unui nod dat;

    - DONE: o metoda care sa determine daca graful este conex, care poate folosi orice metoda descrisa anterior;

    - DONE: o metoda de supraincarcare a operatorului *, care sa determine, din doua grafuri ponderate
        avand aceeasi multime de noduri, graful ponderat cu aceeasi multime de noduri ca si acele
        doua grafuri, si cu multimea muchiilor egala cu intersectia multimilor muchiilor acelor doua grafuri,
        cu fiecare muchie avand ca pondere minimul dintre ponderile muchiilor corespunzatoare din acele doua grafuri;

    - DONE: Clasa graf trebuie sa foloseasca implementarea unei clase de Nod pentru a retine informatia despre un anumit nod.

    - DONE: Clasa trebuie implementata folosind alocare dinamica
