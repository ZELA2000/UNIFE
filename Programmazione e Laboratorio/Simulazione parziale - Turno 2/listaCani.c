#include <stdio.h>
#include <stdlib.h>
#include "listaCani.h"

// Inizializza una nuova lista vuota
void nuova_lista(Lista *pl)
{
    *pl = NULL; // Imposta il puntatore a NULL (lista vuota)
}

// Inserisce un cane in testa alla lista
void insTesta(Lista *pl, Cane d)
{
    // Alloca memoria per un nuovo nodo
    Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
    if (aux == NULL)
    {
        printf("Errore allocazione memoria\n");
        exit(100);
    }
    // Inserisce i dati nel nuovo nodo
    aux->dato = d;
    // Il nuovo nodo punta alla vecchia testa
    aux->next = *pl;
    // Aggiorna la testa della lista
    *pl = aux;
}

// Inserisce un cane in coda alla lista
void insInCoda(Lista *pl, Cane d)
{
    // Scorre fino alla fine della lista
    while (*pl != NULL)
        pl = &(*pl)->next;

    // Inserisce in testa alla posizione trovata (che è la fine)
    insTesta(pl, d);
}

// Cerca un cane nella lista dato il numero di chip
// Ritorna l'indice del cane se trovato, -1 altrimenti
int ricerca(Lista *pl, int numero)
{
    Lista l = *pl;
    int index = 0;
    // Scorre la lista
    while (l != NULL)
    {
        // Se trova il chip cercato, ritorna l'indice
        if (l->dato.nChip == numero)
        {
            return index;
        }
        l = l->next;
        index++;
    }
    // Non trovato
    return -1;
}

// Converte un valore enum Vaccino nella stringa corrispondente
const char *vaccino_to_string(Vaccino v)
{
    switch (v)
    {
    case cimurro:
        return "cimurro";
    case epatite:
        return "epatite";
    case parvovirosi:
        return "parvovirosi";
    case null:
        return " "; // Spazio per nessun vaccino
    default:
        return "sconosciuto";
    }
}

// Stampa tutti i cani della lista con i loro vaccini
void stampa(Lista l)
{
    // Scorre tutti i nodi della lista
    while (l != NULL)
    {
        // Stampa numero chip e i 3 vaccini (convertiti in stringhe)
        printf("%d: %s %s %s\n", l->dato.nChip,
               vaccino_to_string(l->dato.vaccini[0]),
               vaccino_to_string(l->dato.vaccini[1]),
               vaccino_to_string(l->dato.vaccini[2]));
        l = l->next;
    }
}