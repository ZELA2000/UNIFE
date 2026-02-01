## I. Logica e Insiemi

### Simboli Fondamentali
| Concetto | Simbolo/Equivalenza |
| :--- | :--- | 
| **Appartenenza** | $a \in A$ (o $A \ni a$) |
| **Quantificatori** | $\forall$ (Per ogni), $\exists$ (Esiste), $\exists!$ (Esiste ed è unico) |
| **Implicazioni** | $P \Rightarrow Q$ (Implica), $A \iff B$ (Se e solo se) |

### Relazioni e Operazioni tra Insiemi
| Relazione / Operazione | Formula / Notazione |
| :--- | :--- |
| **Inclusione** | $A \subseteq B$ |
| **Uguaglianza** | $A = B \iff A \subseteq B \land B \subseteq A$ |
| **Unione** | $A \cup B = \{x \mid x \in A \text{ o } x \in B\}$ |
| **Intersezione** | $A \cap B = \{x \mid x \in A \text{ e } x \in B\}$ |
| **Insiemi Disgiunti** | $A \cap B = \emptyset$ |
| **Differenza** | $A \setminus B = \{x \in A : x \notin B\}$ |
| **Prodotto Cartesiano** | $A \times B = \{(a, b) : a \in A, b \in B\}$ |

### Proprietà Algebriche degli Insiemi
| Proprietà | Formule | 
| :--- | :--- | 
| **Idempotenza** | $A \cup A = A$, $A \cap A = A$ |
| **Commutatività** | $A \cup B = B \cup A$, $A \cap B = B \cap A$ |
| **Associatività** | $(A \cup B) \cup C = A \cup (B \cup C)$, $(A \cap B) \cap C = A \cap (B \cap C)$ |
| **Distributività** | $A \cup (B \cap C) = (A \cup B) \cap (A \cup C)$, $A \cap (B \cup C) = (A \cap B) \cup (A \cap C)$ |

### Negazione Logica
| Negazione di Quantificatori | Formula | 
| :--- | :--- | 
| **Negazione di $\forall$** | $\neg (\forall x \in A, P) \iff \exists x \in A : \neg P$ |
| **Negazione di $\exists$** | $\neg (\exists x \in B : Q) \iff \forall x \in B : \neg Q$ |
| **Contronominale** | $(P \Rightarrow Q) \iff (\neg Q \Rightarrow \neg P)$ |



## II. Strutture Algebriche (Campi e Ordine)

| Proprietà (Campo $X$, P1-P9) | Somma ($+$) | Prodotto ($\cdot$) |
| :--- | :--- | :--- |
| **P1/P5 (Commutativa)** | $x+y = y+x, \forall x, y \in X$ | $x \cdot y = y \cdot x, \forall x, y \in X$ |
| **P2/P6 (Associativa)** | $(x+y)+z = x+(y+z)$ | $(x \cdot y) \cdot z = x \cdot (y \cdot z)$ |
| **P3/P7 (Neutro)** | $\exists 0: x+0 = x, \forall x \in X$ | $\exists 1: x \cdot 1 = x, \forall x \in X$ |
| **P4/P8 (Inverso)** | $\forall x, \exists (-x): x + (-x) = 0$ | $\forall x \neq 0, \exists x^{-1}: x \cdot x^{-1} = 1$ |
| **P9 (Distributiva)** | — | $(x+y) \cdot z = x \cdot z + y \cdot z$ |

### Proprietà di Ordine (Campo Totalmente Ordinato)
| Proprietà di Ordine ($\le$, P10-P15) | Formula |
| :--- | :--- |
| **P10 (Riflessività)** | $x \le x, \forall x \in X$ |
| **P12 (Anti-simmetria)** | $x \le y \land y \le x \Rightarrow x = y$ |
| **P13 (Transitività)** | $x \le y \land y \le z \Rightarrow x \le z$ |
| **P14 (Compatibilità con $+$)** | $x \le y \Rightarrow x+z \le y+z, \forall x, y, z \in X$ |
| **P15 (Compatibilità con $\cdot$)** | $0 \le x \land 0 \le y \Rightarrow 0 \le x \cdot y, \forall x, y \in X$ |

### Disuguaglianze in $\mathbb{R}$
| Proprietà | Formula |
| :--- | :--- |
| **Archimedea** | $\forall x, y \in \mathbb{R}, x, y > 0, \exists n \in \mathbb{N}: nx \ge y$ |
| **Ordine opposto** | $x \le y \iff -x \ge -y$ |
| **Quadrato** | $\forall x \neq 0, x^2 > 0$ |



## III. Estremi e Insiemi (in $\mathbb{R}$)

### Definizione di Estremi
| Estremo | Definizione formale | Caso Illimitato |
| :--- | :--- | :--- |
| **Estremo Superiore** | $\sup A = \min \{k \in \mathbb{R}: k \ge a, \forall a \in A\}$ | $\sup A = +\infty$ |
| **Estremo Inferiore** | $\inf A = \max \{k \in \mathbb{R}: k \le a, \forall a \in A\}$ | $\inf A = -\infty$ |

### Caratterizzazione di Estremi (per $l \in \mathbb{R}$)
| Estremo | Condizione 1 (Maggiorante/Minorante) | Condizione 2 (Minimalità/Massimalità) |
| :--- | :--- | :--- |
| $\sup A = l$ | $a \le l, \forall a \in A$ | $\forall \varepsilon > 0, \exists a \in A: a > l - \varepsilon$ |
| $\inf A = l$ | $a \ge l, \forall a \in A$ | $\forall \varepsilon > 0, \exists a \in A: a < l + \varepsilon$ |

### Proprietà di Monotonia degli Estremi
| Operazione / Inclusione | Formula |
| :--- | :--- |
| Se $A \subseteq B$ | $\sup A \le \sup B$ |
| Se $A \subseteq B$ | $\inf A \ge \inf B$ |
| Unione (Sup) | $\sup(A \cup B) = \max \{\sup A, \sup B\}$ |
| Unione (Inf) | $\inf(A \cup B) = \min \{\inf A, \inf B\}$ |



## IV. Valore Assoluto (Modulo)

| Concetto | Formula |
| :--- | :--- |
| **Definizione** | $\lvert x\rvert = \begin{cases} x, & \text{se } x \ge 0 \\ -x, & \text{se } x < 0 \end{cases}$ |
| **Positività** | $\lvert x\rvert \ge 0$ |
| **Prodotto** | $\lvert xy\rvert = \lvert x\rvert \lvert y\rvert$ |
| **Divisione** | $\lvert x/y\rvert = \lvert x\rvert /\lvert y\rvert, \forall y \neq 0$ |
| **Disuguaglianza triangolare (Somma)** | $\lvert x+y\rvert \le \lvert x\rvert + \lvert y\rvert$ |
| **Disuguaglianza triangolare (Differenza)** | $\lvert x-y\rvert \ge \big\lvert \lvert x\rvert - \lvert y\rvert \big\rvert$ |



## V. Potenze ed Esponenziali

### Proprietà delle Potenze ($b, c > 0$; $p, q \in \mathbb{R}$)
| Proprietà | Formula |
| :--- | :--- |
| **Prodotto di basi uguali** | $b^p \cdot b^q = b^{p+q}$ |
| **Potenza di potenza** | $(b^p)^q = b^{pq}$ |
| **Potenza negativa** | $b^{-q} = 1/b^q$ |
| **Esponente zero** | $b^0 = 1$ |
| **Prodotto di esponenti uguali** | $b^p \cdot c^p = (bc)^p$ |
| **Disuguaglianza di Bernoulli** | $(1+h)^n \ge 1 + nh, \forall n \in \mathbb{N}, h \in (-1, +\infty)$ |

### Logaritmi (Base $b>0, b \neq 1$)
| Proprietà | Formula |
| :--- | :--- |
| **Inversa dell'esponenziale** | $b^{\log_b(x)} = x$, $\log_b(b^x) = x$ |
| **Prodotto** | $\log_b(xy) = \log_b(x) + \log_b(y)$ |
| **Quoziente** | $\log_b(x/y) = \log_b(x) - \log_b(y)$ |
| **Potenza** | $\log_b(x^r) = r \log_b(x), \forall r \in \mathbb{R}$ |
| **Cambio di base** | $\log_b(x) = \frac{\log_a(x)}{\log_a(b)}$ |



## VI. Successioni e Limiti

### Limite di Successione ($a_n \to l$)
| Tipo di Limite | Formula (Definizione con Intorni/Palle Aperte) |
| :--- | :--- |
| **Limite finito** ($l \in \mathbb{R}$) | $\lim_{n \to +\infty} a_n = l \iff \forall \varepsilon > 0, \exists \overline{n} \in \mathbb{N}: \forall n > \overline{n}, \lvert a_n - l\rvert < \varepsilon$ |
| **Limite $+\infty$** | $\lim_{n \to +\infty} a_n = +\infty \iff \forall M > 0, \exists \overline{n} \in \mathbb{N}: \forall n > \overline{n}, a_n > M$ |
| **Limite $-\infty$** | $\lim_{n \to +\infty} a_n = -\infty \iff \forall M > 0, \exists \overline{n} \in \mathbb{N}: \forall n > \overline{n}, a_n < -M$ |

### Proprietà dei Limiti di Successione
| Proprietà | Formula / Risultato |
| :--- | :--- |
| **Unicità del Limite** | $\lim a_n = l_1 \land \lim a_n = l_2 \Rightarrow l_1 = l_2$ |
| **Teorema del Confronto** | $a_n \le b_n \le c_n \land \lim a_n = \lim c_n = l \in \overline{\mathbb{R}} \Rightarrow \lim b_n = l$ |
| **Convergenza $\Rightarrow$ Limitata** | $\lim a_n = l \in \overline{\mathbb{R}} \Rightarrow (a_n) \text{ è limitata}$ |
| **Prodotto limitata x infinitesima** | $(a_n)$ limitata $\land \lim b_n = 0 \Rightarrow \lim (a_n b_n) = 0$ |
| **Corollario (Monotone)** | $(a_n)$ monotona e limitata superiormente (o inferiormente) $\Rightarrow (a_n)$ converge |

### Algebra dei Limiti (Risultati per $l, m \in \mathbb{R}$)
| Operazione | Limite ($l = \lim a_n, m = \lim b_n$) |
| :--- | :--- |
| **Somma** | $\lim (a_n + b_n) = l + m$ |
| **Prodotto** | $\lim (a_n b_n) = l m$ |
| **Quoziente** | $\lim (a_n / b_n) = l / m, \text{ se } m \ne 0$ |

### Forme Esponenziali e Limiti Notevoli
| Limite | Formula |
| :--- | :--- |
| **Numero di Nepero ($e$)** | $\lim_{n \to +\infty} \left(1 + \frac{1}{n}\right)^n = e$ |
| **Limite Generalizzato** | $\lim_{n \to +\infty} \left(1 + \frac{\alpha}{b_n}\right)^{b_n} = e^\alpha, \text{ se } b_n \to +\infty$ |

### Gerarchia degli Infiniti ($b>1, \alpha>0$)
$$\log_b(n) \ll n^\alpha \ll b^n \ll n! \ll n^n$$

| Limite di Gerarchia | Formula |
| :--- | :--- |
| **Potenza vs Esponenziale** | $\lim_{n \to +\infty} \frac{n^\alpha}{b^n} = 0$ |
| **Logaritmo vs Potenza** | $\lim_{n \to +\infty} \frac{\log_b(n)}{n^\alpha} = 0$ |
| **Esponenziale vs Fattoriale** | $\lim_{n \to +\infty} \frac{b^n}{n!} = 0$ |
| **Radice ennesima di $n$** | $\lim_{n \to +\infty} \sqrt[n]{n} = 1$ |
| **Fattoriale vs Potenza $n^n$** | $\lim_{n \to +\infty} \frac{n!}{n^n} = 0$ |

### Notazione di Landau / Equivalenza Asintotica
| Notazione | Simbolo / Equivalenza |
| :--- | :--- |
| **Infinitesima ($o(1)$)** | $\lim_{n \to +\infty} a_n = 0 \iff a_n = o(1)$ |
| **$a_n$ tende a $l \ne 0$** | $a_n = l + o(1)$ |
| **Equivalenza Asintotica** | $a_n \sim b_n \iff \lim_{n \to +\infty} \frac{a_n}{b_n} = 1$ |
| **Algebra di $o(1)$** | $o(1) \pm o(1) = o(1)$, $o(1) \cdot o(1) = o(1)$, $\frac{1}{1+o(1)} = 1+o(1)$ |
| **Proprietà del Prodotto Asintotico** | $a_n \sim a'_n \land b_n \sim b'_n \Rightarrow a_n b_n \sim a'_n b'_n$ |
| **Proprietà del Quoziente Asintotico** | $a_n \sim a'_n \land b_n \sim b'_n \Rightarrow a_n/b_n \sim a'_n/b'_n$ |



## VII. Serie Numeriche ($\sum a_n$)

### Definizioni e Condizioni
| Concetto | Formula/Condizione |
| :--- | :--- |
| **Serie Numerica** | $S = \sum_{n=0}^{+\infty} a_n$ |
| **Somma Parziale** | $S_k = \sum_{n=0}^{k} a_n$ |
| **Convergenza (Carattere)** | $S$ converge se $\lim_{k \to +\infty} S_k \in \mathbb{R}$ |
| **Criterio Necessario** | Se $\sum a_n$ converge, allora $\lim_{n \to +\infty} a_n = 0$ |
| **Convergenza Assoluta** | $\sum a_k$ converge assolutamente se $\sum \lvert a_k \rvert$ converge |
| **Teorema Assoluta $\Rightarrow$ Semplice** | $\left[ \sum \lvert a_k \rvert \text{ converge} \Rightarrow \sum a_k \text{ converge} \right]$ |
| **Disuguaglianza triangolare (Serie)** | $\left\lvert \sum a_k \right\rvert \leq \sum \lvert a_k \rvert$ |

### Serie Specifiche e Somme
| Tipo di Serie | Formula Somma / Condizione |
| :--- | :--- |
| **Serie Geometrica** | Se $\lvert r\rvert <1$, $\sum_{n=0}^{+\infty} r^n = \frac{1}{1-r}$ |
| **Serie Telescopica** | $\sum_{n=0}^{+\infty} (b_n - b_{n+1}) = b_0 - \lim_{k \to +\infty} b_{k+1}$ |

### Criteri per Serie a Termini Non Negativi ($a_n \ge 0$)
| Criterio | Condizione / Risultato |
| :--- | :--- |
| **Confronto (i)** | Se $0 \le a_n \le b_n$ e $\sum a_n = +\infty \Rightarrow \sum b_n = +\infty$ |
| **Confronto (ii)** | Se $0 \le a_n \le b_n$ e $\sum b_n$ converge $\Rightarrow \sum a_n$ converge |
| **Rapporto** ($\lim \frac{a_{k+1}}{a_k} = l$) | Converge se $l \in [0, 1)$, Diverge se $l \in (1, +\infty]$ |
| **Radice** ($\lim \sqrt[k]{a_k} = l$) | Converge se $l \in [0, 1)$, Diverge se $l \in (1, +\infty]$ |
| **Confronto Asintotico ($l \in (0, +\infty)$)** | $\sum a_k$ e $\sum b_k$ hanno lo stesso carattere |
| **Confronto Asintotico ($l = 0$)** | Se $\sum b_k$ converge $\Rightarrow \sum a_k$ converge |

### Criterio per Serie a Segni Alterni
| Criterio di Leibniz (per $\sum (-1)^k a_k, a_k \ge 0$) | Condizioni per convergenza semplice |
| :--- | :--- |
| **Condizione (i)** | $a_k \ge 0$ (definitivamente non negativi) |
| **Condizione (ii)** | $\lim a_k = 0$ (infinitesima) |
| **Condizione (iii)** | $a_{k+1} \le a_k$ (definitivamente monotona non crescente) |

### Serie di Potenze Centrate in $x_0$
| Concetto | Formula / Condizione |
| :--- | :--- |
| **Definizione** | $\sum_{k=0}^{+\infty} a_k (x-x_0)^k$ |
| **Raggio di Convergenza ($r$)** | $r = \frac{1}{\lim_{k \to +\infty} \frac{\lvert a_{k+1}\rvert}{\lvert a_k\rvert}}$ oppure $r = \frac{1}{\lim_{k \to +\infty} \sqrt[k]{\lvert a_k\rvert}}$ |
| **Convergenza Assoluta** | $\lvert x-x_0\rvert < r$ |
| **Non Convergenza** | $\lvert x-x_0\rvert > r$ |



## VIII. Somme e Disuguaglianze per Induzione

| Sommatoria | Formula |
| :--- | :--- |
| **Somma interi** | $\sum_{k=1}^{n} k = \frac{n(n+1)}{2}$ |
| **Somma quadrati** | $\sum_{k=1}^{n} k^2 = \frac{n(n+1)(2n+1)}{6}$ |
| **Somma cubi** | $\sum_{k=1}^{n} k^3 = \left(\frac{n(n+1)}{2}\right)^2$ |



## IX. Limiti Notevoli e Gerarchie

### Limiti Notevoli ($x \to 0$ o $x \to +\infty$)
| Funzione / Rapporto | Limite |
| :--- | :--- |
| $\frac{\sin(x)}{x}$ | $1$ |
| $\frac{1 - \cos(x)}{x^2}$ | $1/2$ |
| $\frac{e^x - 1}{x}$ | $1$ |
| $\frac{\ln(1+x)}{x}$ | $1$ |
| $\frac{b^x - 1}{x}$ | $\ln(b)$ |
| **Gerarchia ($x \to +\infty$)** | $x^x \gg n! \gg b^x \gg x^\alpha \gg \log_b(x)$ |
| **Rapporto Gerarchico** | $\frac{b^x}{x^\alpha} \to +\infty \quad (b>1, \alpha>0)$ |


## X. Algebra delle Derivate

| Operazione | Formula |
| :--- | :--- |
| **Somma / Diff.** | $(f \pm g)' = f' \pm g'$ |
| **Prodotto** | $(f \cdot g)' = f'g + fg'$ |
| **Rapporto** | $\left(\frac{f}{g}\right)' = \frac{f'g - fg'}{g^2}$ |
| **Reciproco** | $\left(\frac{1}{g}\right)' = -\frac{g'}{g^2}$ |
| **Composta** | $(g \circ f)'(x) = g'(f(x)) \cdot f'(x)$ |
| **Inversa** | $(f^{-1})'(y_0) = \frac{1}{f'(x_0)}$ |
| **Retta Tangente** | $y = f(x_0) + f'(x_0)(x - x_0)$ |


## XI. Tabella di Derivate e Integrali

| Funzione $f(x)$ | Derivata $f'(x)$ | Integrale (Primitiva) $\int f(x)dx$ |
| :--- | :--- | :--- |
| $x^n$ | $nx^{n-1}$ | $\frac{x^{n+1}}{n+1}$ |
| $x^{-n} = \frac{1}{x^n}$ | $-nx^{-n-1}$ | $\frac{x^{-n+1}}{-n+1}$ |
| $x^\alpha$ | $\alpha x^{\alpha-1}$ | $\frac{x^{\alpha+1}}{\alpha+1}$ |
| $\sqrt{x}$ | $\frac{1}{2\sqrt{x}}$ | $\frac{2}{3}x^{3/2}$ |
| $e^x$ | $e^x$ | $e^x$ |
| $b^x$ | $(\ln b) b^x$ | $\frac{b^x}{\ln b}$ |
| $\ln\lvert x\rvert$ | $1/x$ | $x \ln x - x$ |
| $\sin(x)$ | $\cos(x)$ | $-\cos(x)$ |
| $\cos(x)$ | $-\sin(x)$ | $\sin(x)$ |
| $\tan(x)$ | $1 + \tan^2(x) = \frac{1}{\cos^2(x)}$ | $-\ln\lvert\cos(x)\rvert$ |
| $\arctan(x)$ | $\frac{1}{1+x^2}$ | $x \arctan x - \frac{1}{2}\ln(1+x^2)$ |
| $\arcsin(x)$ | $\frac{1}{\sqrt{1-x^2}}$ | $x \arcsin x + \sqrt{1-x^2}$ |


## XII. Taylor, De L'Hôpital e Estremi Locali

| Strumento | Formula |
| :--- | :--- |
| **Regola L'Hôpital** | $\lim \frac{f(x)}{g(x)} = \lim \frac{f'(x)}{g'(x)}$ |
| **Polinomio Taylor** | $P_n(x) = \sum_{k=0}^n \frac{f^{(k)}(x_0)}{k!}(x-x_0)^k$ |
| **Sviluppo $e^x$** | $e^x \sim 1 + x + \frac{x^2}{2} + \frac{x^3}{6} + \dots$ |
| **Sviluppo $\sin(x)$** | $\sin(x) \sim x - \frac{x^3}{6} + \frac{x^5}{120} - \dots$ |
| **Sviluppo $\cos(x)$** | $\cos(x) \sim 1 - \frac{x^2}{2} + \frac{x^4}{24} - \dots$ |
| **Max Locale** | $\{f'(x_0)=0 \land f''(x_0)<0\}$ |
| **Min Locale** | $\{f'(x_0)=0 \land f''(x_0)>0\}$ |


## XIII. Formule per il Calcolo Integrale

| Metodo | Formula |
| :--- | :--- |
| **Newton-Leibniz** | $\int_a^b f(t)dt = F(b) - F(a)$ |
| **Integraz. Parti** | $\int f(x)g'(x)dx = f(x)g(x) - \int f'(x)g(x)dx$ |
| **Sostituzione** | $\int_c^d f(h(t))h'(t)dt = \int_{h(c)}^{h(d)} f(x)dx$ |
| **Simmetria Dis** | $\int_{-c}^c f_{\text{dispari}}(x)dx = 0$ |
| **Simmetria Par** | $\int_{-c}^c f_{\text{pari}}(x)dx = 2 \int_0^c f(x)dx$ |
| **Fratti Semplici** | $\frac{1}{(x-x_1)(x-x_2)} = \frac{D_1}{x-x_1} + \frac{D_2}{x-x_2}$ |
| **Composta Exp** | $\int_a^b e^{h(x)}h'(x)dx = e^{h(b)} - e^{h(a)}$ |
## XIV. Studio di una Funzione: Passi Fondamentali

1. **Dominio e Continuità:** Determinare l'insieme di definizione $A$ e verificare se $f \in C(A)$ (continuità su tutto il dominio).

2. **Limiti agli Estremi ($A_\infty$):** Individuare i punti di accumulazione che non appartengono al dominio ($x_0 \in A_\infty$, inclusi $\pm\infty$) e calcolare i limiti per determinare il comportamento della funzione e gli eventuali asintoti.

3. **Calcolo della Derivata Prima:** Determinare l'insieme $A'$ dei punti in cui la funzione è derivabile e calcolare $f'(x)$.

4. **Si disegna il grafico.**

---

***Buon Lavoro!***