# Difference between C and C++

## Basics
- Use `g++` to compile your C++ code.
- Must include `iostreams` for input/output operations.
- Use `using namespace std;` to simplify your code.  We will describe more detial on this.
- Read input with `cin`, and write output with `cout`.
- `endl` means the end of line.

## Variables
- Use `{}` to initialize a variable.
- Note the defference between *assignment* and *initialization*.
- `bool` in C++ is a built-in type so you do not need to include 'bool.h', like in C99.

## Input and Output
- You can use `cin` and `cout` on any built-in data tyoe without a format stirng.  They will work correctly according to the data type of the variables.  We will describe more on this *polymorphism*.
- We can read/write multiple data by *chaining* them with `cin` and `cout`.  We will describe more on this chaining in *operator fucntions*.
- We can use `while (cin >> data)` to check for end of the data.
- We can control the input/output format by including `iomanip` and then send its *mainuplator* to `cin` and `cout`.  
  - We can set the width of the output by sedning `setw` to `cout`.
  - We can set the data format by sending the corresponding data, e.g., `dec` means decimal, and `left` means left-justified. 
  - Pleaee google all the detials by yourself.

## Arrays
- You can use *range for* to simplify a for loop.  For example, `for (int i : a)` will iterate over all indices in array `a`. The syntax is similar to Python. The range for greatly simpplifies array processing. 
- You can still use standard *raw arrays* as in C. We will describe a more object-oriended approach with C++ `vector`.
