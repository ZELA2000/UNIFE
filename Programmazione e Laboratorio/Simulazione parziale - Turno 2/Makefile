# Regola per compilare il file oggetto listaCani.o
# Dipendenze: listaCani.c (sorgente) e listaCani.h (header)
# Il flag -g include informazioni di debug, -c compila senza linkare
listaCani.o : listaCani.c listaCani.h
	gcc -g -c listaCani.c

# Regola per compilare il file oggetto main.o
# Dipendenze: main.c (sorgente), listaCani.h (header)
main.o : main.c listaCani.h
	gcc -g -c main.c

# Regola per creare l'eseguibile finale "vaccinazioni"
# Dipendenze: i due file oggetto main.o e listaCani.o
# Il flag -o specifica il nome dell'eseguibile di output
vaccinazioni : main.o listaCani.o
	gcc -g -o vaccinazioni main.o listaCani.o