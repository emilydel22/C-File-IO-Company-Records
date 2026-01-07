# C-File-IO-Company-Records

![Language](https://img.shields.io/badge/language-C-blue)
![Topic](https://img.shields.io/badge/topic-file%20I%2FO-brightgreen)
![Status](https://img.shields.io/badge/build-manual-lightgrey)

A C program that demonstrates **random-access file I/O** by reading **fixed-size company records** from a binary input file using `fseek()` + `fread()` and writing a clean, human-readable report to an output text file using `fprintf()`.

---

## What this project does

- Treats each company record as a fixed-size `struct`
- Jumps to specific records using `fseek()` (random access)
- Reads one record at a time with `fread()`
- Writes formatted fields (name, address, phone, rating, contact, etc.) to an output file
- Includes error handling (open/read/seek failures)

---

## Files

- `main 9.c` — source code (company-record reader + report writer)
- `Code+Output.jpg` — screenshot of code/output (for submission/report)
- `README.md` — this file

> If your repo also includes the input data file (binary), keep it in the repo root or document the expected file name in **Usage** below.

---

## Build & Run (Code::Blocks)

1. Open Code::Blocks  
2. Create a **Console application** (C)
3. Add `main 9.c` to the project
4. Build and Run

---

## Build & Run (GCC / Command Line)

```bash
gcc -Wall -Wextra -o company_records "main 9.c"
./company_records
