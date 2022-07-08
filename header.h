#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void gotoxy (int x, int y);

void powitanie()
{
    int i;
    gotoxy(36,14);
    printf("ladowanie...");
    gotoxy(32,15);
    for(i = 1; i <= 20; i++)
    {
        Sleep(200);
        printf("%c",177);
    }
}
/* cialo funkcji gotoxy, ktorej uzywamy do rysowania */
void gotoxy (int x, int y)
{
    COORD coord = { 0 ,0 };                   		  
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void ornament()
{
    printf("\n");
    for(int j=0;j<110;j++)
    {
        printf("*");
    }
    printf("\n");
}
void stop_przycisk(void funkcja())
{
    char n;
    printf("\n\tChcesz wprowadzic dane ponownie? (t/n)");
    n=getchar();
    switch(n)
    {
        case 't':
            system("cls");
            funkcja();
        case 'n':
            break;
        default:
            stop_przycisk(funkcja);
    }
}
void wczytaj_macierz(int wiersz, int kolumna, int macierzA[100][100])
{
    printf("\n\tWprowadz elementy macierzy A:\n");
    for(int i = 0; i < wiersz; ++i)
    {
        for(int j = 0; j < kolumna; ++j)
        {
            printf("\tWprowadz element a%d%d: ", i + 1, j + 1);
            scanf("%d", &macierzA[i][j]);
        }
    }
}
void wypisz_macierz(int wiersz, int kolumna, int macierzA[100][100])
{
    printf("\n\tMacierz wyjsciowa:\n");
    for(int i = 0; i < wiersz; ++i)
    {
        for(int j = 0; j < kolumna; ++j)
        {
            printf("\t%d  ", macierzA[i][j]);
            if(j == kolumna - 1)
            {
                printf("\n\n");
            }
        }
    }
}
void wyznaczMaksymalnyElement(int wiersz,int kolumna,int macierzA[100][100],int max_kolumna[100])
{
    for(int j = 0; j < kolumna; ++j)
    {
        max_kolumna[j]=macierzA[0][j];
        for(int i = 0; i < wiersz; ++i)
        {
            if (macierzA[i][j]>max_kolumna[j])
            {
                max_kolumna[j]=macierzA[i][j];
            }
        }
    }
    for(int j = 0; j < kolumna; ++j)
    {
        printf("\n\tMaksymalny element kolumny %d to: %d ", j + 1, max_kolumna[j]);
    }
}
void sumaCyfrNumeruIndeksu()
{
    int i, suma, znak;
    for(i=suma=0;isdigit(znak=getchar());++i)
    {
        suma+=znak-'0';                   //-'0' zmienia wartosc typu char na int
        printf("\n\tIteracja:%d  Suma liczb:%d  Liczba dziesietna numeru znaku:%d", i+1, suma, znak);
    }
    printf("\n\n\tSuma %d liczb twojego numeru indeksu to: %d", i, suma);
}
/*
 * Funkcja do wprowadzania macierzy oraz jej elemeny.
 * przyjmuje liczbe wierszy, kolumn i tablice dwuwymirowa,
 * do ktorej zapisze elementy.
 */
void wprowadzMacierz(int wiersze, int kolumny, int macierz[100][100])
{
    printf("\n\tWprowadz elementy macierzy A\n\n");
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            // (*(macierz + i) + j) jest rownoznaczne z &macierz[i][j]
            printf("\tWprowadz element a%d%d: ", i + 1, j + 1);
            scanf("%d", (*(macierz + i) + j));
        }
    }
}
/*
 * Funkcja do wypisania elementow macierzy
 *
 *
 */
void wypiszMacierz(int wiersze, int kolumny, int macierz[100][100])
{
    printf("\n\tMacierz wyjsciowa:\n");
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            // *(*(macierz + i) + j) jest rownoznaczne z macierz[i][j]
            printf("\t%d ", *(*(macierz + i) + j));
            if (j == kolumny -1)
            {
                        printf("\n\n");
            }
        }
    }
}
void bubble_sort(int x)
{
    float *wskaznik, y;
    wskaznik = (float *)malloc(x*sizeof(float));
    printf("\n\tWprowadz elementy wektora, w postaci liczb rzeczywistych: \n");
    for(int i=0;i<x;i++)
    {
        printf("\tWprowadz %d element wektora: ", i+1);
        scanf("%f", wskaznik+i);
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x-1;j++)
        {
            if(*(wskaznik+j) > *(wskaznik+j+1))
            {
                y = *(wskaznik+j);
                *(wskaznik+j) = *(wskaznik+j+1);
                *(wskaznik+j+1) = y;
            }
        }
    }
}
void tabelka()
{			                                //Funkcja rysujaca tabelke					        //Deklaracje wymaganych zmiennych,
    gotoxy(30,5);				            //wystarczy jedna i, ale wtedy nie ma
    for(int i=0, k=90, j=30; i<=30; i++)
    {		                  			    //efektu rywsowania od krawedzi do srodka
        gotoxy(++j,5);printf("*");			//tutaj wartosci x sa zwiekszane od (30,5)
        gotoxy(--k,5);printf("*");			//tutaj wartosci x sa zemniejszane od (90,5)
        Sleep(20);				       	    //w efekcie linie spotykaja sie na srodku
    }					                    //gornej obramowki
    for (int j=5; j<=20; j++)
    {
        gotoxy(30,j);printf("*");			//tu zmienia sie wartosc y od (30,5)
        Sleep(20);					        //bo rysujemy linie pionowa
    }
    for (int j=5; j<=20; j++)
    {		           				        //jw.
        gotoxy(90,j);printf("*");
        Sleep(20);
    }
    for(int i=0, k=90, j=30; i<=30; i++)
    {							            //jw.
        gotoxy(++j,20);printf("*");
        gotoxy(--k,20);printf("*");
        Sleep(20);
    }
}
void szybka_tabelka()
{                                           //Funkcja jak wyzej tylko bez "efektow"
    gotoxy(30,5);
    for(int j=0;j<60;j++)
    {
        printf("*");
    }
    for(int j=5;j<=20;j++)
    {
        gotoxy(30,j);printf("*");
        gotoxy(90,j);printf("*");
    }
    gotoxy(30,20);
    for(int j=0;j<60;j++)
    {
        printf("*");
    }
}


/*Ponizej znajduja sie funkcje, mieszczace, w sobie tresci zadan.
Dlatego postanowilem je tu upchnac i wywolac, kiedy tego potrzebuje.*/


void tresc_zad1_pp(){printf("Zadanie 1. Wydrukuj na ekranie swoja wizytowke:\
\nImie, Nazwisko, numer indeksu, Wydzial, Kierunek, rok i semestr studiow.  \
\nObramuj korzystajac z symbolu *.");}
void tresc_zad2_pp(){printf("Zadanie 2. Uzytkownik podaje 3 liczby a, b, c. \
\nWczytaj je. Jezeli a+b>0 wypisz c. \n Jezeli a+b<0 wypisz -c. W pozostalyc\
h przypadkach c=0.");}
void tresc_zad1_petle(){printf("Zadanie 1. Napisz program drukujacy na ekran\
ie liczby. Wysokosc wczytujemy z klawiatury.");}
void tresc_zad2_petle(){printf("Zadanie 2. Napisz program wyznaczajacy sume \
n poczatkowych liczb parzystych.\n Liczbe n nalezy pobrac od uzytkownika.");}
void tresc_zad3_petle(){printf("Zadanie 3. Wyznacz najmniejszy, najwiekszy e\
lement ciagu A, \nktorego wczytywanie konczy sie po dwukrotnym pod rzad wpis\
aniem 0. \nWyswietl wyniki na ekranie.");}
void tresc_zad4_petle(){printf("Zadanie 4. Wczytaj macierz m x n. W kazdej k\
olumnie macierzy znajdz element maksymalny.\n Wyniki zapisz do wektora o odp\
owiedniej dlugosci, a nastepnie wypisz elementy tego wektora.");}
void tresc_zad5_petle(){printf("Zadanie 2. Wczytac macierze A m x n oraz B m\
 x p. Utworzyc macierz C m x n + p, w taki sposob,\n aby w poczatkowych n ko\
lumnach byla macierz A, w kolejnych p kolumnach macierz B.\n Znalezc numery \
wierszy, w ktorych wszystkie elementy sa rowne 0.");}
void tresc_zad1_funkcje(){printf("Zadanie 1. Wykorzystujac funkcje oblicz su\
me cyfr numeru indeksu.");}
void tresc_zad2_funkcje(){printf("Zadanie 2. Wykorzystujac funkcje wczytaj m\
acierz o wymiarach m x n.");}
void tresc_zad1_wskazniki(){printf("Zadanie 1. Wykorzystujac notacje wskazni\
kowa wczytaj macierz o wymiarach m x n.");}
void tresc_zad2_wskazniki(){printf("Zadanie 2. Wykorzystujac funkcje i wskaz\
niki wczytaj wektor liczb rzeczywistych,\n a nastepnie posortuj jego element\
y rosnaco.");}
void tresc_zad1_struktury(){printf("Zadanie 1. Wczytaj z pliku, do struktury\
 informacje dotyczace samochodu:\n marka, model, rok produkcji, pojemnosc si\
lnika. Posortuj dane ze wzgledu na rok produkcji.\n Wypisz posortowane dane \
do pliku.");}
#endif // HEADER_H_INCLUDEDn