# OOP-HOMEWORK-3
Fakultet elektrotehnike Tuzla - Objekto orijentirano programiranje

 Problem 1

Napisati generiˇcku funkcijujednakokoja poredi sekvence [od1, do1) i [od2,
do2), pri ˇcemu se pretpostavlja da sekvence imaju isti broj elemenata. Funkcija
vra ́ca taˇcnu vrijednost ukoliko su svi elementi dvaju sekvenci isti u suprot-
nom vra ́ca netaˇcnu vrijednost. Funkcija uzima tri parametra, prva dva oz-
naˇcavaju poˇcetak i kraj prve sekvence, a tre ́ci parametar oznaˇcava poˇcetak
druge sekvence. Napomena: iteratori koji operiraju na sekvencama mogu
biti razliˇcitog tipa.
Koriste ́ci funkcijujednako, napisati program koji uˇcitava rijeˇci koje ko-
risnik unosi sa tastature i ispisuje svaku rijeˇc koju identificira kao palindrom.
Palindrom je rijeˇc koja ima isto znaˇcenje bez obzira da li se ˇcita sa lijeva na
desno ili obrnuto. Primjer pozivanja programa:

$ ./p
pop
pop: Palindrom
ako
svako
tako
ratar
ratar: Palindrom
bilo
ili
ili: Palindrom
^D

Opciono, napisati isti program koriste ́ci algoritamcopy_ifdefiniran u
zaglavlju<algorithm>istreamiteratore za unos i ispis.

3 Problem 2

Napisati program koji uˇcitava rezultate utakmica Engleske lige od 2000
godine. Fajl sadrˇzi informacije o sezoni, imenu doma ́cina, gosta, broju
postignutih golova doma ́cina, kao i gosta, ligi i rezultatu, respektivno. Rezul-
tat ’A’ oznaˇcava pobjedu gosta, ’H’ pobjedu doma ́cina i ’D’ nerjeˇsen rezul-
tat. Nakon uˇcitavanja korisniku omogu ́citi da odabere sezonu i ligu za ispis


```
tabele, sve dok korisnik eksplicitno ne prekine unos saEOFuslovom. Za
odabranu godinu(sezonu) i ligu potrebno je ispisati tabelu klubova sortiranu
po pozicijima na tabeli, koja je odreena ukupnim brojem bodova tima,
tako ˇsto za svaku pobjedu tim dobija 3 boda, a za nerjeˇsen rezultat oba
tima dobivaju po 1 bod. U sluˇcaju da viˇse timova ima isti broj bodova,
pozicija se odreuje na osnovu gol razlike (proj postignutih - broj priml-
jenih golova). Pored toga, za svaki tim je potrebno ispisati broj pobjeda,
poraza i nerjeˇsenih utakmica, kao i broj postignutih, primljenih golova i gol
razliku.
U sluˇcaju neispravnog unosa sezone ili lige, korisniku ispisati odgovara-
ju ́cu poruku.
U prilogu je dat csv fajlengleska_liga.csvkoji sadrˇzi ranije navedene
informacije o utakmicama. Podaci u jednom redu su razdvojeni sa ’;’. Za
rad sa fajlovima moˇze se koristiti objekat tipastd::ifstreamiz zaglavlja
<fstream>. Objekat se moˇze definisati na sljede ́ci naˇcin:
```
```
std::ifstream in("imefajla");
```
```
Dalje je mogu ́ce tretirati objekatinna identiˇcan naˇcin kao i objekatcin
npr
```
```
std::string x;
in >> x;
```
ˇcita sljede ́ci string iz datoteke sa imenomimefajlai njegovu vrijednost
dodjeljuje varijablix. Objekatinje mogu ́ce i slati u funkcije koje oˇcekuju
cinobjekat (tj. koje oˇcekuju objekat tipastd::istream. Primjer pozivanja
programa:

```
$ ./p
Rezultati su ucitani.
Unesite sezonu i ligu za prikaz tabele:
2013 1
POZ KLUB POB NER IZG PGOL PRGOL GR BOD
1 Manchester United 28 5 5 86 43 43 89
2 Manchester City 23 9 6 66 34 32 78
3 Chelsea 22 9 7 75 39 36 75
4 Arsenal 21 10 7 72 37 35 73
5 Tottenham Hotspur 21 9 8 66 46 20 72
6 Everton 16 15 7 55 40 15 63
7 Liverpool 16 13 9 71 43 28 61
8 West Bromwich Albion 14 7 17 53 57 -4 49
```

9 Swansea City 11 13 14 47 51 -4 46
10 West Ham United 12 10 16 45 53 -8 46
11 Norwich City 10 14 14 41 58 -17 44
12 Fulham 11 10 17 50 60 -10 43
13 Stoke City 9 15 14 34 45 -11 42
14 Southampton 9 14 15 49 60 -11 41
15 Aston Villa 10 11 17 47 69 -22 41
16 Newcastle United 11 8 19 45 68 -23 41
17 Sunderland 9 12 17 41 54 -13 39
18 Wigan Athletic 9 9 20 47 73 -26 36
19 Reading 6 10 22 43 73 -30 28
20 Queens Park Rangers 4 13 21 30 60 -30 25

Unesite sezonu i ligu za prikaz tabele:
^D

4 Problem 3

Implementirati generiˇcku f-juakumulirajkoja sumira elemente sekvence
odreene iteratorima[pocetak, kraj)sa nekom poˇcetnom vrijednoˇs ́cuinit.
Funkcija vra ́ca rezultat koji je istog tipa kao i poˇcetna vrijednost. Ele-
menti sekvence ne moraju biti istog tipa kao i poˇcetna vrijednost, ali moraju
imati definiranoperator+, te mora biti mogu ́ca konverzija iz tog tipa u tip
poˇcetne vrijednosti. Funkcija prima tri parametra,pocetak,krajiinit.
Napomena: funkcijaakumuliraj je jedostavna implementacija algoritma
std::accumulatedefiniranog u zaglavlju<numeric>. Napisati i odgovara-
ju ́ci glavni program kojim ́ce se testirati navedena funkcija, za razliˇcite kom-
binacije ulaznih parametara.

5 Problem 4

Implementirati generiˇcku f-juparticionisikoja elemente sekvence odreene
iteratorima[pocetak, kraj)regrupiˇse tako da svi elementi za koje unarna
predikat funkcijapvratitrueidu u prvi dio sekvence, a svi ostali elementi
u drugi dio sekvece. Funkcija vra ́ca iterator na prvi element drugog di-
jela sekvence ili iterator koji odgovara kraju sekvence, ukoliko svi elementi
pripadaju prvom dijelu. Tip parametra predikat funkcije je takav da je
mogu ́ca implicitna konverzija elemenata sekvence u taj tip, nakon deref-
erenciranja iteratora. Funkcija prima tri parametra, pocetak,kraji p.


Napomena: funkcijaparticionisije jedostavna implementacija algoritma
std::partitiondefiniranog u zaglavlju<algorithm>. Napisati i odgo-
varaju ́ci glavni program kojim ́ce se testirati navedena funkcija, za razliˇcite
kombinacije ulaznih parametara.

6 Problem 5

Implementirati klasuBazaRadnikakoja implementira bazu radnika i omogu ́cava:

- Unos pojedinaˇcnog radnika u bazu. Baza ne dozvoljava unos dva rad-
    nika istog imena. Ukoliko se pokuˇsa unijeti radnik dva puta metod
    generiradomain_error
- Brisanje radnika odreenog imena iz baze. Ako radnik nije izbrisan
    metod vra ́cafalse.
- Unos i ispis kompletne baze pomo ́cu objekata klasaistreamiostream
- Raˇcunanje prosjeˇcne plate i starosti radnika.

Klasu testirati sljede ́cim glavnim programom:

#include "radnik.h"
#include "baza.h"
#include <iostream>

int main()
{
BazaRadnika b1;
b1.ucitaj(std::cin);
if (b1.izbrisi_radnika("alen"))
std::cout << "alen izbrisan" << std::endl;
std::cout << "U bazi su" << std::endl;
b1.ispisi(std::cout);
std::cout << "Prosjek plata je: " << b1.prosjek_plata() << std::endl;
std::cout << "Prosjek godina je: " << b1.prosjek_godina() << std::endl;
return 0;

}

```
Primjer pozivanja:
```

$ ./p
selim 2300.4 34
alen 1950.6 55
alan 2130 59
alen 1200 23
Radnik vec u bazi
armando 5000 29
^D
alen izbrisan
U bazi su
alan 2130 59
armando 5000 29
selim 2300.4 34
Prosjek plata je: 3143.
Prosjek godina je: 40.


