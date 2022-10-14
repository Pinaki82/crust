```
   ___ _ __ _   _ ___| |_
  / __| '__| | | / __| __|
 | (__| |  | |_| \__ \ |_
  \___|_|   \__,_|___/\__|
```

'crust' - Learn the basics of Rust and C side by side.

Here, I'll document my hurdles in learning Rust and utilise whatever knowledge I have in C. This repository must not be treated as a base for the upcoming publication of a top-selling ePub for the Rust programming language. As of today, 2022/10/14, the tutorial 'crust' is in its early stages. It is expected that 'crust' will undergo perennial refinements.
I'll try to keep things simple as much as possible so that anyone below the age of 15 can learn elementary-level Rust and C. Things are expected to be short since I may have to look back. If possible, the learning sessions will be translated into the Bengali language. Auto-translation software will be used to translate the documents into Bengali. Grammar-checking services will be used occasionally in the English versions. Please create a pull request in the GIT branch 'rough' if you want to improve the learning experience or if you have a suggestion.

Your active participation might help hundreds of newcomers to learn the concept of coding. The flow of logic and algorithms are almost the same across programming languages. I want you to participate. I'm not interested in any indirect involvement.

Don't expect any long introduction, since I don't have time for that. I have to keep things short. Don't expect eBooks in ePub or HTML format at the moment. However, an auto-generated HTML version of the documents will be provided from time to time.

# Setting up the Toolchains and IDEs

Please have a look at [Tulu-C-IDE](https://github.com/Pinaki82/Tulu-C-IDE).

To keep things simple and make the journey a hands-on experience, do not use the autocompletion feature in any of the editors mentioned. However, you are allowed to use those editors mentioned with their configurations ([Tulu-C-IDE](https://github.com/Pinaki82/Tulu-C-IDE) and [Tulu-C-IDE Helix Edition](https://github.com/Pinaki82/Tulu-C-IDE/tree/main/_helix_edition)). You can look at the autocompletion hints, but type the code yourself. In my opinion [Tulu-C-IDE Helix Edition](https://github.com/Pinaki82/Tulu-C-IDE/tree/main/_helix_edition) will be a better choice for learning. Type the codes yourself. Or else, you'll learn nothing. I mean, be a little honest with yourself. Don't cheat yourself.

# Build & Run

Download the entire repository in a Zip archive. Extract the zipped file somewhere on your hard drive. Remember that the location must not contain any space of special character other than underscores (i.e., `_`). Examples: `G:\test_n_practice\crust`, `/home/YOUR_USERNAME/crust/`.

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

# Hello, World! The Skeleton and its Anatomy

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

# Comments

# Receiving Inputs

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
