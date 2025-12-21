## I. Logica e Insiemi

### Simboli Fondamentali
| Concetto | Simbolo/Equivalenza |
| :--- | :--- | 
| **Appartenenza** | $a \in A$ (o $A \ni a$) | |
| **Quantificatori** | $\forall$ (Per ogni), $\exists$ (Esiste), $\exists!$ (Esiste ed è unico) | |
| **Implicazioni** | $P \Rightarrow Q$ (Implica), $A \iff B$ (Se e solo se) | |

### Relazioni e Operazioni tra Insiemi
| Relazione / Operazione | Formula / Notazione |
| :--- | :--- |
| **Inclusione** | $A \subseteq B$ | |
| **Uguaglianza** | $A = B \iff A \subseteq B \land B \subseteq A$ | |
| **Unione** | $A \cup B = \{x \lvert x \in A \text{ o } x \in B\}$ | |
| **Intersezione** | $A \cap B = \{x \lvert x \in A \text{ e } x \in B\}$ | |
| **Insiemi Disgiunti** | $A \cap B = \emptyset$ | |
| **Differenza** | $A \setminus B = \{x \in A: x \notin B\}$ | |
| **Prodotto Cartesiano** | $A \times B = \{(a, b): a \in A, b \in B\}$ | |

### Proprietà Algebriche degli Insiemi
| Proprietà | Formule | 
| :--- | :--- | 
| **Idempotenza** | $A \cup A = A$, $A \cap A = A$ | |
| **Commutatività** | $A \cup B = B \cup A$, $A \cap B = B \cap A$ | |
| **Associatività** | $(A \cup B) \cup C = A \cup (B \cup C)$, $(A \cap B) \cap C = A \cap (B \cap C)$ | |
| **Distributività** | $A \cup (B \cap C) = (A \cup B) \cap (A \cup C)$, $A \cap (B \cup C) = (A \cap B) \cup (A \cap C)$ | |

### Negazione Logica
| Negazione di Quantificatori | Formula | 
| :--- | :--- | 
| **Negazione di $\forall$** | $\neg (\forall x \in A, P) \iff \exists x \in A: \neg P$ | |
| **Negazione di $\exists$** | $\neg (\exists x \in B: Q) \iff \forall x \in B: \neg Q$ | |
| **Contronominale** | $(P \Rightarrow Q) \iff (\neg Q \Rightarrow \neg P)$ | |



## II. Strutture Algebriche (Campi e Ordine)

| Proprietà (Campo $X$, P1-P9) | Somma ($+$) | Prodotto ($\cdot$) | 
| :--- | :--- | :--- | 
| **P1/P5 (Commutativa)** | $x+y = y+x, \forall x, y \in X$ | $x \cdot y = y \cdot x, \forall x, y \in X$ | |
| **P2/P6 (Associativa)** | $(x+y)+z = x+(y+z)$ | $(x \cdot y) \cdot z = x \cdot (y \cdot z)$ | |
| **P3/P7 (Neutro)** | $\exists 0: x+0 = x, \forall x \in X$ | $\exists 1: x \cdot 1 = x, \forall x \in X$ | |
| **P4/P8 (Inverso)** | $\forall x, \exists (-x): x + (-x) = 0$ | $\forall x \neq 0, \exists x^{-1}: x \cdot x^{-1} = 1$ | |
| **P9 (Distributiva)** | | $(x+y) \cdot z = x \cdot z + y \cdot z$ | |

### Proprietà di Ordine (Campo Totalmente Ordinato)
| Proprietà di Ordine ($\le$, P10-P15) | Formula | 
| :--- | :--- | 
| **P10 (Riflessività)** | $x \le x, \forall x \in X$ | |
| **P12 (Anti-simmetria)** | $x \le y \land y \le x \Rightarrow x = y$ | |
| **P13 (Transitività)** | $x \le y \land y \le z \Rightarrow x \le z$ | |
| **P14 (Compatibilità con $+$)** | $x \le y \Rightarrow x+z \le y+z, \forall x, y, z \in X$ | |
| **P15 (Compatibilità con $\cdot$)** | $0 \le x \land 0 \le y \Rightarrow 0 \le x \cdot y, \forall x, y \in X$ | |

### Disuguaglianze in $\mathbb{R}$
| Proprietà | Formula | 
| :--- | :--- | 
| **Archimedea** | $\forall x, y \in \mathbb{R}, x, y > 0, \exists n \in \mathbb{N}: nx \ge y$ | |
| **Ordine opposto** | $x \le y \iff -x \ge -y$ | |
| **Quadrato** | $\forall x \neq 0, x^2 > 0$ | |



## III. Estremi e Insiemi (in $\mathbb{R}$)

### Definizione di Estremi
| Estremo | Definizione formale | Caso Illimitato | 
| :--- | :--- | :--- | 
| **Estremo Superiore** | $\sup A = \min \{k \in \mathbb{R}: k \ge a, \forall a \in A\}$ | $\sup A = +\infty$ | |
| **Estremo Inferiore** | $\inf A = \max \{k \in \mathbb{R}: k \le a, \forall a \in A\}$ | $\inf A = -\infty$ | |

### Caratterizzazione di Estremi (per $l \in \mathbb{R}$)
| Estremo | Condizione 1 (Maggiorante/Minorante) | Condizione 2 (Minimalità/Massimalità) | 
| :--- | :--- | :--- | 
| $\sup A = l$ | $a \le l, \forall a \in A$ | $\forall \varepsilon > 0, \exists a \in A: a > l - \varepsilon$ | |
| $\inf A = l$ | $a \ge l, \forall a \in A$ | $\forall \varepsilon > 0, \exists a \in A: a < l + \varepsilon$ | |

### Proprietà di Monotonia degli Estremi
| Operazione / Inclusione | Formula |
| :--- | :--- |
| Se $A \subseteq B$ | $\sup A \le \sup B$ | |
| Se $A \subseteq B$ | $\inf A \ge \inf B$ | |
| Unione (Sup) | $\sup(A \cup B) = \max \{\sup A, \sup B\}$ | |
| Unione (Inf) | $\inf(A \cup B) = \min \{\inf A, \inf B\}$ | |



## IV. Valore Assoluto (Modulo)

| Concetto | Formula |
| :--- | :--- | 
| **Definizione** | $\lvert x\lvert  = \begin{cases} x, & \text{se } x \ge 0 \\ -x, & \text{se } x < 0 \end{cases}$ | |
| **Positività** | $\lvert x\lvert  \ge 0$ | |
| **Prodotto** | $\lvert xy\lvert  = \lvert x\lvert \lvert y\lvert$ | |
| **Divisione** | $\lvert x/y\lvert  = \lvert x\lvert /\lvert y\lvert , \forall y \neq 0$ | |
| **Disuguaglianza triangolare (Somma)** | $\lvert x+y\lvert  \le \lvert x\lvert  + \lvert y\lvert$ | |
| **Disuguaglianza triangolare (Differenza)** | $\lvert x-y\lvert  \ge \lvert \lvert x\lvert  - \lvert y\lvert \lvert$ | |



## V. Potenze ed Esponenziali

### Proprietà delle Potenze ($b, c > 0$; $p, q \in \mathbb{R}$)
| Proprietà | Formula |
| :--- | :--- | 
| **Prodotto di basi uguali** | $b^p \cdot b^q = b^{p+q}$ | |
| **Potenza di potenza** | $(b^p)^q = b^{pq}$ | |
| **Potenza negativa** | $b^{-q} = 1/b^q$ | |
| **Esponente zero** | $b^0 = 1$ | |
| **Prodotto di esponenti uguali** | $b^p \cdot c^p = (bc)^p$ | |
| **Disuguaglianza di Bernoulli** | $(1+h)^n \ge 1 + nh, \forall n \in \mathbb{N}, h \in (-1, +\infty)$ | |

### Logaritmi (Base $b>0, b \neq 1$)
| Proprietà | Formula |
| :--- | :--- |
| **Inversa dell'esponenziale** | $b^{\log_b(x)} = x$, $\log_b(b^x) = x$ | |
| **Prodotto** | $\log_b(xy) = \log_b(x) + \log_b(y)$ | |
| **Quoziente** | $\log_b(x/y) = \log_b(x) - \log_b(y)$ | |
| **Potenza** | $\log_b(x^r) = r \log_b(x), \forall r \in \mathbb{R}$ | |
| **Cambio di base** | $\log_b(x) = \frac{\log_a(x)}{\log_a(b)}$ | |



## VI. Successioni e Limiti

### Limite di Successione ($a_n \to l$)
| Tipo di Limite | Formula (Definizione con Intorni/Palle Aperte) | 
| :--- | :--- |
| **Limite finito** ($l \in \mathbb{R}$) | $\lim_{n \to +\infty} a_n = l \iff \forall \varepsilon > 0, \exists \overline{n} \in \mathbb{N}: \forall n > \overline{n}, \lvert a_n - l\lvert  < \varepsilon$ | |
| **Limite $+\infty$** | $\lim_{n \to +\infty} a_n = +\infty \iff \forall M > 0, \exists \overline{n} \in \mathbb{N}: \forall n > \overline{n}, a_n > M$ | |
| **Limite $-\infty$** | $\lim_{n \to +\infty} a_n = -\infty \iff \forall M > 0, \exists \overline{n} \in \mathbb{N}: \forall n > \overline{n}, a_n < -M$ | |

### Proprietà dei Limiti di Successione
| Proprietà | Formula / Risultato | 
| :--- | :--- | 
| **Unicità del Limite** | $\lim a_n = l_1 \land \lim a_n = l_2 \Rightarrow l_1 = l_2$ | |
| **Teorema del Confronto** | $a_n \le b_n \le c_n \land \lim a_n = \lim c_n = l \in \overline{\mathbb{R}} \Rightarrow \lim b_n = l$ | |
| **Convergenza $\Rightarrow$ Limitata** | $\lim a_n = l \in \overline{\mathbb{R}} \Rightarrow (a_n) \text{ è limitata}$ | |
| **Prodotto limitata x infinitesima** | $(a_n)$ limitata $\land \lim b_n = 0 \Rightarrow \lim (a_n b_n) = 0$ | |
| **Corollario (Monotone)** | $(a_n)$ monotona e limitata superiormente (o inferiormente) $\Rightarrow (a_n)$ converge | |

### Algebra dei Limiti (Risultati per $l, m \in \mathbb{R}$)
| Operazione | Limite ($l = \lim a_n, m = \lim b_n$) |
| :--- | :--- | 
| **Somma** | $\lim (a_n + b_n) = l + m$ | |
| **Prodotto** | $\lim (a_n b_n) = l m$ | |
| **Quoziente** | $\lim (a_n / b_n) = l / m, \text{ se } m \ne 0$ | |

### Forme Esponenziali e Limiti Notevoli
| Limite | Formula |
| :--- | :--- |
| **Numero di Nepero ($e$)** | $\lim_{n \to +\infty} \left(1 + \frac{1}{n}\right)^n = e$ | |
| **Limite Generalizzato** | $\lim_{n \to +\infty} \left(1 + \frac{\alpha}{b_n}\right)^{b_n} = e^\alpha, \text{ se } b_n \to +\infty$ | |

### Gerarchia degli Infiniti ($b>1, \alpha>0$)
$$ \log_b(n) \ll n^\alpha \ll b^n \ll n! \ll n^n $$

| Limite di Gerarchia | Formula |
| :--- | :--- |
| **Potenza vs Esponenziale** | $\lim_{n \to +\infty} \frac{n^\alpha}{b^n} = 0$ | |
| **Logaritmo vs Potenza** | $\lim_{n \to +\infty} \frac{\log_b(n)}{n^\alpha} = 0$ | |
| **Esponenziale vs Fattoriale** | $\lim_{n \to +\infty} \frac{b^n}{n!} = 0$ | |
| **Radice ennesima di $n$** | $\lim_{n \to +\infty} \sqrt[n]{n} = 1$ | |
| **Fattoriale vs Potenza $n^n$** | $\lim_{n \to +\infty} \frac{n!}{n^n} = 0$ | |

### Notazione di Landau / Equivalenza Asintotica
| Notazione | Simbolo / Equivalenza |
| :--- | :--- |
| **Infinitesima ($o(1)$)** | $\lim_{n \to +\infty} a_n = 0 \iff a_n = o(1)$ | |
| **$a_n$ tende a $l \ne 0$** | $a_n = l + o(1)$ | |
| **Equivalenza Asintotica** | $a_n \sim b_n \iff \lim_{n \to +\infty} \frac{a_n}{b_n} = 1$ | |
| **Algebra di $o(1)$** | $o(1) \pm o(1) = o(1)$, $o(1) \cdot o(1) = o(1)$, $\frac{1}{1+o(1)} = 1+o(1)$ | |
| **Proprietà del Prodotto Asintotico** | $a_n \sim a'_n \land b_n \sim b'_n \Rightarrow a_n b_n \sim a'_n b'_n$ | |
| **Proprietà del Quoziente Asintotico** | $a_n \sim a'_n \land b_n \sim b'_n \Rightarrow a_n/b_n \sim a'_n/b'_n$ | |



## VII. Serie Numeriche ($\sum a_n$)

### Definizioni e Condizioni
| Concetto | Formula/Condizione |
| :--- | :--- |
| **Serie Numerica** | $S = \sum_{n=0}^{+\infty} a_n$ | |
| **Somma Parziale** | $S_k = \sum_{n=0}^{k} a_n$ | |
| **Convergenza (Carattere)** | $S$ converge se $\lim_{k \to +\infty} S_k \in \mathbb{R}$ | |
| **Criterio Necessario** | Se $\sum a_n$ converge, allora $\lim_{n \to +\infty} a_n = 0$ | |
| **Convergenza Assoluta** | $\sum a_k$ converge assolutamente se $\sum \lvert a_k \rvert$ converge | |
| **Teorema Assoluta $\Rightarrow$ Semplice** | $\left[ \sum \lvert a_k \rvert \text{ converge} \Rightarrow \sum a_k \text{ converge} \right]$ | |
| **Disuguaglianza triangolare (Serie)** | $\left \lvert \sum a_k \right \rvert \leq \sum \lvert a_k \rvert$ | |

### Serie Specifiche e Somme
| Tipo di Serie | Formula Somma / Condizione |
| :--- | :--- |
| **Serie Geometrica** | Se $\lvert r\lvert <1$, $\sum_{n=0}^{+\infty} r^n = \frac{1}{1-r}$ | |
| **Serie Telescopica** | $\sum_{n=0}^{+\infty} (b_n - b_{n+1}) = b_0 - \lim_{k \to +\infty} b_{k+1}$ | |

### Criteri per Serie a Termini Non Negativi ($a_n \ge 0$)
| Criterio | Condizione / Risultato |
| :--- | :--- |
| **Confronto (i)** | Se $0 \le a_n \le b_n$ e $\sum a_n = +\infty \Rightarrow \sum b_n = +\infty$ | |
| **Confronto (ii)** | Se $0 \le a_n \le b_n$ e $\sum b_n$ converge $\Rightarrow \sum a_n$ converge | |
| **Rapporto** ($\lim \frac{a_{k+1}}{a_k} = l$) | Converge se $l \in [0, 1)$, Diverge se $l \in (1, +\infty]$ | |
| **Radice** ($\lim \sqrt[k]{a_k} = l$) | Converge se $l \in [0, 1)$, Diverge se $l \in (1, +\infty]$ | |
| **Confronto Asintotico ($l \in (0, +\infty)$)** | $\sum a_k \land \sum b_k$ hanno lo stesso carattere | |
| **Confronto Asintotico ($l = 0$)** | Se $\sum b_k$ converge $\Rightarrow \sum a_k$ converge | |

### Criterio per Serie a Segni Alterni
| Criterio di Leibniz (per $\sum (-1)^k a_k, a_k \ge 0$) | Condizioni per convergenza semplice |
| :--- | :--- | 
| | (i) $a_k \ge 0$ (definitivamente non negativi) | |
| | (ii) $\lim a_k = 0$ (infinitesima) | |
| | (iii) $a_{k+1} \le a_k$ (definitivamente monotona non crescente) | |

### Serie di Potenze Centrate in $x_0$
| Concetto | Formula / Condizione | 
| :--- | :--- | 
| **Definizione** | $\sum_{k=0}^{+\infty} a_k (x-x_0)^k$ | |
| **Raggio di Convergenza ($r$)** | $r = \frac{1}{\lim_{k \to +\infty} \frac{\lvert a_{k+1}\lvert }{\lvert a_k\lvert }}$ oppure $r = \frac{1}{\lim_{k \to +\infty} \sqrt[k]{\lvert a_k\lvert }}$ | |
| **Convergenza Assoluta** | $\lvert x-x_0\lvert  < r$ | |
| **Non Convergenza** | $\lvert x-x_0\lvert  > r$ | |



## VIII. Somme e Disuguaglianze per Induzione

| Sommatoria | Formula | 
| :--- | :--- | 
| **Somma interi** | $\sum_{k=1}^{n} k = \frac{n(n+1)}{2}$ | |
| **Somma quadrati** | $\sum_{k=1}^{n} k^2 = \frac{n(n+1)(2n+1)}{6}$ | |
| **Somma cubi** | $\sum_{k=1}^{n} k^3 = \left(\frac{n(n+1)}{2}\right)^2$ | |