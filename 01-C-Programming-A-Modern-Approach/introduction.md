```lint``` checks a C program for errors in a host including suspicious combinations of types, unused variables,
unreachable code and nonsoportable code. It got its name from the way it picks up pieces of "fluff" from a program

"bounds-checkers" and "leak-finders" help find memory leaks that are dynamically allocated but never deallocated

---

For a C program, there's these 3 steps when code is being compiled

- Preprocessing: The program is being given to a preprocessor, which obeys commands that begin with # (directives)
- Compiling: The modified program now goes to the compiler, which translates it into machine code
- Linking: A linker combines the object code produced by the compiler with any additional code needed to yield a complete
executable program
