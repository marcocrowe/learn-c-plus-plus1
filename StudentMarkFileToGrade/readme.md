
# Student Marks File to grades

A student’s marks in an exam are converted to a grade according to the table below:


|**Mark**|**100 - 85**|**84-70**|**69-60**|**59-50**|**49-40**|**39-0**|
| :-: | :-: | :-: | :-: | :-: | :-: | :-: |
|**Grade**|**A**|**B**|**C**|**D**|**E**|**F**|


`	`A file called `marks.dat` contains a list of K-numbers and marks for a group of 20 students.

`	`Write a program that will 

1) read the contents of the file “Marks.dat” into two 1-dimensional arrays, one for the K-numbers and one for the marks.
1) populate a third 1-dimensional array with the matching grades based on the table above
1) write the K-numbers and grades out to a file called “Grades.dat”.

**Q. 2**	The cost of hiring a yacht is calculated by multiplying the number of days the yacht is on hire by a seasonal daily rate.  The seasonal rates in € are given by the following table and the rate applied is based on the hire month. Cruisers are not available for hire from November to February inclusive.
**
`	`A percentage discount is applied based on the number of days hire as per the 



|<p>HIGH SEASON</p><p>July – Aug</p>|<p>MID SEASON</p><p>May – June & Sep - Oct</p>|<p>LOW SEASON</p><p>March– April </p>|
| :-: | :-: | :-: |
|€400|€250|€100|
**


A percentage discount is applied based on the number of days hire as per the following able:

|0 – 15days|16 to 30 days |31 to 60 days|61 days or more|
| :-: | :-: | :-: | :-: |
|0%|5%|10%|15%|



Write a program that 

1) allows the user to enter the hire month as an integer in the range 1 to 12 and the number of 

   days the cruiser will be on hire

2) will ascertain the applicable hire rate based on the above table
2) will ascertain the discount rate
2) will calculate and display the total cost of the cruiser hire

**Q. 3**	A car insurance company calculates the cost of a comprehensive insurance policy based on the value of the car, the age of the driver and the number of penalty points as per the equation and the tables shown below.

`	`cost = ( 250 + (value of car/1000) \* Valuefactor )  \* Agefactor  \* Pointsfactor

The Valuefactor is currently €10

|**Age**|**Agefactor**|
| :-: | :-: |
|less  18 years|will not insure|
|18 to 20 years|2\.0|
|21 to 25|1\.5|
|greater than 25 years|1\.0|







|**No. of Points**|**Pointsfactor**|
| :-: | :-: |
|less than 5|1\.0|
|5|1\.1|
|6|1\.2|
|7|1\.4|
|8|1\.7|
|9 or greater|will not insure|









Write a program that will

1) allow the user to enter the value of a car, the drivers age and the number of penalty points	
1) then ascertain whether or not the driver is insurable				
1) if insurable will deduce the AgeFactor			
1) if insurable will deduce the Pointsfactor						
1) if insurable will calculate and display the cost of the policy
1) if not insurable will report this decision and the reason why the decision was taken
**


**Q. 4**

`	`A terrain is divided into a 100 by 100 grid and the height above sea level (to the nearest metre) at the

` `centre of each cell is measured. This set of 	measurements is stored in a file called “Griddata.dat”. 

`	`Write a program that will

**a)**	read the contents of the file into a 2-D array 			

2) find the smallest value in the array
2) reduce each value in the array by the smallest value
2) display the contents of the array


**Q. 5**	The data relating to a black and white bitmapped image may be stored as a two dimensional array of integer values, where each value represents the colour of the corresponding pixel. Two such sets of data for two 50 pixel by 20 pixel images are stored in two files called “Picture1.dat” and “Picture2.dat”.
**
`	`Two images are regarded as identical if there is at least a 95% match between corresponding pixels.

Write a program that will 

1) read the contents of the two files into two 2-D arrays.
1) then compare the contents of the arrays and count the number of elements that differ
1) report whether or not the two images are identical.
**


**Q. 6**	A car dealership has 5 salespersons (numbered 1 to 5) and they sell 4 different car models (numbered 1 to 4).

` `A file, called “Sales.dat”, is maintained that contains five rows one for each salesperson. Each row contains 4 integers representing the number of each model of car that the corresponding salesperson has sold.

`	`Write a program that will 

1) read the contents of the file into a 2-D array
1) repeatedly, when a car has been sold, allow a user to enter a salesperson number in the range 1 to 5 and a model number 1 to 4. Values of -1, -1 should be entered when the program is to terminate.
1) based on the salesperson number and the car model number, the corresponding number of cars sold in the array should be incremented.
1) before the program terminates, the contents of the array should be re-written to the file.

