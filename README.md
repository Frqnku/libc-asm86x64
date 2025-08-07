# 🧠 ASM Libc — Reimplementation of C Standard Functions in x86_64 Assembly

This project is part of my curriculum at **42 Paris** and aims to reimplement some essential C standard library functions in x86_64 assembly to better understand how these low-level operations work.

## 🛠️ Implemented Functions

The following functions have been rewritten in assembly:

| Function     | Description                                              |
|--------------|----------------------------------------------------------|
| `ft_write`   | Writes to a file descriptor (`write`)                    |
| `ft_read`    | Reads from a file descriptor (`read`)                    |
| `ft_strlen`  | Calculates the length of a string (`strlen`)             |
| `ft_strcmp`  | Compares two strings (`strcmp`)                          |
| `ft_strcpy`  | Copies a string into another (`strcpy`)                  |
| `ft_strdup`  | Duplicates a string with memory allocation (`strdup`)    |

## 📁 Project Structure

```
asm-libc/
├── Makefile
├── main.c
├── asm/
│   ├── ft_write.s
│   ├── ft_read.s
│   ├── ft_strlen.s
│   ├── ft_strcmp.s
│   ├── ft_strcpy.s
│   └── ft_strdup.s
```

## 🔧 Compilation

The project is compiled using a `Makefile`. To compile the library into archive:

```bash
make
```

To compile the library with a main file:

```bash
make main
```

To clean object files:

```bash
make clean
```

To clean everything (binary, objects, etc.):

```bash
make fclean
```

To recompile from scratch:

```bash
make re
```

## ▶️ Running Tests

After compilation of libasm.a and main.c, use:

```bash
./libasm
```

The tests compare the results of the assembly functions with their standard C library equivalents.

## 💡 Learning Objectives

- Deepen understanding of x86_64 assembly
- Learn Linux system calls (syscall)
- Understand ABI (Application Binary Interface)
- Improve rigor in memory and register management

## 🖥️ Target Platform

- Architecture: `x86_64`
- OS: Linux only (uses Linux syscalls)
- Assembler: `nasm`

## ✅ Requirements

Make sure you have the following installed:

- `nasm` (Netwide Assembler)
- `gcc`
- A Linux environment (Ubuntu recommended)

## 📚 Useful Resources

- [Syscall table x86_64](https://blog.rchapman.org/posts/Linux_System_Call_Table_for_x86_64/)
- [Linux man pages](https://man7.org/linux/man-pages/)
- [x86_64 System V ABI](https://refspecs.linuxfoundation.org/)

## 🧑‍💻 Author

Project made by **Ugo 'Frqnku' Tiberto** — as part of an educational journey into assembly programming.

---
