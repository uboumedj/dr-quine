# 42 project: Dr Quine

The goal of this project is to make various **Quines**, i.e. programs that are able to print their source code (without looking at their own source file of course).

## Languages

* ASM
* C
* Python

## Colleen

This program will print it's own source code on the **standard output**.

## Grace

This program will **create a file** called Grace_kid.[s/c/py] and **write** it's source code inside.

## Sully

This program will **create a file**, named Sully_5. It will print it's own source code in the file, then **compile** (if necessary) and **execute** Sully_5. Sully_5 will create Sully_4 and so on,
until Sully_0. Each file will contain a perfect copy of the initial source code (except for the file's number).

## How to use

* The ASM and C versions include a Makefile that compiles the three programs
* The Python version can be executed with `python3 Colleen.py` for example
