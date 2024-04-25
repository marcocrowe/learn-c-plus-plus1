# Development Notes (Adam Nix K00296095)                          24/4/2024

## 1. Introduction

In this project I implemented a menu-driven command line application to
manipulate the contents of an Integer Array

## 2. Reflection

On my completion of the project, I was responsible for creating and implementing every aspect of the program.
This is the case as the other group members did not contribute to the project in any capacity.
This project has improved my troubleshooting skills as well as my programming abilities.
I am of this opinion as I encountered a range of problems in my code which i was able to clarify.

## 3. Problems Encountered

- One such example of these problems I clarified include getting the menu to correctly refresh on every user input.
- A second example of a problem I encountered which I fixed was a problem where the user was being told to input a number twice

## Testing

I tested all of the outputs using the following methods

- calculator
- excel functions

### Menu options

```plaintext
select 1 to Display the Numbers in the array
select 2 to Get the Total of the Numbers in the array
select 3 to Get the Average of the Numbers in the array
select 4 to Get the Largest Number in the array
select 5 to Get the Smallest Number in the array
select 6 to Get the Number of Occurrences of a Number in the array
select 7 to Scale Up the Numbers in the array by 1
select 8 to Reverse the Numbers in the array
select 9 to Base the Numbers in the array by any number
select 10 to Remove a Number from the array
select 11 to Sort the Numbers in the array
select 12 to Exit the program
----------------------------------------------------------------
```

### Option 1

```plaintext
Enter your choice: 1
[61, 7, 81, 44, 8, 36, 28, 63, 57, 2, 20, 39, 86, 9, 69, 6, 59, 32, 49, 44, 59, 54, 11, 28, 29, 92, 95, 13, 90, 23, 56, 59, 51, 85, 58, 31, 95, 68, 6, 42, 4, 36, 81, 82, 81, 65, 93, 2, 96, 22]

```

### Option 2

```plaintext
Enter your choice: 2
The total of the array is: 2407
```

### Option 3

```plaintext
Enter your choice: 3
The average of the array is: 48.14
```

### Option 4

```plaintext
Enter your choice: 4
The largest number in the array is: 96
```

### Option 5

```plaintext
Enter your choice: 5
The smallest number in the array is: 2
```

### Option 6

```plaintext

Enter your choice: 6
Enter the number you want to find: 20
The number 20 occurs 1 times in the array
```

### Option 7

```plaintext
Enter your choice: 7
The array has been scaled up by 1
```

```plaintext

Enter your choice: 1
[62, 8, 82, 45, 9, 37, 29, 64, 58, 3, 21, 40, 87, 10, 70, 7, 60, 33, 50, 45, 60, 55, 12, 29, 30, 93, 96, 14, 91, 24, 57, 60, 52, 86, 59, 32, 96, 69, 7, 43, 5, 37, 82, 83, 82, 66, 94, 3, 97, 23]
```

### Option 8

```plaintext
Enter your choice: 8
The array has been reversed
```

```plaintext

Enter your choice: 1
[22, 96, 2, 93, 65, 81, 82, 81, 36, 4, 42, 6, 68, 95, 31, 58, 85, 51, 59, 56, 23, 90, 13, 95, 92, 29, 28, 11, 54, 59, 44, 49, 32, 59, 6, 69, 9, 86, 39, 20, 2, 57, 63, 28, 36, 8, 44, 81, 7, 61]
```

### Option 9

```plaintext
Enter your choice: 9
Enter the number you want to base the array by: 10
The array has been based by 10
```

```plaintext
Enter your choice: 1
[51, -3, 71, 34, -2, 26, 18, 53, 47, -8, 10, 29, 76, -1, 59, -4, 49, 22, 39, 34, 49, 44, 1, 18, 19, 82, 85, 3, 80, 13, 46, 49, 41, 75, 48, 21, 85, 58, -4, 32, -6, 26, 71, 72, 71, 55, 83, -8, 86, 12]
```

### Option 10

```plaintext
Enter your choice: 10
Enter the element number you want to remove: 5
The element at position 5 has been removed from the array
```

```plaintext
Enter your choice: 1
[61, 7, 81, 44, 36, 28, 63, 57, 2, 20, 39, 86, 9, 69, 6, 59, 32, 49, 44, 59, 54, 11, 28, 29, 92, 95, 13, 90, 23, 56, 59, 51, 85, 58, 31, 95, 68, 6, 42, 4, 36, 81, 82, 81, 65, 93, 2, 96, 22]
```

### Option 11

```plaintext
Enter your choice: 11
The array has been sorted in ascending order
```

```plaintext
Enter your choice: 1
[2, 2, 4, 6, 6, 7, 8, 9, 11, 13, 20, 22, 23, 28, 28, 29, 31, 32, 36, 36, 39, 42, 44, 44, 49, 51, 54, 56, 57, 58, 59, 59, 59, 61, 63, 65, 68, 69, 81, 81, 81, 82, 85, 86, 90, 92, 93, 95, 95, 96]
```

### Option 12

```plaintext
Enter your choice: 12
Exiting the program

Press any key to continue . . .

(process 25108) exited with code 0.
```
