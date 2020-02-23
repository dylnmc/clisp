# clisp

**yet another lisp implementation in C**

*for practice and learning*

## Build and Run

```sh
git clone https://github.com/dylnmc/clisp.git
cd clisp
make
./clisp
```

Make sure you have the `readline` library and are on linux. The make file uses
`clang` for compilation.

## Stages

### stage0

This stage is just a simple **repl**, or Read-Evaluate-Print Loop. The main loop calls
`READ()` which uses readline's `readline()` get user input in a sane manner. It
also uses readline's `add_history()` to save inputs for the session.

When the user types something and presses <kbd>Return</kbd>, the input is "*echo*ed" back.
For now, the input is not parsed into an AST (abstract syntax tree) nor even
tokenized.

The purpose of this stage is to get a basic repl working properly with no memory
leaks and make sure that the base repl for the future stages is solid.
