#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
/* deklaracje funkcji, ktore sa wykorzystywane */
void proste_programy();
void petle();
void funkcje();
void wskazniki();
void struktury();
void zad1_proste_programy();
void zad2_proste_programy();
void zad1_petle();
void zad2_petle();
void zad3_petle();
void zad4_petle();
void zad5_petle();
void zad1_funkcje();
void zad2_funkcje();
void zad1_wskazniki();
void zad2_wskazniki();
void zad1_struktury();
void gotoxy (int x, int y);
void szybka_tabelka();
/* Funkcja wypelniajaca tabelke, dziala 
    na tej samej zadadzie co */
void wybor_zadania(){			     
    int m;				        //
    char a[39] = "       Przejdz do listy zadan:";      //wypelnienie wizytowki
    char b[39] = " * 1. Lista nr 1 - Proste programy";
    char c[39] = " * 2. Lista nr 2 - Petle ";
    char d[39] = " * 3. Lista nr 3 - Funkcje";
    char e[39] = " * 4. Lista nr 4 - Wskazniki";
    char f[39] = " * 5. Lista nr 5 - Struktury";
    char g[39] = " * 6. Wyjdz";
    gotoxy(42,6);
    for(m=0;m<39;m++)
    {
        printf("%c",a[m]);
    }
    gotoxy(42,8);
    for(m=0;m<39;m++){
        printf("%c",b[m]);
    }
    gotoxy(42,10);
    for(m=0;m<39;m++){
        printf("%c",c[m]);
    }
    gotoxy(42,12);
    for(m=0;m<39;m++){
        printf("%c",d[m]);
    }
    gotoxy(42,14);
    for(m=0;m<39;m++){
        printf("%c",e[m]);
    }
    gotoxy(42,16);
    for(m=0;m<39;m++){
        printf("%c",f[m]);
    }
    gotoxy(42,18);
    for(m=0;m<39;m++){
        printf("%c",g[m]);
    }
    char n;
    gotoxy(44,22);				//Tutaj pojawia sie znaczaca roznica
    printf("Dokonaj wyboru: ");			//program prosi o dokonanie wybory, sciezki,
    n=getchar();				//do ktorej chcemy sie udac
    switch(n){				//getch() zatrzymuje porgram i czeka
        case '1':				//na wprowadzenie dowolnego znaku
            proste_programy();			//jest on przypisywany do zmiennej char n
        case '2':				//Funkcja switch sprawdza jakiego wyboru
            system("cls");	                        //dokonal uzytkownik, nastepnie czysci ekran
            petle();				//i wywoluje dana funkcje
        case '3':
            system("cls");
            funkcje();
        case '4':
            system("cls");
            wskazniki();
        case '5':
            system("cls");
            struktury();
        case '6':
            exit(0);
    default:				//jesli uzytkownik wprowadzi znak spoza zakresu
        printf("\n\a\t\t\t Bledny wybor!!");		//wyswietli sie komunikat o bledym wyborze
        Sleep(2000);				//przez 2 s, po czym funkcja sie odswiezy
        system("cls");
        szybka_tabelka();
        wybor_zadania();
    }
}
void proste_programy(){		                    //Ten rodzaj funkcji pojawia sie czesto
    system("cls");				//wypelnia on tabelke mozliwymi sciezkami,
    szybka_tabelka();				//do ktorych mozemy sie udac, ?zastanawiam
    int m;					//sie czy nie mozna go zapisac w postaci
    char a[39] = "       Przejdz do zadania:";		//jakiejs struktury, czy czegos co zaoszedzi
    char b[39] = " * 1. Zadanie 1";			//mi wypisywania tego za kazdym razem?
    char c[39] = " * 2. Zadanie 2 ";
    char g[39] = " * 3. Wroc do wyboru listy";
    gotoxy(42,6);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",a[m]);
    }
    gotoxy(42,8);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",b[m]);
    }
    gotoxy(42,10);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",c[m]);
    }
    gotoxy(42,18);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",g[m]);
    }
    char n;
    gotoxy(44,22);
    printf("Dokonaj wyboru: ");
    n=getchar();
    switch(n){
            case '1':
                system("cls");
                zad1_proste_programy();
            case '2':
                system("cls");
                zad2_proste_programy();
            case '3':
                system("cls");
                szybka_tabelka();
                wybor_zadania();
            default:
                printf("\n\a\t\t\t Bledny wybor!!");
                Sleep(2000);
                system("cls");
                proste_programy();
    }
}
void petle(){
    system("cls");
    szybka_tabelka();
    int m;
    char a[39] = "   Przejdz do zadania:";
    char b[39] = " * 1. Zadanie 1";
    char c[39] = " * 2. Zadanie 2";
    char d[39] = " * 3. Zadanie 3";
    char e[39] = " * 4. Zadanie 4";
    char f[39] = " * 5. Zadanie 5";
    char g[39] = " * 6. Wroc do wyboru listy";
    gotoxy(42,6);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",a[m]);
    }
    gotoxy(42,8);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",b[m]);
    }
    gotoxy(42,10);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",c[m]);
    }
    gotoxy(42,12);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",d[m]);
    }
    gotoxy(42,14);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",e[m]);
    }
    gotoxy(42,16);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",f[m]);
    }
    gotoxy(42,18);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",g[m]);
    }
    char n;
    gotoxy(44,22);
    printf("Dokonaj wyboru: ");
    n=getchar();
    switch(n){
            case '1':
                system("cls");
                zad1_petle();
            case '2':
                system("cls");
                zad2_petle();
            case '3':
                system("cls");
                zad3_petle();
            case '4':
                system("cls");
                zad4_petle();
            case '5':
                system("cls");
                zad5_petle();
            case '6':
                system("cls");
                szybka_tabelka();
                wybor_zadania();
            default:
                printf("\n\a\t\t\t Bledny wybor!!");
                Sleep(2000);
                system("cls");
                petle();
    }
}
void funkcje(){
    system("cls");
    szybka_tabelka();
    int m;
    char a[39] = "   Przejdz do zadania:";
    char b[39] = " * 1. Zadanie 1";
    char c[39] = " * 2. Zadanie 2";
    char g[39] = " * 3. Wroc do wyboru listy";
    gotoxy(42,6);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",a[m]);
    }
    gotoxy(42,8);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",b[m]);
    }
    gotoxy(42,10);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",c[m]);
    }
    gotoxy(42,18);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",g[m]);
    }
    char n;
    gotoxy(44,22);
    printf("Dokonaj wyboru: ");
    n=getchar();
    switch(n){
            case '1':
                system("cls");
                zad1_funkcje();
            case '2':
                system("cls");
                zad2_funkcje();
            case '3':
                system("cls");
                szybka_tabelka();
                wybor_zadania();
            default:
                printf("\n\a\t\t\t Bledny wybor!!");
                Sleep(2000);
                system("cls");
                funkcje();
    }
}
void wskazniki(){
    system("cls");
    szybka_tabelka();
    int m;
    char a[39] = "   Przejdz do zadania:";
    char b[39] = " * 1. Zadanie 1";
    char c[39] = " * 2. Zadanie 2";
    char g[39] = " * 3. Wroc do wyboru listy";
    gotoxy(42,6);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",a[m]);
    }
    gotoxy(42,8);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",b[m]);
    }
    gotoxy(42,10);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",c[m]);
    }
    gotoxy(42,18);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",g[m]);
    }
    char n;
    gotoxy(44,22);
    printf("Dokonaj wyboru: ");
    n=getchar();
    switch(n){
            case '1':
                system("cls");
                zad1_wskazniki();
            case '2':
                system("cls");
                zad2_wskazniki();
            case '3':
                system("cls");
                szybka_tabelka();
                wybor_zadania();
            default:
                printf("\n\a\t\t\t Bledny wybor!!");
                Sleep(2000);
                wskazniki();
    }
}
void struktury(){
    system("cls");
    szybka_tabelka();
    int m;
    char a[39] = "   Przejdz do zadania:";
    char b[39] = " * 1. Zadanie 1";
    char c[39] = " * 2. Wroc do wyboru listy";
    gotoxy(42,6);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",a[m]);
    }
    gotoxy(42,8);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",b[m]);
    }
    gotoxy(42,18);
    for(m=0;m<39;m++){
        Sleep(0);
        printf("%c",c[m]);
    }
    char n;
    gotoxy(44,22);
    printf("Dokonaj wyboru: ");
    n=getchar();
    switch(n){
            case '1':
                system("cls");
                zad1_struktury();
            case '2':
                system("cls");
                szybka_tabelka();
                wybor_zadania();
            default:
                printf("\n\a\t\t\t Bledny wybor!!");
                Sleep(2000);
                struktury();
    }
}
#endif // MENUS_H_INCLUDED