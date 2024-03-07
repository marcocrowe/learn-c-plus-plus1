
# Max Score

1.	The code includes the necessary libraries for file input/output (<fstream>) and console input/output (<iostream>).
2.	The code defines a function called MaxScore that takes a const char* parameter representing the filename. This function will return an integer, which will be the maximum score found in the file.
3.	Inside the MaxScore function, two variables are declared: currentScore and maxScore. currentScore will store the score being read from the file, and maxScore will store the maximum score found so far. The initial value of maxScore is set to -1.
4.	The code attempts to open the file specified by the filename parameter using an ifstream object called file. If the file cannot be opened, an error message is printed to the console, and -1 is returned.
5.	A while loop is used to read scores from the file one by one until there are no more scores to read. The loop condition file >> currentScore reads a score from the file and checks if it was successful. If a score is successfully read, the loop body is executed.
6.	Inside the loop, the code compares the currentScore with the maxScore. If the currentScore is greater than the maxScore, the maxScore is updated to the currentScore.
7.	After all the scores have been read from the file, the file is closed using the file.close() statement.
8.	Finally, the MaxScore function returns the maxScore.
9.	In the main function, a constant character pointer filename is declared and initialized with the name of the file ("scores.txt") that contains the scores.
10.	The MaxScore function is called with the filename as an argument, and the returned value is stored in the highestScore variable.
11.	If the highestScore is not -1 (indicating that the file was successfully read), the maximum score is printed to the console using the cout statement.
12.	The main function returns 0, indicating successful execution of the program.