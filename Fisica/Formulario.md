
### 0. VETTORI E ANALISI DIMENSIONALE
**Vettori:** Hanno modulo (grandezza), direzione e verso.
*   **Somma vettoriale:** $\vec{C} = \vec{A} + \vec{B}$ (componente per componente).
*   **Scomposizione:** $A_x = A \cos\theta$; $A_y = A \sin\theta$.
*   **Modulo:** $|\vec{A}| = \sqrt{A_x^2 + A_y^2}$.
*   **Prodotto scalare:** $\vec{A} \cdot \vec{B} = |\vec{A}||\vec{B}|\cos\theta = A_xB_x + A_yB_y$.

**Analisi Dimensionale:** Verifica la coerenza delle equazioni controllando che entrambi i lati abbiano le stesse dimensioni.
*   Esempio: $[v] = LT^{-1}$; $[a] = LT^{-2}$; $[F] = MLT^{-2}$.

---

### 1. CINEMATICA (Il moto dei corpi)
Questa sezione descrive *come* si muove un oggetto senza analizzarne le cause.

*   **Moto Rettilineo Uniforme (MRU):** Velocità costante, accelerazione = 0.
    *   **Legge oraria:** $x = x_0 + vt$ (posizione al tempo $t$).
    *   **Velocità:** $v = \frac{\Delta x}{\Delta t}$ (costante).

*   **Moto Rettilineo Uniformemente Accelerato (MRUA):**
    *   **Velocità finale:** $v_f = v_i + at$.
    *   **Tempo (Inversa):** $t = \frac{v_f - v_i}{a}$.
    *   **Legge oraria (Posizione):** $x_f = x_i + v_i t + \frac{1}{2}at^2$.
    *   **Formula senza tempo:** $v_f^2 = v_i^2 + 2a(x_f - x_i)$.
    *   **Spazio percorso (Inversa):** $\Delta x = \frac{v_f^2 - v_i^2}{2a}$.

*   **Caduta Libera e Piano Inclinato (senza attrito):**
    *   **Accelerazione su piano inclinato:** **$a = g \sin \alpha$** (È la componente della gravità che spinge il corpo lungo la discesa).
    *   **Velocità d'impatto (caduta da fermo):** $v = \sqrt{2gh}$.
    *   **Tempo di caduta (da fermo):** $t = \sqrt{\frac{2h}{g}}$.

*   **Moto del Proiettile (Parabola):** Si divide in due moti indipendenti.
    *   **Asse X (orizzontale):** MRU con $v_x = v_0 \cos\theta$ (costante).
    *   **Asse Y (verticale):** MRUA con $v_y = v_0 \sin\theta - gt$.
    *   **Gittata (distanza orizzontale):** $R = \frac{v_0^2 \sin(2\theta)}{g}$ (massima a $\theta = 45^\circ$).
    *   **Altezza massima:** $h_{max} = \frac{(v_0 \sin\theta)^2}{2g}$.
    *   **Tempo di volo:** $t_{tot} = \frac{2v_0 \sin\theta}{g}$.

*   **Moto Circolare Uniforme:** Velocità costante ma direzione che cambia continuamente.
    *   **Velocità angolare:** $\omega = \frac{\theta}{t} = \frac{2\pi}{T}$ (rad/s).
    *   **Periodo:** $T = \frac{2\pi}{\omega}$ (tempo per un giro completo).
    *   **Frequenza:** $f = \frac{1}{T}$ (giri al secondo, Hz).
    *   **Velocità tangenziale:** $v = \omega r = \frac{2\pi r}{T}$.
    *   **Accelerazione centripeta:** $a_c = \frac{v^2}{r} = \omega^2 r$ (punta verso il centro).
    *   **Forza centripeta:** $F_c = m \frac{v^2}{r} = m\omega^2 r$ (necessaria per mantenere il moto circolare).

---

### 2. DINAMICA E FORZE
Studia *perché* i corpi si muovono. La base è la **II Legge di Newton**: $\sum F = ma$ (Una forza applicata a una massa produce un'accelerazione).

*   **Forza Peso:** $P = mg$.
*   **Attrito Dinamico ($f_d$):** $f_d = \mu_d \cdot n$ (Forza che si oppone al movimento strisciando; $n$ è la forza premente perpendicolare).
*   **Attrito Statico:** $f_s \leq \mu_s \cdot n$ (Non supera una soglia massima; il corpo rimane fermo).
*   **Forza Elastica (Molla):** $F = -kx$ (Forza esercitata da una molla proporzionale a quanto è tesa o compressa).
*   **Tensione (filo ideale):** Trasmette la forza senza perdite (assume direzione lungo il filo).

---

### 2B. QUANTITÀ DI MOTO E URTI
*   **Quantità di Moto:** $\vec{p} = m\vec{v}$ (momento lineare).
*   **Impulso:** $\vec{J} = \vec{F} \Delta t = \Delta \vec{p}$ (Cambio di moto causato da una forza per un tempo).
*   **Conservazione della Quantità di Moto:** In un sistema isolato (nessuna forza esterna), $\vec{p}_{tot, i} = \vec{p}_{tot, f}$.
*   **Urti Elastici (1D):** Conservano sia quantità di moto che energia cinetica.
    *   $m_1 v_{1i} + m_2 v_{2i} = m_1 v_{1f} + m_2 v_{2f}$.
    *   $\frac{1}{2}m_1 v_{1i}^2 + \frac{1}{2}m_2 v_{2i}^2 = \frac{1}{2}m_1 v_{1f}^2 + \frac{1}{2}m_2 v_{2f}^2$.
    *   **Se $m_2$ è ferma:** $v_{1f} = \frac{(m_1 - m_2)v_{1i}}{m_1 + m_2}$; $v_{2f} = \frac{2m_1 v_{1i}}{m_1 + m_2}$.
*   **Urti Perfettamente Anelastici:** I corpi rimangono uniti. Conserva solo la quantità di moto.
    *   $v_f = \frac{m_1v_{1i} + m_2v_{2i}}{m_1 + m_2}$ (velocità finale comune).

---

### 3. LAVORO ED ENERGIA
Il metodo più efficace per risolvere problemi complessi confrontando due istanti (iniziale e finale).

*   **Lavoro ($W$):** $W = F \cdot s \cdot \cos\theta$ (Energia trasferita da una forza durante uno spostamento).
*   **Energia Cinetica ($K$):** $K = \frac{1}{2}mv^2$ (Energia posseduta da un corpo perché è in movimento).
*   **Energia Potenziale Gravitazionale ($U_g$):** $U_g = mgh$ (Energia "accumulata" grazie all'altezza).
*   **Energia Potenziale Elastica ($U_e$):** $U_e = \frac{1}{2}kx^2$ (Energia accumulata in una molla compressa o tesa).
*   **Conservazione dell'Energia Meccanica:**
    *   **Senza attrito:** $E_{mecc, i} = E_{mecc, f}$ (L'energia totale non cambia, si trasforma solo da potenziale a cinetica e viceversa).
    *   **Con attrito:** $E_{mecc, f} = E_{mecc, i} - |W_{attrito}|$ (Una parte dell'energia viene persa per colpa dell'attrito).

---

### 4. TERMODINAMICA
Studia gli scambi di calore e lavoro nei gas.

*   **Legge dei Gas Perfetti:** $PV = nRT$.
    *   **Calcolo del Volume (Corretto):** **$V = \frac{nRT}{P}$** (Se cerchi il volume iniziale $V_i$, devi dividere per la pressione iniziale $P_i$).
*   **Calorimetria:**
    *   **Calore sensibile:** $Q = cm\Delta T$ (serve per cambiare la temperatura senza cambiare stato).
    *   **Capacità termica:** $C = cm$.
    *   **Calore latente:** $Q = mL$ (serve per il cambio di stato a temperatura costante).
    *   **Fusione / solidificazione:** $Q = mL_f$.
    *   **Vaporizzazione / condensazione:** $Q = mL_v$.
*   **Primo Principio della Termodinamica:** **$\Delta E_{int} = Q + W_{sul\_gas}$**.
    *   **Cosa fa:** È il principio di conservazione dell'energia per i gas. Dice che la variazione di energia interna di un gas ($\Delta E_{int}$) dipende dal calore ricevuto o ceduto ($Q$) e dal lavoro meccanico fatto schiacciando o espandendo il gas ($W$).
*   **Segni fondamentali:**
    *   **Lavoro ($W$):** Se comprimi il gas (volume diminuisce), $W$ è **positivo** (dai energia al gas). Se il gas si espande, $W$ è **negativo** (il gas consuma la sua energia per spingere).
    *   **Calore ($Q$):** Positivo se entra nel gas, negativo se esce (raffreddamento).
*   **Trasformazioni comuni:**
    *   **Isocora ($V$ cost):** $W = 0 \implies \Delta E_{int} = Q = n c_v \Delta T$.
    *   **Isoterma ($T$ cost):** $\Delta E_{int} = 0 \implies Q = -W = nRT \ln(V_f/V_i)$.
    *   **Isobara ($P$ cost):** $W = -P \Delta V$.
*   **Rendimento:** $e = \frac{W_{tot}}{Q_{assorbito}}$ (Quanto calore viene effettivamente trasformato in lavoro utile).

**Costanti e valori utili per gli esercizi:**

*   **Gravità:** $g \approx 9.8 \, m/s^2$.
*   **Costante dei gas:** $R = 8.314 \, J/(mol\cdot K)$.

---

### 5. FLUIDI
*   **Densità:** $\rho = \frac{m}{V}$ (massa per unità di volume, kg/m³).
*   **Pressione:** $P = \frac{F}{A}$ (forza per unità di area, Pa).
    *   **Pressione atmosferica:** $P_{atm} = 1.013 \times 10^5 \, Pa \approx 1 \, atm$.
*   **Principio di Pascal:** Una pressione applicata a un fluido si trasmette uniformemente in tutte le direzioni.

---

### 6. ELETTROMAGNETISMO E CIRCUITI
**Elettrostatica:**
*   **Legge di Coulomb:** $F = k \frac{q_1 q_2}{r^2}$ (forza tra due cariche; $k = 8.99 \times 10^9 \, N \cdot m^2/C^2$).
*   **Campo Elettrico:** $\vec{E} = \frac{\vec{F}}{q} = k \frac{Q}{r^2}$ (forza per unità di carica di prova).
*   **Potenziale Elettrico:** $V = \frac{U}{q} = k \frac{Q}{r}$ (energia per unità di carica).
*   **Differenza di potenziale (Tensione):** $U = V_A - V_B$ (lavoro per spostare 1 C da B ad A).

**Condensatori:**
*   **Capacità:** $C = \frac{Q}{V}$ (rapporto tra carica e tensione, Farad).
*   **Capacità di un condensatore a piastre:** $C = \frac{\varepsilon_0 \varepsilon_r A}{d}$ (dipende dall'area delle piastre e dalla distanza).
*   **Energia immagazzinata:** $E = \frac{1}{2}CV^2 = \frac{1}{2}\frac{Q^2}{C}$.
*   **Condensatori in serie:** $\frac{1}{C_{tot}} = \frac{1}{C_1} + \frac{1}{C_2} + \ldots$ (capacità diminuisce).
*   **Condensatori in parallelo:** $C_{tot} = C_1 + C_2 + \ldots$ (capacità si somma).

**Circuiti Elettrici:**
*   **Corrente:** $I = \frac{Q}{t}$ (Ampere, A).
*   **Prima Legge di Ohm:** $V = RI$ (Tensione = Resistenza × Corrente).
*   **Resistenza:** $R = \rho \frac{l}{A}$ (dipende dal materiale, lunghezza e sezione).
*   **Potenza Elettrica:** $P = VI = I^2 R = \frac{V^2}{R}$ (energia per unità di tempo, Watt).
*   **Resistenze in serie:** $R_{tot} = R_1 + R_2 + \ldots$ (si sommano).
*   **Resistenze in parallelo:** $\frac{1}{R_{tot}} = \frac{1}{R_1} + \frac{1}{R_2} + \ldots$ (conduttanza si somma).

---

### 7. GLOSSARIO DEI SIMBOLI
*   **$a$:** Accelerazione ($m/s^2$)
*   **$C$:** Capacità elettrica (Farad, F).
*   **$c, c_v, c_p$:** Calore specifico (generico, a volume costante, a pressione costante).
*   **$E_{int}$:** Energia interna (energia totale "nascosta" nelle molecole del gas).
*   **$E$:** Energia (Joule, J).
*   **$f, f_d, f_s$:** Frequenza; forza di attrito dinamico e statico.
*   **$F_c$:** Forza centripeta ($N$).
*   **$g$:** Gravità ($\approx 9.8 \, m/s^2$).
*   **$h$:** Altezza ($m$).
*   **$I$:** Corrente elettrica (Ampere, A).
*   **$k$:** Costante della molla ($N/m$); costante di Coulomb ($8.99 \times 10^9 \, N \cdot m^2/C^2$).
*   **$n$:** Numero di moli; indice di rifrazione.
*   **$P$:** Pressione ($Pa$); Potenza ($W$).
*   **$p$:** Quantità di moto ($kg \cdot m/s$).
*   **$q, Q$:** Carica elettrica (Coulomb, C).
*   **$R$:** Resistenza ($\Omega$); Costante dei gas ($8.314 \, J/mol \cdot K$).
*   **$r$:** Raggio; resistenza interna.
*   **$T$:** Temperatura (Kelvin, sempre per i gas! $T_K = T_C + 273.15$).
*   **$t$:** Tempo ($s$).
*   **$V$:** Volume ($m^3$); Tensione/Potenziale ($V$).
*   **$v$:** Velocità ($m/s$); $v_x, v_y$ componenti.
*   **$W$:** Lavoro ($J$); Energia ($J$).
*   **$\alpha$:** Angolo.
*   **$\omega$:** Velocità angolare ($rad/s$).
*   **$\theta$:** Angolo di inclinazione.
*   **$\rho$:** Densità ($kg/m^3$); Resistività ($\Omega \cdot m$).
*   **$\mu$:** Coefficiente di attrito (statico $\mu_s$ o dinamico $\mu_d$).
*   **$\varepsilon$:** Forza Elettromotrice (FEM, $V$).

---

### 8. CONVERSIONI RAPIDE
*   **Pressione:** $1 \, atm = 1.013 \times 10^5 \, Pa$.
*   **Volume:** $1 \, Litro = 0.001 \, m^3$.
*   **Velocità:** da $km/h$ a $m/s \implies$ **Dividi per 3.6**.
*   **Energia:** $1 \, cal = 4.186 \, J$.