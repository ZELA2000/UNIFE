// Enumerazione per i tipi di vaccini
// Ogni vaccino è rappresentato da un carattere
typedef enum
{
    cimurro = 'C',     // Vaccino contro il cimurro
    epatite = 'E',     // Vaccino contro l'epatite
    parvovirosi = 'P', // Vaccino contro la parvovirosi
    null = 'N'         // Nessun vaccino (valore di default)
} Vaccino;

// Struttura che rappresenta un cane
typedef struct
{
    int nChip;          // Numero identificativo del chip del cane
    Vaccino vaccini[3]; // Array di 3 vaccini effettuati
} Cane;

// Nodo della lista concatenata
typedef struct nodo
{
    Cane dato;         // Dati del cane contenuti nel nodo
    struct nodo *next; // Puntatore al nodo successivo
} Nodo;

// Lista come puntatore a Nodo
typedef Nodo *Lista;

// Funzioni per gestire la lista
void nuova_lista(Lista *pl);          // Inizializza una lista vuota
void insTesta(Lista *pl, Cane d);     // Inserisce un cane in testa alla lista
void insInCoda(Lista *pl, Cane cane); // Inserisce un cane in coda alla lista
int ricerca(Lista *pl, int numero);   // Cerca un cane per numero chip (ritorna indice o -1)
void stampa(Lista l);                 // Stampa tutti i cani della lista

// PARTE 2 - Struttura per ordinare i cani
typedef struct
{
    int chip;      // Numero chip del cane
    int n_vaccini; // Numero di vaccini effettuati
} CaneInfo;