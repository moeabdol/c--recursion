# Recursion Examples in C++
Sample programs to demonstrate the concept of recursion in C++.

## Types of Recursion
1. **Head Recursion**: When the call to the recursive function comes before any
   statement.
2. **Tail Recursion**: When the call to the recursive function comes after all
   statements.
3. **Tree Recursion**: When we call the recursive function more than once.
5. **Indirect Recursion**: When we call the recursive function A that calls a
   recursive function B which in turn calls recursive function A and so on. This
   is also called Circular Recursion.
5. **Nested Recursion**: When we call the recursive function as an argument to the
   recursive function.

## Program List
1. `tail_head.cpp` - Simple recursive program to demo ascending and descending
   statements during recursion.
2. `static_variable.cpp` - Recursive program to demo how a static variable inside
   a recursive function will be treated as a global variable.
3. `tree_recursion.cpp` - Recursive program to show tree recursion. That is when
   a function calls itself more than once.
4. `indirect_recursion.cpp` - Recursive program to show indirect recursion. That
   is when a function A calls another function B which calls back function A and
   so on. This is also called circular recursion.
5. `nested_recursion.cpp` - Recursive program to show nested recursion. That is
   when a recursive call has another recursive call as an argument.
6. `sum_of_first_n_natural_numbers.cpp` - Recursive program to calculate the sum
   of first N natural numbers.
7. `factorial.cpp` - Recursive program to calculate factorial of n.
8. `power.cpp` - Recursive program to calculate m to the power of n.
9. `taylor_series.cpp` - Recursive program to calculate taylor's series e^x for
   n times.
