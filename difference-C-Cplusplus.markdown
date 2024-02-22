# Difference between C and C++

## Basics
- Use `g++` to compile your C++ code.
- Must include `iostream` for input/output operations.
- Use `using namespace std;` to simplify your code.  We will describe more details on this.
- Read input with `cin`, and write output with `cout`.
- `endl` means the end of the line.

## Variables
- Use `{}` to initialize a variable.
- Note the defference between *assignment* and *initialization*.
- `bool` in C++ is a built-in type so you do not need to include `stdbool.h`, like in C99.

## Input and Output
- You can use `cin` and `cout` on any built-in data type without a format string.  They will work correctly according to the data type of the variables.  We will describe more on this *polymorphism*.
- We can read/write multiple data by *chaining* them with `cin` and `cout`.  We will describe more on this chaining in *operator fucntions*.
- We can use `while (cin >> data)` to check for the end of the data.
- We can control the input/output format by including `iomanip` and then send its *manipulator* to `cin` and `cout`.  
  - We can set the width of the output by sending `setw` to `cout`.
  - We can set the data format by sending the corresponding data, e.g., `dec` means decimal, and `left` means left-justified. 
  - Please google all the details by yourself.

## Arrays
- You can use *range for* to simplify a for loop.  For example, `for (int i : a)` will iterate over all indices in array `a`. The syntax is similar to Python. The range for greatly simplifies array processing. 
- You can still use standard *raw arrays* as in C. We will describe a more object-oriented approach with C++ `vector`.

## Floating Point Numbers
- You can use float and double as in C, and `cin` and `cout` will automatically determine the correct format according to the data type.
- `static_cast<type>(expression)` casts the expression into the specified type *statically*, which means the cast is at compile time.
- `setprecision` is a very useful input/output manipulator for floating point numbers.

## Functions
- Unlike C, two C++ function can have the same function names as long as they ey have dfferent prototype, which consists of the fucntion name and parameter data types. As a result two function can have the same name as long as they have differernt parameter data types. We will describe more on this *fucntion overloading*.
- To include a C++ header you do not need to specify the `.h` suffix.
- The default argument is convienent when most of the time the value of the parameter is a fixed value. This is alos convienent in making a *default constructor*. We will describe more detials on this.
