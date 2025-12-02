#include <stdio.h>
#include <string.h>

typedef struct
{
    char cognome[20];
    char nome[20];
    int matricola;
} Studente;

int main()
{
    FILE *fp = fopen("/home/zela2000/Scrivania/UNIFE/Programmazione e Laboratorio/Esercizio: Nomi Ordinati/nomi.txt", "r");
    if (fp == NULL)
    {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }
    Studente studenti[100];
    int count = 0;
    // Per ogni riga del file, leggi cognome, nome e matricola che sono divisi da una virgola
    while (fscanf(fp, "%s %s %d", studenti[count].cognome, studenti[count].nome, &studenti[count].matricola) == 3)
    {
        count++;
    }
    fclose(fp);
    // Ordina gli studenti in ordine per numero di matricola (crescente)
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (studenti[i].matricola > studenti[j].matricola)
            {
                Studente temp = studenti[i];
                studenti[i] = studenti[j];
                studenti[j] = temp;
            }
        }
    }
    // Stampa gli studenti ordinati
    for (int i = 0; i < count; i++)
    {
        printf("%s %s %d\n", studenti[i].cognome, studenti[i].nome, studenti[i].matricola);
    }
    // Scrivo su file gli studenti ordinati
    fp = fopen("ordinati.txt", "w");
    if (fp == NULL)
    {
        printf("Errore nell'apertura del file in scrittura.\n");
        return 1;
    }
    for (int i = 0; i < count; i++)
    {
        fprintf(fp, "%s %s %d\n", studenti[i].cognome, studenti[i].nome, studenti[i].matricola);
    }
    fclose(fp);
    return 0;
}