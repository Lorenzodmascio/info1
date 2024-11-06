#include <stdio.h>

int main()
{
    char *filepari = "Testc.txt/pari.txt";
    char *filedispari = "Testc,./dispari.txt";
    char *filenumeri = "TestFiles/numeri.txt";
    int c;

    FILE *pfile1 = fopen(filepari, "w");
    if (pfile1==NULL) {perror("Errore nell'apertura del file"); return 1;}
    FILE *pfile2 = fopen(filedispari, "w");
    if (pfile2==NULL) {perror("Errore nell'apertura del file"); return 1;}
    FILE *pfile3 = fopen(filenumeri, "r");
    if (pfile3 == NULL) {perror("Errore nell'apertura del file"); return 1;}

    while(c = (getc(pfile3)) != EOF) 
    {
        if(c >= '0' && c <= '9') 
        {
            int num = c - '0';
            if(c % 2 == 0) {putc(c, pfile1);}
            else {putc(c, pfile2);}
        }
    }

    fclose(pfile1);
    fclose(pfile2);
    fclose(pfile3);

    return 0;
}