# 🗺️ Map_C: Systems Programming & Low-Level Roadmap

Welcome to `map_c`. This repository is a structured, hands-on roadmap designed to master low-level computer science, C programming, and Unix system fundamentals from the ground up.

---

## 🧠 Curriculum & Core Concepts

Below is the breakdown of foundational concepts tracked in this repository, ranging from bit-level mechanics to compilation automation.

### 1. 🔢 Number Bases (`nmbrbase`)
* Handling conversions between **Binary**, **Octal**, **Decimal**, and **Hexadecimal**.
* Understanding how numbers are stored in memory (Two's Complement, Sign-Magnitude).

### 2. ⚡ Bit Manipulation (`bitmanipulation`)
* Direct bit operations using bitwise operators: `&` (AND), `|` (OR), `^` (XOR), `~` (NOT).
* Implementation of bitwise shifts (`<<`, `>>`), bitmasks, setting, clearing, and toggling specific bits.

### 3. 📂 C Headers & Modular Design (`headrs`)
* Structuring C programs across multiple files.
* Mastering header guards (`#ifndef`, `#define`, `#endif`) to prevent duplicate inclusion errors.

### 4. 🗃️ Static Libraries (`staticlibrary`)
* Compiling source files into reusable object files (`.o`).
* Bundling object files into a static library archive (`.a`) using the `ar rcs` command and linking against it.

### 5. 🛠️ Automation with Makefiles (`makefile`)
* Writing custom `Makefile` configurations to automate compilation chains.
* Utilizing variables (`CC`, `CFLAGS`), explicit targets, dependencies, and phonies (`clean`).

### 6. 💾 File Manipulation (`filemanipulation`)
* Low-level system-level I/O using Unix system calls (`open`, `read`, `write`, `close`).
* Standard C library stream operations (`fopen`, `fread`, `fwrite`, `fclose`).

---

## ⏳ Future Milestones (To Be Added)
As this roadmap expands, upcoming modules will cover:
* 🧠 **Pointers & Memory Layout:** Stack vs. Heap, pointer arithmetic, and `malloc`/`free`.
* 🏗️ **Data Structures from Scratch:** Linked lists, stacks, queues, and hash maps in C.
* 👥 **Process Control:** `fork()`, `exec()`, and basic inter-process communication (IPC).

---

## ⚙️ Quick Reference: How to Compile & Run

### Using a Manual Static Library Connection:
```bash
# 1. Compile your helper files into object code
gcc -c src/my_lib.c -o obj/my_lib.o

# 2. Package it into a static library
ar rcs lib/libmy_lib.a obj/my_lib.o

# 3. Compile the main program using your static library
gcc main.c -Llib -lmy_lib -o build/program
