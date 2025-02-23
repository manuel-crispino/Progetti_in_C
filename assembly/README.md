# Programma Scritto in Assembly 

# Solo per MacOS (x86-64)

0x2000004 è il numero della syscall per l'operazione di scrittura (write) nel sistema operativo macOS (x86-64).

# Makefile
Ho create un makefile per facilitare lo script di Avvio, Build & Clean ; 

per avviare il programma solo su macOs eseguire il seguente comando dal terminale 
`bash`
make run 
``

# 🔹 Syscalls in macOS
Nei sistemi Linux, le syscall sono numerate in modo diverso rispetto a macOS. Per esempio, su Linux la syscall write ha il numero 1, mentre su macOS ha 0x2000004. Questo perché:

macOS usa il formato Mach-O per le eseguibili, e le syscall devono essere chiamate con un prefisso specifico.
Le syscall su macOS a 64-bit hanno il prefisso 0x2000000 seguito dal numero della syscall reale.

-------------------------------------------------------------------------------------
| Syscall	                               | macOS (x86-64)	        | Linux (x86-64) |
|------------------------------------------------------------------------------------|
| write (scrive su un file o stdout)	   |  0x2000004	            |     1          |
|------------------------------------------------------------------------------------|
| read (legge da un file o stdin)	       |  0x2000003	            |     0          |
|------------------------------------------------------------------------------------|
| exit (termina il programma)	           |  0x2000001	            |     60         |
--------------------------------------------------------------------------------------