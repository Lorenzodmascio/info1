int main()
{
    char NomeFile1[] = {"TestFiles/nomi.txt"};
    char NomeFile2[] = {"TestFiles/NOMI2.TXT"};
    int c;

    FILE* pfile1 = fopen(NomeFile1, "r");
    FILE* pfile2 = fopen(NomeFile2, "w");
    if (pfile1==NULL) {
        perror("Errore nell'apertura del file");
         return 1;
         }

   
    while((c = getc(pfile1)) != EOF)
    {
        if(c >= 'a' && c <= 'z'){
            c = c - ('a' - 'A');
        }
        putc(c, pfile2);
    }
    
    fclose(pfile1);
    fclose(pfile2);
    
    return 0;
}