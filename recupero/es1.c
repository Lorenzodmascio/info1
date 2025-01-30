#include <stdio.h>
#include <string.h>
#define N 10

typedef struct data
{
    int giorno;
    char mese[20];
    int anno;
}data;

typedef struct persona
{
    char cognome[20];
    data nascita;
    int voti[N];
}persona;

int main()
{
    persona pippo, topolino;
    float media;
    int cont, eta;

    printf("inserisci il cognome");
    scanf("%s",pippo.cognome);

    printf("inserisci la data di nascita"); 
    scanf("%d",&pippo.nascita.giorno);
    scanf("%s",pippo.nascita.mese);
    scanf("%d",&pippo.nascita.anno);

    printf("inserisci i voti");
    for(int i=0;i<N;i++)
    {
        scanf("%d", &pippo.voti[i]);
        cont += pippo.voti[i];
        media= cont/N;
    }

    printf("cognome: %s\n", pippo.cognome);
    printf("%f\n", media);
    printf("nascita\n: %d %s %d", pippo.nascita.giorno,pippo.nascita.mese,pippo.nascita.anno);

    eta= 2025- pippo.nascita.anno;  
    printf("eta nel 2025: %d\n",eta);

    topolino.cognome= "rossi";
    topolino.nascita.giorno = pippo.nascita.giorno;
    strcpy= topolino.nascita.mese = pippo.nascita.mese;
    topolino.nascita.anno = pippo.nascita.anno;

     printf("nascita\n: %d %s %d", topolino.nascita.giorno,topolino.nascita.mese,topolino.nascita.anno);
}