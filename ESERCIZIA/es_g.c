#include <stdio.h>

int main()
{
    char *nomefile1 = "TestFiles/file_src";
    char *nomefile2 = "TestFiles/file_dst";
    int c;

    FILE *pfile1 = fopen(nomefile1, "r");
    if(pfile1 == NULL) {perror("Errore nell'apertura del file"); return 1;}
    FILE *pfile2 = fopen(nomefile2, "w");
    if(pfile1 == NULL) {perror("Errore nell'apertura del file"); return 1;}

    while((c = getc(pfile1)) != EOF) {putc(c,pfile2);}

    fclose(pfile1);
    fclose(pfile2);

    return 0;
}