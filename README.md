# Creating Static and Dynamic Libraries

Libraries in programming are collections of precompiled code that provide specific functionality. They promote code reuse, modularity, and maintainability by allowing developers to use existing code instead of reinventing the wheel. Libraries save time and effort in software development.

## Static Libraries

Static libraries, also known as archive libraries, are bundled object files (.o) that are copied into the resulting executable.

### Steps to create a static library:

1. Write the library code: Create the source code files (e.g., .c or .cpp) containing the functions, classes, or resources for the library.

2. Compile the source files: Use a compiler (e.g., GCC) to compile the source files into object files.
```shell 
gcc -c mylibrary.c -o mylibrary.o
```

3. Bundle the object files: Use the `ar` command to bundle the object files into a static library file.

```shell 
ar rcs libmylibrary.a mylibrary.o
```

4. Link the library: When compiling a program that uses the static library, specify the library during compilation.

5. Execute the program: Run the executable program.



## Dynamic Libraries

Dynamic libraries, also known as shared libraries, are separate files (.so on Linux, .dll on Windows) that are linked at runtime.

### Steps to create a dynamic library:

1. Write the library code: Write the source code files (e.g., .c or .cpp) containing the functions, classes, or resources for the library.

2. Compile the source files: Compile the source files into position-independent object files (.o) by enabling position-independent code generation.

```shell 
gcc -c -fPIC mylibrary.c -o mylibrary.o
```
3. Create the dynamic library: Use the compiler's shared library options to create a dynamic library.

```shell 
gcc -shared -o libmylibrary.so mylibrary.o
```

On Windows, use the following command to create a dynamic link library (DLL):
```shell 
gcc -shared -o mylibrary.dll mylibrary.o
```

4. Link the library: When compiling a program that uses the dynamic library, specify the library during compilation.
```shell 
gcc myprogram.c -o myprogram -L. -lmylibrary
```

5. Execute the program: Run the executable program.
```shell 
./myprogram
```


That's it! You now have a step-by-step guide for creating both static and dynamic libraries.
