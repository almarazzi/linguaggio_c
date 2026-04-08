# linguaggio_C_universita
---
## Introduzione
Questo repository è stato creato per scopi universitari e raccoglie esercizi, progetti e codice sviluppato nell’ambito del corso di Fondamenti di Informatica 1.
Gli esempi sono programmati in C e possono essere eseguiti utilizzando Visual Studio come ambiente di sviluppo.

L’obiettivo è fornire esempi pratici di algoritmi, strutture dati e simulazioni di problemi reali, utili per comprendere meglio i concetti affrontati a lezione.

---
# Indice
- [Problema_Esempio](#Problema_Esempio)
- [Massimo](#Massimo)
- [Multipli](#Multipli)
- [Quadrato della distanza](#Quadrato_della_distanza)
- [Ordine_di_grandezza](#Ordine_di_grandezza)
- [Cifre_Binarie](#Cifre_Binarie)
- [Selection_Sort](#selection_sort-select_sort)
- [Seno](#Seno)
- [Somma_Cifre](#Somma_Cifre)
- [Discriminante](#Discriminante)
- [Esponensiale](#Esponenziale)
- [Fattoriale](#Fattoriale)
- [Inverti_Cifre](#Inverti_Cifre)
- [Terna_Pitagoriga](#Terna_Pitagoriga)
- [Prossimo_Numero_Primo](#Prossimo_Numero_Primo)
- [Numero_Primo](#Numero_Primo)
- [Numeri_Felici](#Numeri_Felici)
- [Numeri_Cresenti](#Numeri_Cresenti)
- [Binario_BCD](#Binario_BCD)
- [Somma_Vettori](#Somma_Vettori)
- [LeggiFileCitta](#LeggiFileCitta)
---
# Problema_Esempio
 - La società BigBurger Inc. vuole vedere se è fattibile avere una sola 
persona al bancone sia a prendere gli ordini sia a servirli. In ogni 
BigBurger, i clienti arriveranno e si metteranno in fila. Quando arrivano 
alla cassa fanno il loro ordine, che sarà preparato e servito. Poi lasciano 
la fila e la prossima persona in fila sarà in grado di ordinare.

- Abbiamo bisogno di sapere quanto tempo un cliente può essere costretto 
ad aspettare prima di poter effettuare un ordine. 
- Dato un rapporto che elenca ogni cliente per una giornata tipo, vogliamo 
calcolare il tempo massimo di attesa del cliente. 

- Ogni cliente nel rapporto è caratterizzato da un orario di arrivo (misurato 
in minuti, dall’apertura del negozio) e una durata di servizio (il numero di 
minuti dall’ordine al servizio).
- Creare una funzione maxWait che riceve due puntatori a int (arrivi e 
servizio), che descrivono n clienti. La funzione restituisce il tempo 
massimo trascorso da un cliente tra arrivo e ordine. 

- Gli elementi corrispondenti di arrivi e servizio sono riferiti allo stesso 
cliente, e sono dati nell’ordine in cui arrivano al negozio (arrivi è in ordine 
non decrescente).
- Se più clienti arrivano contemporaneamente, essi accederanno alla fila 
assieme, nell’ordine indicato negli array.
---
# Massimo
- La funzione riceve due numeri interi a 8 bit con segno a e b e restituisce il valore massimo.
---
# Multipli
- La funzione riceve due numeri interi a 32 bit con segno a e b e restituisce 1 se a è un multiplo di b, altrimenti 0.
---
# Quadrato_della_distanza
- La funzione riceve le coordinate di due punti P1(x1,y1) e P2(x2,y2) restituise il quadrato della distanza tra due punti, ovvero D^2=(x1-x2)^2-(y1-y2)^2
---
 # Ordine_di_grandezza
- La funzione riceve un valore intero non negativo a 32 bit val e ritorna l'esponente della massima potenza del dieci contenuta in val
  ---
  # Cifre_Binarie
- La funzione riceve un valore intero non negativo a 32 bit val e un indice di posizione n e deve ritornare il bit di posizione n in val. Il bit meno significativo è quello di posizione 0, mentre il bit più significativo è quello di posizione 31.
---
  # Selection_Sort (`select_sort`)

![Selection Sort](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)  
*Animazione del Selection Sort (Fonte: Wikipedia)*

---

## Descrizione
`Select_Sort` è un algoritmo di ordinamento semplice che ordina una lista confrontando ogni elemento con tutti gli altri e posizionando l'elemento minimo nella posizione corretta.  

È ideale per apprendere i concetti base degli algoritmi di ordinamento, anche se non è efficiente per grandi dataset.

---

## Caratteristiche
- Ordinamento crescente (default) o decrescente (opzionale)
- Funziona su array
- Algoritmo **in-place** → non richiede memoria aggiuntiva
- Complessità:
  - Tempo: O(n²)
  - Spazio: O(1)

---

## Funzionamento

### Passaggi principali
1. Considera il primo elemento come minimo.
2. Confronta con tutti gli elementi successivi per trovare il minimo reale.
3. Scambia il minimo con il primo elemento.
4. Ripeti per il resto della lista fino al termine.

### Esempio visivo
Lista iniziale: `[64, 25, 12, 22, 11]`

| Passo | Lista corrente       | Azione                            |
|-------|--------------------|----------------------------------|
| 1     | `[64, 25, 12, 22, 11]` | Minimo=11 → scambia con 64        |
| 2     | `[11, 25, 12, 22, 64]` | Minimo=12 → scambia con 25        |
| 3     | `[11, 12, 25, 22, 64]` | Minimo=22 → scambia con 25        |
| 4     | `[11, 12, 22, 25, 64]` | Lista ordinata                    |
---
# Seno
- La funzione deve calcolare il valore di sen(x) utilizzando la seguente equazione:
-sin(x) = Σ (n=0 → ∞) [(-1)^n * x^(2n+1) / (2n+1)!]
-Il parametro x è un angolo espresso in radianti. Si ottiene una precisione sufficiente con almeno 20 iterazioni. Farne poi una versione in cui il numero di iterazioni non sia fissato a priori, ma si fermi una volta che il risultato non cambia più.
---
# Somma_Cifre
- La funzione deve restituire la somma delle cifre della rappresentazione in base 10 di x. Ad esempio, se x vale 123, la funzione deve restituire 6.
---
# Discriminante
- La funzione deve calcolare il discriminante dell'equazione di secondo grado la cui formula è:
- ax^2+bx+c=0
---
# Esponensiale
- La funzione deve calcolare il valore di e^x utilizzando la seguente equazione: e^x = Σ (n=0 → ∞) [x^n / n!]
- Nella formula l'iterazione prosegue fino all'infinito, ma nella pratica potete fare un numero limitato di iterazioni. Iniziate con 10 iterazioni eseguendo il debug e capendo che cosa succede. Poi trovate una soluzione che termini quando il risultato non cambia rispetto all'iterazione precedente, in modo simile a quanto visto a lezione per l'algoritmo della radice quadrata.
---
# Terna_Pitagoriga
- La funzione accetta 3 numeri interi senza segno e ritorna 1 se questi formano una terna pitagorica, ovvero se la somma dei quadrati di due di questi è pari al quadrato del numero rimanente, 0 altrimenti. Ad esempio, la terna 5,4,3 è una terna pitagorica, come anche 3,4,5 mentre 1,2,3 non lo è.
---
# Fattoriale
- La funzione riceve un valore intero non negativo a 8 bit val e deve ritornare il fattoriale di val.
---
# Numeri_Felici
- La funzione prende come input il valore num e ritorna 1 se il numero è felice, 0 se è infelice.
- Un numero felice è definito tramite il seguente processo: partendo con un qualsiasi numero intero positivo, si sostituisca il numero con la somma dei quadrati delle sue cifre, e si ripeta il processo fino a quando si ottiene 1 (dove ulteriori iterazioni porteranno sempre 1), oppure si entra in un ciclo che non include mai 1. I numeri per cui tale processo dà 1 sono numeri felici, mentre quelli che non danno mai 1 sono numeri infelici.
- È possibile dimostrare che, se nella sequenza si raggiunge il 4, il numero è infelice. Inoltre, la sequenza di ogni numero infelice raggiungerà sicuramente il numero 4. Possiamo estendere il concetto allo 0, che ovviamente genera la sequenza composta solo di 0 e quindi possiamo considerarlo infelice.
- Ad esempio, 7 è felice mentre 8 è infelice
---
# Numeri_Cresenti
- La funzione prende come input il valore x e ritorna true se il numero è crescente, false altrimenti.
- Un numero viene detto "crescente", se ogni cifra della sua rappresentazione in base 10 è seguita dalla cifra che ha valore successivo o è l'ultima del numero.
- Ad Esmpio:
123 → 1 è seguito da 2 (ok), 2 è seguito da 3 (ok), 3 è l’ultima cifra (ok) → è crescente
5 → 5 è l’ultima cifra (ok) → è crescente
124 → 1 è seguito da 2 (ok), 2 è seguito da 4 (errore) → non è crescente
---
# Inverti_Cifre
- La funzione accetta come parametro un numero intero non negativo e manda in output il numero ottenibile invertendo le cifre nella sua rappresentazione in base dieci.
- Ad esempio, dato il numero 123 la funzione deve ritornare il valore 321.
- Il valore in input sarà sempre minore di 1.000.000.000, quindi sempre rappresentabile in un unsigned int e invertibile.
---
# Numero_Primo
- La funzione riceve un valore intero non negativo a 32 bit val e restituisce 1 se val è un numero primo, 0 altrimenti.
---
# Prossimo_Numero_Primo
- La funzione deve ritornare il più piccolo numero primo maggiore di x.
- Ad esempio:
```c
se x=11 la funzione deve ritornare 13
se x=12 la funzione deve ritornare 13
se x=13 la funzione deve ritornare 17
se x=14 la funzione deve ritornare 17
```
---
# Binario_BCD
- La funzione accetta come parametro un numero intero non negativo minore di 10000 e lo ritorna codificato in Binary Coded Decimal (BCD).
- La codifica BCD è un modo comunemente utilizzato in informatica ed elettronica per rappresentare le cifre decimali in codice binario. In questo formato ogni cifra di un numero è rappresentata da un codice binario di quattro bit, il cui valore è compreso tra 0 (0000) e 9 (1001). Le restanti sei combinazioni non sono utilizzate. Per esempio, il numero 127 è rappresentato in BCD come la sequenza di bit 0001, 0010, 0111.
- Questa funzione impacchetta le 4 cifre di val dalla più significativa alla meno significativa in 16 bit (senza segno). Nel caso di 127 quindi produrrebbe 0000.0001.0010.0111, o in esadecimale (alla C) 0x0127. Cioè ogni cifra in base 10 viene convertita nella corrispondente cifra in base 16.
- Il numero 0 diventerebbe 0x0000, il numero 9999 diventerebbe 0x9999 e così via.
- Se la funzione riceve un numero maggiore di 9999 deve utilizzare solo le 4 cifre decimali meno significative.
---
# Somma_Vettori
- La funzione accetta come parametri due puntatori a vettori di double, arr1 e arr2, e un dato di tipo size_t che ne indica la dimensione, n. I due vettori hanno la stessa dimensione. La funzione deve restituire un puntatore ad un vettore allocato dinamicamente nell'heap, formato da n elementi di tipo double calcolati come la somma dei corrispondenti elementi di arr1 e arr2.
- arr1 e arr2 non saranno mai NULL e n sarà sempre maggiore di 0.
- esempio se arr1 = {1, 2, 3} e arr2 = {-1, 7, 14}, la funzione restituirà un puntatore a {0, 9, 17}.
---
# LeggiFileCitta

# Funzione `leggi_Citta` per la lettura di città da un file di testo
```c
struct citta* Leggi_Citta(const char* NomeFile, size_t* n)
```
## Descrizione

La funzione `leggi_Citta` legge un file di testo contenente informazioni su un elenco di città e le loro rispettive popolazioni, restituendo un array dinamico di strutture `citta` in cui ogni struttura contiene:
- Il nome della città (stringa C dinamica).
- La popolazione della città (intero senza segno a 32 bit).

Il formato del file di testo è il seguente:
- La prima riga contiene il numero totale di città.
- Ogni riga successiva contiene il nome della città e la popolazione separati da una virgola e uno spazio.

### Esempio di file di testo

Il file di testo deve essere strutturato come segue (ogni città su una riga separata):
```c
5
Milano, 181818
San Diego, 34568
Canada, 2098
sassuolo, 126
Prigniano, 25
```

In questo esempio:
- La prima riga (`5`) indica che ci sono cinque città nel file.
- Ogni riga successiva contiene il nome della città e la sua popolazione separati da una virgola.

## Definizione della struttura `citta`

La struttura `citta` è definita come segue:

```c
struct citta {
    char *name;       // Nome della città (lunghezza massima 255 caratteri)
    unsigned int population;  // Popolazione della città
};


