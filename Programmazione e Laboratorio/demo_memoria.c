#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[31];
    float calorie;
} Cibo;

typedef struct nodo
{
    Cibo dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void pausa()
{
    printf("\n>>> Premi INVIO per continuare...\n");
    getchar();
}

void stampa_stato(Lista lista, char *messaggio)
{
    printf("\n========================================\n");
    printf("%s\n", messaggio);
    printf("========================================\n");

    // Mostra il puntatore lista
    printf("\n📍 STACK - Variabile 'lista':\n");
    printf("   Indirizzo di lista: %p\n", (void *)&lista);
    printf("   Valore di lista (punta a): %p\n", (void *)lista);
    printf("   Dimensione: %lu byte\n", sizeof(lista));

    if (lista == NULL)
    {
        printf("   ❌ Lista è NULL (vuota)\n");
        return;
    }

    // Scorre e mostra ogni nodo
    printf("\n🗂️  HEAP - Nodi della lista:\n");
    int i = 0;
    Lista temp = lista;
    while (temp != NULL)
    {
        printf("\n   --- NODO %d (BOX_%d) ---\n", i, i);
        printf("   Indirizzo del nodo: %p\n", (void *)temp);
        printf("   Dimensione nodo: %lu byte\n", sizeof(Nodo));
        printf("   \n");
        printf("   📦 Contenuto:\n");
        printf("      nome:     \"%s\"\n", temp->dato.nome);
        printf("      calorie:  %.1f\n", temp->dato.calorie);
        printf("      next:     %p", (void *)temp->next);
        if (temp->next == NULL)
            printf(" ❌ (NULL - ultimo nodo)\n");
        else
            printf(" → (punta al prossimo nodo)\n");

        temp = temp->next;
        i++;
    }
}

void nuovaLista(Lista *pl)
{
    *pl = NULL;
}

void insTesta(Lista *pl, Cibo d)
{
    printf("\n⚙️  MALLOC: Sto allocando %lu byte nell'heap...\n", sizeof(Nodo));
    Nodo *aux = malloc(sizeof(Nodo));
    printf("   ✅ Allocato nodo all'indirizzo: %p\n", (void *)aux);

    printf("   Copio i dati nel nodo...\n");
    aux->dato = d;

    printf("   Collego il nodo: nuovo->next punta a: %p\n", (void *)*pl);
    aux->next = *pl;

    printf("   Aggiorno lista per puntare al nuovo nodo\n");
    *pl = aux;
}

void insCoda(Lista *pl, Cibo r)
{
    printf("\n🔍 Cerco la fine della lista...\n");
    int posizione = 0;
    while (*pl != NULL)
    {
        printf("   Posizione %d: nodo trovato a %p, vado al prossimo...\n", posizione, (void *)*pl);
        pl = &(*pl)->next;
        posizione++;
    }
    printf("   ✓ Trovata la fine (NULL) alla posizione %d\n", posizione);
    insTesta(pl, r);
}

int main()
{
    Lista lista;

    printf("╔═══════════════════════════════════════════════════╗\n");
    printf("║  DEMO: LISTA COLLEGATA E GESTIONE MEMORIA        ║\n");
    printf("╚═══════════════════════════════════════════════════╝\n");

    // PASSO 1: Lista vuota
    printf("\n🔷 PASSO 1: Inizializzo lista vuota\n");
    nuovaLista(&lista);
    stampa_stato(lista, "STATO: Lista vuota");
    pausa();

    // PASSO 2: Primo inserimento
    printf("\n🔷 PASSO 2: Inserisco \"Pasta\" (350.0 calorie)\n");
    Cibo c1;
    strcpy(c1.nome, "Pasta");
    c1.calorie = 350.0;

    printf("\n📋 Variabile temporanea nello stack:\n");
    printf("   c1.nome = \"%s\"\n", c1.nome);
    printf("   c1.calorie = %.1f\n", c1.calorie);
    printf("   Dimensione di c1: %lu byte\n", sizeof(c1));

    insCoda(&lista, c1);
    stampa_stato(lista, "STATO: Dopo inserimento Pasta");
    pausa();

    // PASSO 3: Secondo inserimento
    printf("\n🔷 PASSO 3: Inserisco \"Riso\" (130.0 calorie)\n");
    Cibo c2;
    strcpy(c2.nome, "Riso");
    c2.calorie = 130.0;

    printf("\n📋 Variabile temporanea nello stack:\n");
    printf("   c2.nome = \"%s\"\n", c2.nome);
    printf("   c2.calorie = %.1f\n", c2.calorie);

    insCoda(&lista, c2);
    stampa_stato(lista, "STATO: Dopo inserimento Riso");
    pausa();

    // PASSO 4: Terzo inserimento
    printf("\n🔷 PASSO 4: Inserisco \"Pollo\" (165.0 calorie)\n");
    Cibo c3;
    strcpy(c3.nome, "Pollo");
    c3.calorie = 165.0;

    insCoda(&lista, c3);
    stampa_stato(lista, "STATO: Dopo inserimento Pollo");
    pausa();

    // PASSO 5: Scorrimento
    printf("\n🔷 PASSO 5: Scorro la lista e stampo tutti i cibi\n");
    printf("\nwhile (lista != NULL) {\n");
    printf("    printf(\"%%s\\n\", lista->dato.nome);\n");
    printf("    lista = lista->next;\n");
    printf("}\n\n");

    Lista temp = lista;
    int i = 0;
    while (temp != NULL)
    {
        printf("Iterazione %d:\n", i);
        printf("  temp punta a: %p\n", (void *)temp);
        printf("  Stampo: \"%s\" (%.1f cal)\n", temp->dato.nome, temp->dato.calorie);
        printf("  temp = temp->next (prossimo: %p)\n", (void *)temp->next);
        temp = temp->next;
        i++;
        printf("\n");
    }
    printf("temp == NULL → Fine!\n");
    pausa();

    // RIEPILOGO FINALE
    printf("\n╔═══════════════════════════════════════════════════╗\n");
    printf("║  RIEPILOGO FINALE                                 ║\n");
    printf("╚═══════════════════════════════════════════════════╝\n");

    printf("\n✅ Abbiamo creato una lista di %d nodi\n", i);
    printf("✅ Ogni nodo occupa %lu byte nell'heap\n", sizeof(Nodo));
    printf("✅ Il puntatore 'lista' occupa %lu byte nello stack\n", sizeof(lista));
    printf("✅ Memoria totale heap: %lu byte\n", i * sizeof(Nodo));

    printf("\n💡 NOTA: Gli indirizzi che vedi (es. 0x5555...) sono gli\n");
    printf("   indirizzi REALI nella RAM del tuo computer!\n");

    return 0;
}
