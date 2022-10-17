```
   ___ _ __ _   _ ___| |_
  / __| '__| | | / __| __|
 | (__| |  | |_| \__ \ |_
  \___|_|   \__,_|___/\__|
```

'crust' - Learn the basics of Rust and C side by side.

Here, I'll document my hurdles in learning Rust and utilise whatever knowledge I have in C. This repository must not be treated as a base for the upcoming publication of a top-selling ePub for the Rust programming language. As of today, 2022/10/14, the tutorial 'crust' is in its early stages. It is expected that 'crust' will undergo perennial refinements.
I'll try to keep things as simple as possible so that anyone within the age group 10 to 15 can learn elementary-level Rust and C. Adults should also find the tutorial easier than the programming books recommended in their high school/pre-university curriculum. Things are expected to be short since I may have to look back. If possible, the learning sessions will be translated into the Bengali language. Auto-translation software will be used to translate the documents into Bengali. Grammar-checking services will be used occasionally in the English versions. Please create a pull request in the GIT branch 'rough' if you want to improve the learning experience or if you have a suggestion.

Your active participation might help hundreds of newcomers to learn the concept of coding. The flow of logic and algorithms are almost the same across programming languages. I want you to participate. I'm not interested in any indirect involvement.

Don't expect any long introduction, since I don't have time for that. I have to keep things short. Don't expect eBooks in ePub or HTML format at the moment. However, an auto-generated HTML version of the documents will be provided from time to time.

# Setting up the Toolchains and IDEs

Please have a look at [Tulu-C-IDE](https://github.com/Pinaki82/Tulu-C-IDE).

To keep things simple and make the journey a hands-on experience, do not use the autocompletion feature in any of the editors mentioned. However, you are allowed to use those editors mentioned with their configurations ([Tulu-C-IDE](https://github.com/Pinaki82/Tulu-C-IDE) and [Tulu-C-IDE Helix Edition](https://github.com/Pinaki82/Tulu-C-IDE/tree/main/_helix_edition)). You can look at the autocompletion hints, but type the code yourself. In my opinion [Tulu-C-IDE Helix Edition](https://github.com/Pinaki82/Tulu-C-IDE/tree/main/_helix_edition) will be a better choice for learning. Type the codes yourself. Or else, you'll learn nothing. I mean, be a little honest with yourself. Don't cheat yourself.

The more you will type the code yourself, the less you'll forget what you've learned. If you are on MS Windows, try [Geany](https://www.geany.org/download/releases/) or [Notepad++](https://notepad-plus-plus.org/downloads/). On Linux systems with GTK-dependent Desktop Environments, such as GNOME, XFCE, MATE, Cinamon etc., you can use Geany. If you are using a Linux distribution that ships a QT-based Desktop Environment, for example, KDE, LXQT etc., try [Kate](https://kate-editor.org/en-gb/get-it/). Like [Geany](https://www.geany.org/download/releases/), [Kate](https://kate-editor.org/en-gb/get-it/) can be installed on MS Windows.

# Build & Run

Download the entire repository in a Zip archive. Extract the zipped file somewhere on your hard drive. Remember that the location (path to the directory where you want to extract the archive) must not contain any space or special character other than underscores (i.e., `_`). Examples: `G:\test_n_practice\crust`, `/home/YOUR_USERNAME/crust/`.

# Our Strategy

Enter `crust/` from the graphical file manager. R-Click inside the folder and find the option to open a terminal emulator there. Open two terminal emulators if you are on Linux, one for editing the source file with Helix and the other for compiling/executing the code. Type `ls` (Linux) or `dir` (Windows) to see the contents of the folder. You'll find `runc.sh` that you can use on most Linux systems to build/run the code. Use `runc.BAT` on MS Windows machines. You don't have to open a separate console. Double-click on the DOSBATCH script and it will take care of the build process.

```shell
# Change the execution permission parameter of the script.
chmod +x runc.sh
# Run the script.
./runc.sh
```

**Modify the files `main.c` and `main.rs` in `crust/code/testbed/src/` along the way**. You'll keep backups in a plain text file.

Find a file `exercises.txt`. After learning a particular topic, write the code and notes to `exercises.txt` on the topic you covered.

## Table of Contents

- [Hello, World! The Skeleton and its Anatomy](#hello-world-the-skeleton-and-its-anatomy)
  - [Comments](#comments)
  - [Code Blocks](#code-blocks)
  - [The main() Function](#the-main-function)
  - [Include Directives](#include-directives)
  - [Functions](#functions)
  - [Macros](#macros)
    - [The way the compiler works:](#the-way-the-compiler-works)
  - [Statements and the Statement Terminator](#statements-and-the-statement-terminator)
- [Receiving Inputs](#receiving-inputs)
- [The Character Set](#the-character-set)
- [Reserved Keywords](#reserved-keywords)
- [Constants, Variables, and Keywords](#constants-variables-and-keywords)
  - [Constants](#constants)
  - [Rules and Conventions for Declaring Constants](#rules-and-conventions-for-declaring-constants)
- [Data Types and Variables](#data-types-and-variables)
- [Data Types](#data-types)
- [Variables](#variables)
- [Constants](#constants)
- [Characters and Strings](#characters-and-strings)
- [Operators](#operators)
  - [Arithmetic Operators](#arithmetic-operators)
  - [Relational Operators](#relational-operators)
  - [Logical Operators](#logical-operators)
  - [Rust's Bitwise Operators & Operations On Bits in C](#rusts-bitwise-operators--operations-on-bits-in-c)
- [Rules for Constructing Instructions](#rules-for-constructing-instructions)
- [Decision Control](#decision-control)
- [Loops & Flow control](#loops--flow-control)
- [Case Control](#case-control)
- [A Brief Description of Pointers (C) and Slices (Rust)](#a-brief-description-of-pointers-c-and-slices-rust)
- [Functions and Pointers](#functions-and-pointers)
  - [Recursion](#recursion)
- [Tuple - A Rust-Specific Compound Data Type](#tuple---a-rust-specific-compound-data-type)
- [Array](#array)
- [More on Arrays, Tuples, and Vectors](#more-on-arrays-tuples-and-vectors)
- [Strings and Vectors](#strings-and-vectors)
- [The Preprocessor in C](#the-preprocessor-in-c)
- [Ownership and Borrowing in Rust](#ownership-and-borrowing-in-rust)
- [Ownership](#ownership)
- [Borrowing](#borrowing)
- [Structures](#structures)
- [Unions](#unions)
- [Enums](#enums)
- [Modules](#modules)
- [Collections in Rust and The C Standard Library](#collections-in-rust-and-the-c-standard-library)
- [Error Handling in Rust](#error-handling-in-rust)
- [Rust's Generic Data Types](#rusts-generic-data-types)
- [Console Input and Output](#console-input-and-output)
- [Operation on Files (Input/Output)](#operation-on-files-inputoutput)
- [Type Inference and Type Casting](#type-inference-and-type-casting)
- [Renaming Data Types and Typedefs](#renaming-data-types-and-typedefs)
- [Typecasting](#typecasting)
- [Bit Fields](#bit-fields)
- [Pointers to Functions](#pointers-to-functions)
- [Functions Returning Pointers](#functions-returning-pointers)
- [Functions with Variable Number of Arguments](#functions-with-variable-number-of-arguments)
- [Unions](#unions-1)
- [Union of Structures](#union-of-structures)
- [Package Manager](#package-manager)
- [Iterator and Closure](#iterator-and-closure)
- [Smart Pointers](#smart-pointers)
- [Concurrency](#concurrency)
- [fork(), exec(), pthreads(), Multithreaded Programming](#fork-exec-pthreads-multithreaded-programming)
- [Copyright Notice:](#copyright-notice)
  - [MIT-0 (The MIT No Attribution license):](#mit-0-the-mit-no-attribution-license)

# Hello, World! The Skeleton and its Anatomy

C:

```c
#include <stdio.h> // Inclusion of header files.
#include <stdlib.h>
#include <string.h>
#include <math.h>

// This is how we write a single-line comment.

/* This line is also a single-line comment. */

/*
   This is
   a
   multi-line
   comment
*/

int main(int argc, char *argv[]) { // The compulsory main() function.
  printf("Hello, C!\n"); /* printf(),
  a function that outputs formatted strings to the console. */
} // End of the code block (here, the block is the function main()).
```

Rust:

```rust
// Notice that you don't need to include a header file.
fn main() { // main() is a compulsory function even in Rust.
    println!("Hello, world!"); /* println!() is a macro
                      which is used to send formatted strings
                      to the console.
                      Notice that this line is also
                      a multi-line comment.
                    */
} // End of the code block (here, the block is the function main()).
```

## Comments

Comments are areas of code ignored by the compiler.

One who writes the code keeps pieces of information under comments as hints for what the code does in a specific section so that the logic of the code becomes easier to understand and stays maintainable in the future.

Comments in both C and Rust are enclosed within `/* */`. Another style of writing a single-line comment is to write `//` before writing the comment. `// Single-line Comment`. Anything after the `//` part is ignored by the compiler. Usually, `// comments` are used as End Of The Line Comments or simply 'Line Comments'. We use `//` where we don't need to write any code after the comment part. Whereas, `/* */` can be used as inline comments, e.g.,

```rust
fn /* comment */ main() {

}
```

```rust
// Line comments which go to the end of the line.
```

```rust
/* Single-line/Multi-line/Inline comment */
```

```rust
fn main() { //main() is a compulsory function even in Rust (a comment indeed).


    // ...
    // ...
}
```

Multi-line Comments or Single-line/Multi-line/Inline/Universal Comments:

Comments enclosed within `/* */` can be split across lines.

```rust
/*
   This is
   a
   multi-line
   comment
*/
```

Doc comments in Rust:
Doc comments are parsed into HTML library documentation:

```rust
    /// Generate library docs for the following section.
    //! Generate library docs for the enclosing section.
```

We will restrict ourselves to 1) End Of The Line Comments, `//` and 2) Multi-line/Universal Comments, `/* */`.

## Code Blocks:

A block of code or Code Block is a lexical structure of instructions grouped together comprising declarations, operators, and statements. Foxed?

Don't be! For now, remember that a code block is something grouped within brackets, e.g., `{}`.

```rust
{ // an example of the start of a block of code

} // an example of the end of a block of code
```

Simply,

```rust
{
}
```

In our Rust Hello World example,

```rust
fn main () {
 // ...
 // ...
}
```

Here, the function `main()` keeps its set of instructions within a block of second brackets `{}`.

## The main() Function:

In C & Rust, `main()` is the driving force of all programs. Every program that executes must have a `main()` function that initialises the program execution.

All major programs you run on your machine are compiled from several source files. Each source file may contain thousands of lines of code. However, the function `main()` initialises the program execution. `main()` serves as an Entry Point to the program's startup.

The `main()` appears only once, no matter how large the project is. In case you are isolating parts of the program into multiple shared libraries (*.dll or *.so), each shared library can be driven by its individual driving function `DllMain()`. On the other hand, it is not mandatory to create a DLL Entry Point for creating a shared library. We will cover the creation and use of Shared Libraries and Static Libraries in C later.

```c
#include <windows.h>

BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // handle to DLL module
    DWORD fdwReason,     // reason for calling function
    LPVOID lpvReserved )  // reserved
{
  // Example code for a DLL Entry Point function.
  // Look here for more info:
  // https://learn.microsoft.com/en-us/windows/win32/dlls/dllmain
}
```

For now, remember that every program you write needs a `main()` function.

## Include Directives:

`#include <stdio.h>` includes a text file `stdio.h` containing some routines, such as text input/output to the console. It (`stdio.h`) is basically a plaintext source file. `#include <>` is used to attach source codes. It is called the Include Directive in C. The Include Directive is also a **macro**. We will visit the section of macros later. We will have to revisit it quite a few times.

What does the file `stdio.h` do here, should be our question at the moment. It contains routines for text input/output to the console and some other routines. Compiler writers supply pre-defined routines prescribed by the ISO C standardisation committee for common tasks. Libraries outside the Standard C Library are also used for special purposes, such as Graphics, image/video processing, Graphical User Interface, dealing with intricate mathematical problems, scientific/business application programming etc. In our Hello World example in C, we used the pre-defined function `printf()` for text output to the console.

Notice that we didn't include any standard library header like `stdio.h` in our Rust Hello World program.

## Functions:

Functions are called the building blocks of programs. A function contains a set of routines to accomplish a particular task. Think of a car assembly line where every section plays different roles, and those who work in each department in the assembly line take their own part, making each department a complete set but also an independent part of the entire workforce. Think of functions as departments in that assembly line. Functions can also be compared to Bricks that are used in construction works. Your room contains hundreds of bricks.

The function `pow(x,y)` returns `x` raised to the power of `y` i.e. `x^y` (`x` to the power `y`). `pow()` is declared and defined in the C standard library `math.h`.

We included `stdio.h` to call the function `printf()`. It is used here for sending text output to the console.

## Macros:

**MACRO**: The Search-n-Replace utility in the compilers.

To be precise, 'Macros' are a group of characters to be replaced by the compiler with another predefined set of characters at the stage known as 'Preprocessor'. Macros and Preprocessors will be discussed later.

```c
#define ADD_TWO_NUM (a, b) (a) + (b)
```

```c
#defile MAX_VALUE 1000
```

Macros in C always start with the symbol `#`.

```c
ADD_TWO_NUM(a, b) (a) + (b)
```

```c
ADD_TWO_NUM(8, 3)
```

```c
#include <stdio.h>

#define ADD_TWO_NUM(a, b) (a) + (b)

int main() {
  int u = 2;
  int v = 3;
  printf("%d\n", ADD_TWO_NUM(u, v));
  return 0;
}
```

```
gcc test.c -o test.exe
```

```
test.exe
```

```
5
```

**How macros get expanded:**

```
gcc -save-temps -c test.c
```

```
gcc -E test.c > test.i
```

`test.i`

```c
# 5 "test.c"
int main() {
  int u = 2;
  int v = 3;
  printf("%d\n", (u) + (v));
  return 0;
}
```

Look how the macro `ADD_TWO_NUM(a, b)` got expanded to `(u) + (v)`. Somewhat similar to a search-n-replace utility!

---

### The way the compiler works:

**The Four Stages of Compilation in C:**

Compilation:
Compile is a process of transforming source codes into machine language that computers speak. The process of compilation passes through four stages.

1) Preprocessor (Compiler-generated Intermediate C/C++ File, `test.c`->`test.i`.)

2) Compiler (Assembly Language Code, `test.i`->`test.s`.)

3) Assembler (Assembly Language Code to Relocatable Object Code, `test.s`->`test.o`.)

4) Linker (All Relocatable Object Code Files to Machine-Readable Native Executable Code, `test.o`->`test.exe`.)

**Compilers' primary job:** A Compiler is a program/piece of software/utility/application that turns source codes into machine-native binary executable files.

Extra Features: Beside performing designated task of translating source codes into machine native executable files, compilers may provide other facilities such as error checking, detection of runtime error, memory leak detection, Language Server Protocol for autocompletion etc.

**Stage 1 (Preprocessor):**

```
gcc -E code.c > code.i
```

In this stage, the compiler toolchain performs the following tasks:

1. Comment stripping: The compiler toolchain strips all comments and replaces them with single spaces.

2. Header inclusion and producing text blobs: The compiler toolchain attaches (includes (`#include< >`)) the instructions written in the header files (`*.h`) and creates a single blob of text.

3. Macro expansion: The compiler toolchain expands predefined macros.

Here, in this stage, the compiler takes all source files and generates individual intermediate text blobs (`*.i`). Those blobs contain routines declared in header files attached to your source codes using the include directive `#include < >`.

**Stage 2 (Compiler):**

```
gcc -S code.c > code.s
```

In this stage, the compiler toolchain transforms the preprocessed text blobs (`*.i`) into Assembly Language codes (`*.s`).

**Stage 3 (Assembler) :**

```
gcc -S code.c > code.o
```

Now the toolchain translates the assembly language codes into relocatable object codes (`test.o`) that are still needed to be resolved by the linker. Relocatable Object Code files are not human-readable.

**Stage 4 (Linker):**

```
gcc code.c
```

In this stage, a separate program (in GCC/MSVC) in the toolchain called "Linker" takes all the Relocatable Object Code (`*.o`) files and semi-compiled routines (functions etc.) from externally linked static/dynamic libraries (GUI, Graphic, Image Processing, Compression, Cryptography etc.). The linker must be told to search for those semi-compiled external files from specific locations along with the names of the libraries to be linked. We will come to Static and Dynamic Libraries later.

**A brief overview:**

**Preprocessor Stage:** For example, if your project contains three source files `one.c`, `two.c`, `three.c`, the compiler will first generate `one.i`, `two.i`, `three.i`. **Assembler Stage:** The compilation process will now pass through the Assembler which will translate the raw C codes (intermediate files, `*.i`) into Assembly Language code files. Namely, `*.s`. **Compiler Stage:** Then, those intermediate files will be converted to relocatable object code files `one.o`, `two.o`, `three.o`. **Linker Stage:** In the next stage, the compiler will search for object code files (semi-compiled) libraries you used in your project. By combining all relocatable object code files the compiler will produce a final executable file.

If you've set up your project to split the program into separate Shared Library files and executable files, then the final rendition will contain Shared Libraries and executable files.

Rust however works in a slightly different manner.

## [What does the Rust compiler do to your code](https://rustc-dev-guide.rust-lang.org/overview.html#what-the-compiler-does-to-your-code):

1) Invocation:

2) Lexing and Parsing:

3) High-Level Intermediate Representation (HIR) Lowering:

4) Mid-level Intermediate Representation (MIR) Lowering:

5) Code Generation:

---

Enough about macros and the working principles of compilers, let's come back to macros in Rust.

Here, in our Rust Hello World example, `println!()` is a macro. Unlike `printf()` in C, it is not a function.

Notice the NOT/ Exclamation mark (`!`) after `println`. In Rust, macros are denoted by an `!` mark at the end of the macro before using it. We don't have to look under the bonnet to discover how Rust expands `println` at the moment. What is crucial for us to know right now is the use of the `println!()` macro for text output in the console in Rust. One important note, text input/output is called **formatted string input/output** in C and Rust.

More about macros later.

## Statements and the Statement Terminator

```c
printf("%d\n", ADD_TWO_NUM(u, v));
```

```rust
println!("Hello, world!");
```

```
;
```

Every instruction/command in C/Rust is a Statement. The end of the statements must be denoted by a semicolon, `;`. A C/Rust function, a macro in Rust in a block of code, are examples of individual statements. Notice the use of semicolons in the upcoming chapters.

# Receiving Inputs

Let's Break Another Skeleton:

It will be easier to start with C.

Area of a Circle.

```c
/*
  A C program to calculate the area of a circle.
*/

// https://byjus.com/maths/area-of-circle/

#include <stdio.h>
#include <math.h>

#define PI 3.14 // 22/7 = 3.14 (approx.)

int main(void) {
  float radius = 0;
  float area = 0;
  printf("Type the value for the radius of the circle and hit Enter:\n");
  scanf("%f", &radius);
  printf("Radius = %f\n", (double)radius);
  area = (float)(PI * (pow((double)radius, 2))); // The formula: area = pi * r^2
  printf("Area = %f\n", (double)area);
  return 0;
}
```

The Rust version.

```rust
/*
  A Rust program to calculate the area of a circle.
*/

use std::io;

fn main() {
  println!("Type the value for the radius of the circle and hit Enter:");
  let mut user_submitted_radius = String::new();
  let mut radius: f32 = 0.0;
  let mut squired: f32 = 0.0;
  let mut area: f32 = 0.0;

  io::stdin().read_line(&mut user_submitted_radius)
             .ok()
             .expect("Couldn't read user input!");

  radius = user_submitted_radius.trim().parse().expect("Invalid user input!n");

  squired =  radius * radius;
  area = 3.14 * squired; // The formula: area = pi * r^2

  println!("Area = {}", area);
}
```

# The Character Set

# Reserved Keywords

## Constants, Variables, and Keywords

### Constants

### Rules and Conventions for Declaring Constants

# Data Types and Variables

## Data Types

## Variables

## Constants

## Characters and Strings

## Operators

### Arithmetic Operators

### Relational Operators

### Logical Operators

### Rust's Bitwise Operators & Operations On Bits in C

## Rules for Constructing Instructions

- Type Declaration Instruction

- Arithmetic Instruction

- Integer and Float Conversions

- Type Conversion in Assignments

- Hierarchy of Operations

- Associativity of Operators

# Decision Control

# Loops & Flow control

# Case Control

# A Brief Description of Pointers (C) and Slices (Rust)

# Functions and Pointers

## Recursion

# Tuple - A Rust-Specific Compound Data Type

# Array

# More on Arrays, Tuples, and Vectors

# Strings and Vectors

# The Preprocessor in C

# Ownership and Borrowing in Rust

## Ownership

## Borrowing

# Structures

# Unions

# Enums

# Modules

# Collections in Rust and The C Standard Library

# Error Handling in Rust

# Rust's Generic Data Types

# Console Input and Output

# Operation on Files (Input/Output)

# Type Inference and Type Casting

# Renaming Data Types and Typedefs

# Typecasting

# Bit Fields

# Pointers to Functions

# Functions Returning Pointers

# Functions with Variable Number of Arguments

# Unions

# Union of Structures

# Package Manager

# Iterator and Closure

# Smart Pointers

# Concurrency

# fork(), exec(), pthreads(), Multithreaded Programming

## Copyright Notice:

The tutorial '[crust](https://github.com/Pinaki82/crust.git)' is published under The MIT-0 licence.

A copy of the MIT-0 License can be found at

> https://spdx.org/licenses/MIT-0.html
> 
> Or,
> 
> https://opensource.org/licenses/MIT-0.
> 
> Or,
> 
> https://github.com/aws/mit-0

#### MIT-0 (The MIT No Attribution license):

```
MIT No Attribution

Copyright <YEAR> <COPYRIGHT HOLDER>

Permission is hereby granted, free of charge, to any person obtaining a copy of this
software and associated documentation files (the "Software"), to deal in the Software
without restriction, including without limitation the rights to use, copy, modify,
merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
```
