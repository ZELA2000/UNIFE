### I. Logica e Teoria degli Insiemi
*   **Quantificatori**: $\forall$ (per ogni), $\exists$ (esiste), $\exists!$ (esiste ed è unico).
    *   Sono simboli logici che indicano l'estensione di una proprietà: "per ogni" ($\forall$) indica che vale per tutto l'insieme; "esiste" ($\exists$) garantisce almeno un elemento; "esiste ed è unico" ($\exists!$) specifica che l'elemento è solo uno.
*   **Implicazione e Contronominale**: $(P \Rightarrow Q) \iff (\neg Q \Rightarrow \neg P)$.
    *   L'implicazione ($P \Rightarrow Q$) stabilisce che se vale $P$, allora deve valere $Q$. La contronominale ($\neg Q \Rightarrow \neg P$) è una forma logicamente equivalente usata spesso nelle dimostrazioni per assurdo.
*   **Uguaglianza tra insiemi**: $A = B \iff A \subseteq B \land B \subseteq A$.
    *   Due insiemi sono uguali se e solo se ogni elemento del primo appartiene al secondo e viceversa (doppia inclusione).
*   **Operazioni Insiemistiche:**
    *   **Unione**: $A \cup B = \{x \mid x \in A \text{ o } x \in B\}$.
        *   Raccoglie tutti gli elementi che appartengono ad almeno uno dei due insiemi.
    *   **Intersezione**: $A \cap B = \{x \mid x \in A \text{ e } x \in B\}$.
        *   Contiene solo gli elementi comuni a entrambi; se è vuota, gli insiemi sono detti disgiunti.
    *   **Differenza**: $A \setminus B = \{x \in A : x \notin B\}$.
        *   Esclude da $A$ tutti gli elementi che fanno parte anche di $B$.
    *   **Insieme Complementare**: $^C A = \{x \in B : x \notin A\}$ dato $A \subseteq B$.
*   **Prodotto Cartesiano**: $A \times B = \{(a, b) : a \in A, b \in B\}$.
    *   È l'insieme di tutte le possibili coppie ordinate $(a, b)$ dove il primo elemento viene da $A$ e il secondo da $B$.

### II. Proprietà dei Numeri Reali e Strutture
*   **Valore Assoluto (Modulo)**: $\lvert x\rvert = x$ se $x \ge 0$; $\lvert x\rvert = -x$ se $x < 0$.
    *   Rappresenta la distanza di un numero dallo zero; rende positivo qualsiasi valore negativo e lascia invariati i positivi.
*   **Disuguaglianza Triangolare**: $\lvert x+y\rvert \le \lvert x\rvert + \lvert y\rvert$.
    *   Stabilisce che il modulo della somma di due numeri è sempre minore o uguale alla somma dei loro moduli.
*   **Disuguaglianza di Bernoulli**: $(1+h)^n \ge 1 + nh$ per ogni $n \in \mathbb{N}$ e $h > -1$.
    *   Una stima fondamentale utilizzata per dimostrare limiti esponenziali, valida per esponenti naturali e basi maggiori di $-1$.
*   **Proprietà Archimedea**: $\forall x, y \in \mathbb{R}$ con $x, y > 0, \exists n \in \mathbb{N} : nx \ge y$.
    *   Afferma che, dati due numeri reali positivi, è sempre possibile moltiplicare il più piccolo per un numero naturale sufficientemente grande da superare il più grande.
*   **Numero di Nepero**: $e = \lim_{n \to +\infty} \left(1 + \frac{1}{n}\right)^n \approx 2{,}718...$.
    *   Definita come il limite della successione $(1 + 1/n)^n$, è la base naturale per i logaritmi e le funzioni esponenziali.

### III. Estremi e Topologia in $\mathbb{R}$
*   **Estremo Superiore ($\sup A$)**: Il minimo dei maggioranti, $\sup A = \min \{k \in \mathbb{R} : k \ge a, \forall a \in A\}$.
    *   È il più piccolo dei maggioranti di un insieme; se l'insieme ammette massimo, esso coincide con il $\sup$.
*   **Caratterizzazione del $\sup$**: $l = \sup A \iff \forall a \in A, a \le l$ e $\forall \varepsilon > 0, \exists a \in A : a > l - \varepsilon$.
*   **Estremo Inferiore ($\inf A$)**: Il massimo dei minoranti, $\inf A = \max \{k \in \mathbb{R} : k \le a, \forall a \in A\}$.
    *   È il più grande dei minoranti di un insieme; se l'insieme ammette minimo, esso coincide con l'$\inf$.
*   **Palla Aperta (Intorno)**: $B_r(x_0) = (x_0-r, x_0+r) = \{x \in \mathbb{R} : \lvert x-x_0 \rvert < r\}$.
    *   È l'insieme dei punti che distano da un centro $x_0$ meno di un raggio $r$; serve a definire il concetto di "vicinanza".
*   **Punto di Accumulazione**: $x_0$ è di accumulazione per $A$ se $\forall r > 0, (A \setminus \{x_0\}) \cap B_r(x_0) \neq \emptyset$.
    *   Un punto $x_0$ attorno al quale cadono infiniti elementi di un insieme $A$, indipendentemente da quanto piccolo sia l'intorno scelto.

### IV. Funzioni
*   **Grafico**: $gr(f) = \{(x, y) \in \mathbb{R} \times \mathbb{R} : x \in A, y = f(x)\}$.
    *   La rappresentazione visiva di una funzione nel piano cartesiano, formata da tutte le coppie $(x, f(x))$.
*   **Immagine**: $Im(f) = \{b \in B : \exists a \in A, f(a) = b\}$.
    *   L'insieme di tutti i valori "in uscita" effettivamente assunti dalla funzione nel codominio.
*   **Proprietà delle Funzioni:**
    *   **Iniettività**: $f(x) = f(y) \Rightarrow x = y$.
        *   Ogni valore dell'immagine è raggiunto da un unico valore del dominio (test della retta orizzontale).
    *   **Suriettività**: $\forall b \in B, \exists a \in A : f(a) = b$.
        *   L'immagine della funzione coincide con l'intero codominio.
    *   **Biettività**: Contemporaneamente iniettiva e suriettiva.
        *   Una funzione sia iniettiva che suriettiva, il che la rende invertibile.
*   **Inversa ($f^{-1}$)**: $g(y) = x \iff f(x) = y$.
*   **Continuità**: $f$ è continua in $x_0$ se $\lim_{x \to x_0} f(x) = f(x_0)$.
    *   Una funzione è continua se il suo grafico non presenta interruzioni; formalmente, se il limite per $x$ che tende a $x_0$ coincide con il valore della funzione nel punto.

### V. Successioni e Serie Numeriche
*   **Limite finito**: $\lim_{n \to +\infty} a_n = l \iff \forall \varepsilon > 0, \exists \overline{n} \in \mathbb{N} : \forall n > \overline{n}, \lvert a_n - l \rvert < \varepsilon$.
    *   Descrive il valore a cui i termini $a_n$ si avvicinano arbitrariamente quando $n$ diventa molto grande.
*   **Definitivamente**: Una proprietà vale definitivamente se esiste $\overline{n}$ tale che vale per ogni $n > \overline{n}$.
    *   Si usa quando una caratteristica non vale per i primi termini della successione, ma inizia a valere stabilmente da un certo indice in poi.
*   **Somma Parziale**: $S_k = \sum_{n=0}^{k} a_n$.
*   **Serie Geometrica**: $\sum_{n=0}^{+\infty} r^n = \frac{1}{1-r}$ se $\lvert r \rvert < 1$.
    *   Una somma infinita di potenze; converge a un valore finito solo se la ragione è, in valore assoluto, minore di 1.
*   **Serie Telescopica**: $\sum_{n=0}^{+\infty} (b_n - b_{n+1}) = b_0 - \lim_{k \to +\infty} b_{k+1}$.
    *   Una serie in cui la maggior parte dei termini si cancella a vicenda, permettendo di calcolare la somma totale basandosi solo sul primo e sull'ultimo termine (limite).

### VI. Calcolo Differenziale
*   **Rapporto Incrementale**: $g(x) = \frac{f(x) - f(x_0)}{x - x_0}$.
    *   Misura la pendenza della retta secante che passa per due punti del grafico; rappresenta la variazione media.
*   **Derivata**: $f'(x_0) = \lim_{x \to x_0} \frac{f(x) - f(x_0)}{x - x_0}$.
    *   È il limite del rapporto incrementale e rappresenta la variazione istantanea della funzione, ovvero la pendenza della retta tangente.
*   **Retta Tangente**: $y = f(x_0) + f'(x_0)(x - x_0)$.
    *   La retta che approssima linearmente la funzione nel punto $x_0$.
*   **Derivata di Funzione Composta**: $(g \circ f)'(x) = g'(f(x)) \cdot f'(x)$.
*   **Formula di Taylor**: $f(x) = \sum_{k=0}^{n} \frac{f^{(k)}(x_0)}{k!} (x - x_0)^k + o((x-x_0)^n)$.
    *   Un metodo per approssimare una funzione complessa tramite un polinomio, utilizzando le sue derivate in un punto specifico.

### VII. Calcolo Integrale
*   **Funzione Integrale**: $I_f(x) = \int_a^x f(t) dt$.
    *   Una funzione che accumula l'area sotto il grafico di $f$ partendo da un punto fisso $a$ fino a un punto variabile $x$.
*   **Teorema Fondamentale (TFCI)**: $I_f'(x) = f(x)$ se $f$ è continua.
    *   Stabilisce che l'integrazione è l'operazione inversa della derivazione, permettendo di trovare l'area tramite le primitive.
*   **Formula di Newton-Leibniz**: $\int_a^b f(x) dx = F(b) - F(a)$ dove $F' = f$.
*   **Integrazione per Parti**: $\int f'g = fg - \int fg'$.
    *   Tecnica derivata dalla regola di derivazione del prodotto, usata quando l'integrando è il prodotto di due funzioni.
*   **Integrazione per Sostituzione**: $\int f(h(t))h'(t) dt = \int f(x) dx$ con $x = h(t)$.
    *   Tecnica che consiste nel cambiare variabile per semplificare l'integrale, basata sulla regola della catena per le derivate.