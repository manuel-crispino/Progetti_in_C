section .bss
    ; Sezione non inizializzata: riserva spazio in memoria senza assegnare valori iniziali.
    ; Qui viene definito un buffer per contenere il nome dell'utente.
    name resb 100       ; Riserva 100 byte per il nome dell'utente (max 100 caratteri)

section .data
    ; Sezione dati inizializzata: contiene stringhe e valori predefiniti usati nel programma.
    
    prompt db "Enter your name: ", 0  ; Stringa di prompt per richiedere il nome
    prompt_len equ $ - prompt         ; Calcola la lunghezza della stringa automaticamente

    hello db "Hello, ", 0             ; Prefisso del messaggio di saluto
    hello_len equ $ - hello           ; Lunghezza della stringa "Hello, "

    newline db 10, 0                  ; Carattere di newline per andare a capo
    newline_len equ $ - newline       ; Lunghezza del carattere newline

section .text
    ; Sezione del codice: contiene le istruzioni eseguibili del programma.

    global _start   ; Definisce il punto di ingresso del programma
    align 16        ; Allinea il codice a 16 byte per ottimizzazione CPU

_start:
    ; 1. Stampa il messaggio "Enter your name: "
    mov rax, 0x2000004    ; syscall write (macOS)
    mov rdi, 1            ; File descriptor 1 = standard output (stdout)
    lea rsi, [rel prompt] ; Carica l'indirizzo della stringa "Enter your name: "
    mov rdx, prompt_len   ; Specifica la lunghezza del messaggio
    syscall               ; Esegue la chiamata di sistema per scrivere su stdout

    ; 2. Legge il nome dell'utente da input
    mov rax, 0x2000003    ; syscall read (macOS)
    mov rdi, 0            ; File descriptor 0 = standard input (stdin)
    lea rsi, [rel name]   ; Indirizzo del buffer dove salvare l'input
    mov rdx, 100          ; Numero massimo di caratteri da leggere
    syscall               ; Esegue la chiamata di sistema per leggere da stdin

    ; 3. Rimuove il carattere newline (\n) sostituendolo con un terminatore di stringa (0)
    mov rcx, rax          ; rcx ora contiene il numero di caratteri letti
    lea rdi, [rel name]   ; rdi punta all'inizio del buffer "name"
    add rdi, rcx          ; Sposta rdi all'ultimo carattere letto
    dec rdi               ; Punta al carattere precedente (che dovrebbe essere \n)
    mov byte [rdi], 0     ; Sostituisce il \n con un terminatore di stringa (0)

    ; 4. Stampa "Hello, "
    mov rax, 0x2000004    ; syscall write (macOS)
    mov rdi, 1            ; stdout
    lea rsi, [rel hello]  ; Indirizzo della stringa "Hello, "
    mov rdx, hello_len    ; Lunghezza della stringa
    syscall               ; Scrive "Hello, " su stdout

    ; 5. Stampa il nome inserito dall'utente
    mov rax, 0x2000004    ; syscall write (macOS)
    mov rdi, 1            ; stdout
    lea rsi, [rel name]   ; Indirizzo del nome inserito
    mov rdx, rcx          ; Usa il numero di caratteri letti (senza il newline)
    syscall               ; Scrive il nome su stdout

    ; 6. Stampa un newline (per andare a capo)
    mov rax, 0x2000004    ; syscall write (macOS)
    mov rdi, 1            ; stdout
    lea rsi, [rel newline]; Indirizzo del carattere newline
    mov rdx, newline_len  ; Lunghezza del newline
    syscall               ; Scrive il newline su stdout

    ; 7. Termina il programma
    mov rax, 0x2000001    ; syscall exit (macOS)
    xor rdi, rdi          ; Codice di uscita = 0 (successo)
    syscall               ; Termina il programma
