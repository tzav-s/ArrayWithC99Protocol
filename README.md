# ArrayWithC99Protocol
A program which:
(a) Ask the user for two positive integers R (rows) and C (columns) from 1 to
and 10. You can safely assume that the user will enter a correct number according to
previous limits. No control required. The input will be from the main function.
(b) Will "fill" the elements R x C of a two-dimensional array A of integers (dimension 10x10) with random
integers from 0 to 99 (rand ()% 100), by calling a populate_data function.
That is, the program will use part of table A, based on the numbers R and C, entered by
user.
(c) It will call a print_array function that will print the R x C elements of table A.
(d) It will call a change_array procedure, which for each line of table A will set what
items are to the left of the line equal to (that is, what is on the same line as
this, but have a lower column index will be equal to the maximum).
(e) Finally, the elements of the "changed" row table will be displayed again.
All your functions will follow the C99 standard for 2D arrays.
