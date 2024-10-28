#include <stdio.h>

int main() {
    
    char NomeFile1[] = {"TestFiles/testo1.txt"};
    char *NomeFile2 = "TestFiles/testo2.txt";
    int car;
    
    FILE* pfile1 = fopen(NomeFile1, "r");
    if (pfile1==NULL) {perror("Errore nell'apertura del file"); return 1;}
    FILE* pfile2 = fopen(NomeFile2, "w");
    if (pfile2==NULL) {perror("Errore nell'apertura del file"); return 1;}


    while ( (car = getc(pfile1)) != EOF) {
        putc(car, pfile2);
    }
   
    fclose(pfile1);
    fclose(pfile2);

    return 0; 
}