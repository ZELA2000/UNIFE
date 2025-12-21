### I. Limiti Notevoli e Gerarchie ($x \to 0$ o $x \to +\infty$)
| Funzione / Rapporto | Limite |
| :--- | :--- |
| $\frac{\sin(x)}{x}$ | $1$ | |
| $\frac{1 - \cos(x)}{x^2}$ | $1/2$ | |
| $\frac{e^x - 1}{x}$ | $1$ | |
| $\frac{\ln(1+x)}{x}$ | $1$ | |
| $\frac{b^x - 1}{x}$ | $\ln(b)$ | |
| **Gerarchia ($x \to +\infty$)** | $x^x \gg n! \gg b^x \gg x^\alpha \gg \log_b(x)$ | |
| **Rapporto Gerarchico** | $\frac{b^x}{x^\alpha} \to +\infty \quad (b>1, \alpha>0)$ | |


### II. Algebra delle Derivate ($f \to f'$)
| Operazione | Formula |
| :--- | :--- | 
| **Somma / Diff.** | $(f \pm g)' = f' \pm g'$ | |
| **Prodotto** | $(f \cdot g)' = f'g + fg'$ | |
| **Rapporto** | $\left(\frac{f}{g}\right)' = \frac{f'g - fg'}{g^2}$ | |
| **Reciproco** | $\left(\frac{1}{g}\right)' = -\frac{g'}{g^2}$ | |
| **Composta** | $(g \circ f)'(x) = g'(f(x)) \cdot f'(x)$ | |
| **Inversa** | $(f^{-1})'(y_0) = \frac{1}{f'(x_0)}$ | |
| **Retta Tangente** | $y = f(x_0) + f'(x_0)(x - x_0)$ | |


### III. Tabella di Conversione: Derivate e Integrali ($f \leftrightarrow f' \leftrightarrow \int f$)
| Funzione $f(x)$ | Derivata $f'(x)$ | Integrale (Primitiva) $\int f(x)dx$ | 
| :--- | :--- | :--- |
| $x^n$ | $nx^{n-1}$ | $\frac{x^{n+1}}{n+1}$ | |
| $x^{-n} = \frac{1}{x^n}$ | $-nx^{-n-1}$ | $\frac{x^{-n+1}}{-n+1}$ | |
| $x^\alpha$ | $\alpha x^{\alpha-1}$ | $\frac{x^{\alpha+1}}{\alpha+1}$ | |
| $\sqrt{x}$ | $\frac{1}{2\sqrt{x}}$ | $\frac{2}{3}x^{3/2}$ | |
| $e^x$ | $e^x$ | $e^x$ | |
| $b^x$ | $(\ln b) b^x$ | $\frac{b^x}{\ln b}$ | |
| $\ln\lvert x\rvert$ | $1/x$ | $x \ln x - x$ | |
| $\sin(x)$ | $\cos(x)$ | $-\cos(x)$ | |
| $\cos(x)$ | $-\sin(x)$ | $\sin(x)$ | |
| $\tan(x)$ | $1 + \tan^2(x) = \frac{1}{\cos^2(x)}$ | $-\ln\lvert\cos(x)\rvert$ | |
| $\arctan(x)$ | $\frac{1}{1+x^2}$ | $x \arctan x - \frac{1}{2}\ln(1+x^2)$ | |
| $\arcsin(x)$ | $\frac{1}{\sqrt{1-x^2}}$ | $x \arcsin x + \sqrt{1-x^2}$ | |


### IV. Taylor, De L'Hôpital e Estremi Locali
| Strumento | Formula | 
| :--- | :--- | 
| **Regola L'Hôpital** | $\lim \frac{f(x)}{g(x)} = \lim \frac{f'(x)}{g'(x)}$ | |
| **Polinomio Taylor** | $P_n(x) = \sum_{k=0}^n \frac{f^{(k)}(x_0)}{k!}(x-x_0)^k$ | |
| **Sviluppo $e^x$** | $e^x \sim 1 + x + \frac{x^2}{2} + \frac{x^3}{6} + \dots$ | |
| **Sviluppo $\sin(x)$** | $\sin(x) \sim x - \frac{x^3}{6} + \frac{x^5}{120} - \dots$ | |
| **Sviluppo $\cos(x)$** | $\cos(x) \sim 1 - \frac{x^2}{2} + \frac{x^4}{24} - \dots$ | |
| **Max Locale** | $\{f'(x_0)=0 \land f''(x_0)<0\}$ | |
| **Min Locale** | $\{f'(x_0)=0 \land f''(x_0)>0\}$ | |


### V. Formule per il Calcolo Integrale ($f' \to f$)
| Metodo | Formula |
| :--- | :--- | 
| **Newton-Leibniz** | $\int_a^b f(t)dt = F(b) - F(a)$ | |
| **Integraz. Parti** | $\int f(x)g'(x)dx = f(x)g(x) - \int f'(x)g(x)dx$ | |
| **Sostituzione** | $\int_c^d f(h(t))h'(t)dt = \int_{h(c)}^{h(d)} f(x)dx$ | |
| **Simmetria Dis** | $\int_{-c}^c f_{dispari}(x)dx = 0$ | |
| **Simmetria Par** | $\int_{-c}^c f_{pari}(x)dx = 2 \int_0^c f(x)dx$ | |
| **Fratti Semplici** | $\frac{1}{(x-x_1)(x-x_2)} = \frac{D_1}{x-x_1} + \frac{D_2}{x-x_2}$ | |
| **Composta Exp** | $\int_a^b e^{h(x)}h'(x)dx = e^{h(b)} - e^{h(a)}$ | |
## VI. Studio di una Funzione: Passi Fondamentali
1. **Dominio e Continuità:** Determinare l'insieme di definizione A e verificare se f∈C(A) (continuità su tutto il dominio)
.
2. **Limiti agli Estremi (A∞​):** Individuare i punti di accumulazione che non appartengono al dominio (x0​∈A∞​, inclusi ±∞) e calcolare i limiti per determinare il comportamento della funzione e gli eventuali asintoti
.
3. **Calcolo della Derivata Prima:** Determinare l'insieme A′ dei punti in cui la funzione è derivabile e calcolare f′(x)
.
1. **Si disegna il grafico**

---

***Buon Lavoro!***