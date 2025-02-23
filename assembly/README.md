# 📌 Programma Assembly per macOS (x86-64)

Questo programma, scritto in Assembly, utilizza le syscall specifiche per macOS su architettura x86-64.

## 🖥️ Requisiti
- macOS con architettura **x86-64**
- Un assembler compatibile, come **nasm**
- Un linker, come **ld**

## 🔹 Syscalls in macOS vs Linux
Le syscall nei sistemi macOS e Linux sono numerate in modo diverso. Per esempio, la syscall `write` ha il numero **1** su Linux, mentre su macOS è **0x2000004**. Questo avviene perché macOS utilizza il formato **Mach-O**, che richiede un prefisso specifico per le syscall.

| Syscall       | macOS (x86-64) | Linux (x86-64) |
|--------------|--------------|---------------|
| `write` (scrive su stdout/file) | `0x2000004` | `1` |
| `read` (legge da stdin/file) | `0x2000003` | `0` |
| `exit` (termina il programma) | `0x2000001` | `60` |

## 📂 Makefile
Per semplificare la gestione del programma, è stato creato un **Makefile** con i seguenti comandi:

- **Compilazione e avvio**:
  ```bash
  make run
  ```
- **Pulizia dei file generati**:
  ```bash
  make clean
  ```

⚠ **Nota**: Questo programma è compatibile **solo** con macOS **x86-64**.

## 🚀 Esecuzione
Dopo aver eseguito `make run`, il programma verrà assemblato e avviato automaticamente.

---
📝 **Autore:** Manuel Crispino 
📅 **Ultimo aggiornamento:** 23/02/2025

