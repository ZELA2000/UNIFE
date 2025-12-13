#include <stdio.h>
#include <stdlib.h>
#include "listaCani.h"

int main(int argc, char *argv[])
{
    // Controlla che sia stato passato un argomento (nome del file)
    if (argc == 2)
    {
        printf("E' stato passato un nome di un file come argomento.\n");
        printf("Procedo con l'apertura del file %s\n", argv[1]);

        // Apre il file in lettura binaria
        FILE *fp;
        fp = fopen(argv[1], "r");
        if (fp == NULL)
        {
            printf("Errore nell'apertura del file.\n");
            return 1;
        }

        // Inizializza la lista dei cani
        Lista listaCani;
        Lista l; // Puntatore ausiliario per scorrere la lista
        nuova_lista(&listaCani);

        // Variabili per leggere i dati dal file
        int nChip;        // Numero chip del cane
        int vaccino_temp; // Vaccino letto dal file (4 byte)
        char vaccino;     // Vaccino convertito a char
        Cane cane;        // Struttura cane temporanea
        // Legge coppie (nChip, vaccino) dal file binario
        // Il file è formato da: 4 byte (int) + 4 byte (int che rappresenta un char)
        while (fread(&nChip, sizeof(int), 1, fp) == 1 && fread(&vaccino_temp, sizeof(int), 1, fp) == 1)
        {
            // Converte l'int letto in char (es: da 67 a 'C')
            vaccino = (char)vaccino_temp;
            cane.vaccini[0] = vaccino;

            // Cerca se il cane esiste già nella lista
            if (ricerca(&listaCani, nChip) == -1)
            {
                // CANE NUOVO: crea un nuovo cane con questo vaccino
                cane.nChip = nChip;
                cane.vaccini[1] = 'N'; // Secondo vaccino non ancora fatto
                cane.vaccini[2] = 'N'; // Terzo vaccino non ancora fatto
                insInCoda(&listaCani, cane);
            }
            else
            {
                // CANE ESISTENTE: aggiunge il vaccino al cane trovato
                l = listaCani;
                while (l != NULL)
                {
                    if (l->dato.nChip == nChip)
                    {
                        // Cerca il primo slot libero (con 'N') e inserisce il vaccino
                        if (l->dato.vaccini[1] == 'N')
                        {
                            l->dato.vaccini[1] = vaccino;
                        }
                        else if (l->dato.vaccini[2] == 'N')
                        {
                            l->dato.vaccini[2] = vaccino;
                        }
                        break; // Esci dal ciclo, cane trovato
                    }
                    l = l->next;
                }
            }
        }
        // Stampa la lista dei cani a video
        printf("Lista dei cani e i loro vaccini:\n");
        stampa(listaCani);
        fclose(fp);

        // ========== INIZIO PARTE 2 ==========
        // Crea un file di testo con i chip dei cani ordinati per:
        // 1. Numero di vaccini (decrescente)
        // 2. Numero di chip (crescente)

        // Apre il file di output in scrittura
        FILE *fp_out;
        fp_out = fopen("vaccinati.txt", "w");
        if (fp_out == NULL)
        {
            printf("Errore nell'apertura del file in scrittura.\n");
            return 1;
        }

        // Conta quanti cani ci sono nella lista
        int n_cani = 0;
        l = listaCani;
        while (l != NULL)
        {
            n_cani++;
            l = l->next;
        }

        // Crea un array di strutture CaneInfo per poter ordinare i cani
        CaneInfo *arr = (CaneInfo *)malloc(n_cani * sizeof(CaneInfo));
        if (arr == NULL)
        {
            printf("Errore allocazione memoria\n");
            exit(100);
        }

        // Riempi l'array con i dati dei cani dalla lista
        l = listaCani;
        int idx = 0;
        while (l != NULL)
        {
            arr[idx].chip = l->dato.nChip;
            arr[idx].n_vaccini = 0;

            // Conta quanti vaccini ha fatto il cane (esclude 'N')
            if (l->dato.vaccini[0] != null)
                arr[idx].n_vaccini++;
            if (l->dato.vaccini[1] != null)
                arr[idx].n_vaccini++;
            if (l->dato.vaccini[2] != null)
                arr[idx].n_vaccini++;

            idx++;
            l = l->next;
        }

        // Ordina l'array con bubble sort:
        // 1. Prima per numero di vaccini (DECRESCENTE: più vaccini prima)
        // 2. A parità di vaccini, per chip (CRESCENTE: chip minore prima)
        for (int i = 0; i < n_cani - 1; i++)
        {
            for (int j = i + 1; j < n_cani; j++)
            {
                // Scambia se: meno vaccini OPPURE (stessi vaccini E chip maggiore)
                if (arr[i].n_vaccini < arr[j].n_vaccini ||
                    (arr[i].n_vaccini == arr[j].n_vaccini && arr[i].chip > arr[j].chip))
                {
                    CaneInfo temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        // Scrivi i chip ordinati nel file (uno per riga)
        for (int i = 0; i < n_cani; i++)
        {
            fprintf(fp_out, "%d\n", arr[i].chip);
        }

        // Libera la memoria allocata e chiude il file
        free(arr);
        fclose(fp_out);

        // ========== FINE PARTE 2 ==========

        // Libera la memoria della lista (in realtà serve una funzione apposita)
        free(listaCani);
        return 0;
    }
    else
    {
        printf("Nessun argomento passato.\n");
    }
}