#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include "header.h"
#include "menus.h"

void gotoxy(int x, int y);
void menu_glowne();

struct samochod
{
    int id;
    char marka[20];
    char model[40];
    int rokProdukcji;
    int pojemnosc;
} s;
int main()
{
    menu_glowne();                                      // wywolanie funkcji rysujacej menu glowne
    return 0;
}
void wizytowka()
{
    int i, j, k;                                        //Deklaracja zmiennej do rysowania krawedzi
    for(i=0, j=39, k=76;i<18;i++){                      //i=0|*                 |                  *
        gotoxy(++j,7);printf("*");                      //i=1|**                |                 **
        gotoxy(--k,7);printf("*");                      //i=2|***               v                ***
        Sleep(20);                                      //i=3|****  sposob rysowania od koncow  ****
    }
    for(i=8; i<=15; i++){                               //i=0|* (40,0)                       (75,0)*
        gotoxy(40,i);printf("*");                       //i=1|* (40,1)                       (75,1)*
        Sleep(10);                                      //i=2|* (40,2)                       (75,2)*
    }                                                   //i=3|* (40,3)                       (75,3)*
    for(i=8; i<=15; i++){                               //i=4|* (40,4)                       (75,4)*
        gotoxy(75,i);printf("*");                       //i=5|* (40,5)                       (75,5)*
        Sleep(10);                                      //i=6|* (40,6)                       (75,6)*
    }
    for(i=0, j=39, k=76;i<18;i++){                      //i=3|****  sposob rysowania od koncow  ****
        gotoxy(++j,16);printf("*");                     //i=2|***               ^                ***
        gotoxy(--k,16);printf("*");                     //i=1|**                |                 **
        Sleep(20);                                      //i=0|*                 |                  *
    }
}
void wypelnienie(){                                     //FUNKCJA WYPELNIA TABELKE
        int m, i;
        char a[30] = "     Politechnika Wroclawska";    //deklaracje tablic typu char o rozmiarze 30
        char b[30] = "       Aleksander Sozanski";      //rozmiar tablicy < rozmiaru wizytowki
        char c[30] = "              226638 ";           //tablice mieszcza znaki dlatego char
        char d[30] = "       Wydzial Elektryczny";      //
        char e[30] = "     Kierunek Elektrotechnika";
        char f[30] = "        Rok: I Semestr: 2";
        gotoxy(41,9);                                   //IDZ DO WYZNACZONEJ POZYCJI
        for(m=0;m<30;m++){                              //WYRYSOWYWANIE ZAWARTOSCI TABLICY
            Sleep(50);                                  //OPOZNIENIE MIEDZY ELEMENTAMI TABLICY
            printf("%c",a[m]);                          //wypisanie wczesniej zadeklarowanych tablic
        }
        gotoxy(41,10);
        for(m=0;m<30;m++){
            Sleep(50);
            printf("%c",b[m]);
        }
        gotoxy(41,11);
        for(m=0;m<30;m++){
            Sleep(50);
            printf("%c",c[m]);
        }
        gotoxy(41,12);
        for(m=0;m<30;m++){
            Sleep(50);
            printf("%c",d[m]);
        }
        gotoxy(41,13);
        for(m=0;m<30;m++){
            Sleep(50);
            printf("%c",e[m]);
        }
        gotoxy(41,14);
        for(m=0;m<30;m++){
            Sleep(50);
            printf("%c",f[m]);
        }
        for (i=0; i<=10; i++){
            printf("\n");
        }
}
void menu_glowne()
{
    system("cls");
    tabelka();
    wybor_zadania();
}
void zad1_proste_programy()
{
    tresc_zad1_pp();
    ornament();
    gotoxy(1,5);
    wizytowka();
    wypelnienie();
    ornament();
    stop_przycisk(zad1_proste_programy);
    proste_programy();
}
void zad2_proste_programy()
{
    tresc_zad2_pp();
    gotoxy(1,5);ornament();
    int a, b, c;
    printf("\n\n");
    printf("\t Podaj a:");
    scanf ("%d", &a);
    printf("\t Podaj b:");
    scanf ("%d", &b);
    printf("\t Podaj c:");
    scanf ("%d", &c);
    printf("\n");
    if (a+b>0)
    {
        printf ("\t Wynik to c = %d", c);
    }
    else if (a+b<0)
    {
        printf ("\t Wynik to c = %d", c = -1*c);
    }
    else
    {
        printf ("\t Wynik to c = %d", c = 0);
    }
    ornament();
    stop_przycisk(zad2_proste_programy);
    proste_programy();
}
void zad1_petle()
{
    tresc_zad1_petle();
    int h;
    gotoxy(1,5);ornament();                                                                                                                                                                                                                                         //
    printf("\n\tWprowadz wysokosc h: ");
    scanf("%d", &h);
    for (int i=1; i<=h; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("\t%d ", i*j);
        }
        printf("\n");
    }
    ornament();
    stop_przycisk(zad1_petle);
    petle();
}
void zad2_petle()
{
    tresc_zad2_petle();
    int n, m=2, k=0;
    gotoxy(1,5);ornament();
    printf("\n\tWprowadz ilosc liczb przystych n: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++)
    {
        printf("\n\tKrok=%d    Aktualna liczba przysta=%d   Suma=%d", i, m, k+=m);
        m+=2;
    }
    printf("\n\n\tSuma %d pierwszych liczb parzystych wynosi: %d", n, k);
    ornament();
    stop_przycisk(zad2_petle);
    petle();
}
void zad3_petle()
{
    tresc_zad3_petle();gotoxy(1,5);ornament();
    int a, b = 0, lz = 0, min, max;
    printf("\tWprowadz pierwszy element ciagu A: ");
    scanf("%d", &a);
    if (a==0)
    {
        lz++;
    }
    min=a;
    max=a;
    while (b==0)
    {
        printf("\n\tWprowadz kolejny element ciagu A: ");
        scanf("%d", &a);
        if (a==0)
        {
            lz++;
        }
        if (a>max)
        {
            max=a;
        }
        if (a<min)
        {
            min=a;
        }
        if (a!=0)
        {
            lz=0;
        }
        if (a==0 && lz==2)
        {
            break;
        }
    }
    printf("\n\tMaksymalny element ciagu A = %d", max);
    printf("\n\tMinimalny element ciagu A = %d", min);
    ornament();stop_przycisk(zad3_petle);petle();
}
void zad4_petle()
{
    tresc_zad4_petle();gotoxy(1,5);ornament();
    int wiersz, kolumna, macierzA[100][100];
    printf("\n\tWprowadz liczbe wierszy m, macierzy A: ");
    scanf("%d", &wiersz);
    printf("\tWprowadz liczbe kolumn n, macierzy A: ");
    scanf("%d", &kolumna);
    printf("\n\tWprowadz elementy macierzy A:\n");
    for(int i = 0; i < wiersz; ++i)
    {
        for(int j = 0; j < kolumna; ++j)
        {
            printf("\tWprowadz element a%d%d: ", i + 1, j + 1);
            scanf("%d", &macierzA[i][j]);
        }
    }
    printf("\n\tMacierz wyjsciowa:\n");
    for(int i = 0; i < wiersz; ++i)
    {
        for(int j = 0; j < kolumna; ++j)
        {
            printf("\t%d  ", macierzA[i][j]);
                if(j == kolumna - 1)
                    printf("\n\n");
        }
    }
    int max_kolumna[100];
    for(int j = 0; j < kolumna; ++j)
    {
        max_kolumna[j]=macierzA[0][j];
        for(int i = 0; i < wiersz; ++i)
        {
            if (macierzA[i][j]>max_kolumna[j]){
                max_kolumna[j]=macierzA[i][j];
            }
        }
    }
    for(int j = 0; j < kolumna; ++j)
    {
        printf("\n\tMaksymalny element kolumny %d to: %d ", j + 1, max_kolumna[j]);
    }
    ornament();stop_przycisk(zad4_petle);petle();
}
void zad5_petle()
{
    tresc_zad5_petle();gotoxy(1,5);ornament();
    int m, n, p, macierzA[100][100],macierzB[100][100],macierzC[100][100];
    printf("\n\tWprowadz liczbe wierszy m, macierzy A i B: ");
    scanf("%d", &m);
    printf("\tWprowadz liczbe kolumn n, macierzy A: ");
    scanf("%d", &n);
    printf("\n\tWprowadz elementy macierzy A:\n");
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            printf("\tWprowadz element a%d%d: ", i + 1, j + 1);
            scanf("%d", &macierzA[i][j]);
        }
    }
    printf("\n\tWprowadz liczbe kolumn p, macierzy B: ");
    scanf("%d", &p);
    printf("\n\tWprowadz elementy macierzy B:\n");
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < p; ++j)
        {
            printf("\tWprowadz element b%d%d: ", i + 1, j + 1);
            scanf("%d", &macierzB[i][j]);
        }
    }
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j <n+p; ++j)
        {
            macierzC[i][j]=0;
        }
    }
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            macierzC[i][j]=macierzA[i][j];
        }
    }
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < p; ++j)
        {
            macierzC[i][j+n]=macierzB[i][j];
        }
    }
    printf("\n\tMacierz wyjsciowa C:\n");
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < (n+p); ++j)
        {
            printf("\t%d  ", macierzC[i][j]);
            if(j == (n+p) - 1)
            {
                printf("\n\n");
            }
        }
    }
    int lz, wierszZerowy=0;
    for(int i = 0; i < m; ++i)
        {
        lz=0;
        for(int j = 0; j < n+p; ++j)
        {
            if(macierzC[i][j]!=0)
            {
                break;
            }
            if(macierzC[i][j]==0)
            {
                lz++;
            }
            if(lz==(n+p)){
                wierszZerowy=i+1;
                printf("\n\tNumer wiersza, w ktorym elementy sa rowne zero to: %d ", wierszZerowy);
            }
        }
    }
    ornament();stop_przycisk(zad5_petle);petle();
}
void zad1_funkcje()
{
    tresc_zad1_funkcje();
    gotoxy(1,5);
    ornament();
    printf("\n\tWprowadz swoj numer indeksu: ");
    sumaCyfrNumeruIndeksu();
    ornament();
    stop_przycisk(zad1_funkcje);
    funkcje();
}
void zad2_funkcje()
{
    tresc_zad2_funkcje();gotoxy(1,5);ornament();
    int m, n, A[100][100];
    printf("\n\tWprowadz liczbe wierszy m, macierzy: ");
    scanf("%d", &m);
    printf("\tWprowadz liczbe kolumn n, macierzy: ");
    scanf("%d", &n);
    wczytaj_macierz(m, n, A);
    wypisz_macierz(m, n, A);
    ornament();stop_przycisk(zad2_funkcje);funkcje();
}
void zad1_wskazniki()
{
    tresc_zad1_wskazniki();gotoxy(1,5);ornament();
    int m, n, A[100][100];
    printf("\n\tWprowadz liczbe wierszy m, macierzy: ");
    scanf("%d", &m);
    printf("\tWprowadz liczbe kolumn n, macierzy: ");
    scanf("%d", &n);
    wprowadzMacierz(m, n, A);
    wypiszMacierz(m, n, A);
    ornament();stop_przycisk(zad1_wskazniki);wskazniki();
}
void zad2_wskazniki()
{
    tresc_zad2_wskazniki();gotoxy(1,5);ornament();
    int x;
    printf("\n\tWprowadz wielkosc wektora: ");
    scanf("%d", &x);
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
    printf("\n\tPosortowany wektor: \n\n\t");
    for(int i=0;i<x;i++)
    {
            printf("%.3f ",*(wskaznik+i));
    }

    ornament();stop_przycisk(zad2_wskazniki);wskazniki();
}
void zad1_struktury()
{
    tresc_zad1_struktury();
    gotoxy(1,5);
    ornament();
    ornament();
    stop_przycisk(zad1_struktury);
    struktury();
}