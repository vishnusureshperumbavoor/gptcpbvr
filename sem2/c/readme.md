# 2 digits after decimal
%.2f 
# string keyword
no string keyword.         char name[20]
# no need of & symbol for string
scanf("%d",&num)       scanf("%s",num)
# declaration of sum=0
7.sumofeven.c (sum=0) 8.matrixmultiplication.c (mul[i][j]=0)   -   because addition starts from right side   
12.structure.c -  if structure is static. no need to declare s[i].total = 0. if the structure is not static declare s[i].total = 0
13.matrixaddition.c - additon on the left side. so no need to declare sum[i][j]=0
# Primary Numbers
2,3,5,7,11,13,17,19,23,29
prime numbers - number greater than 1 whose only factors are 1 and itself
composite numbers - number greater than 1 that is not a prime
one is neither prime nor composite 
negative numbers cannot be prime or composite
# fibonacci series
0,1,1,2,3,5,8,13,21,34,55
each number is the sum of 2 preceding ones. usually starts from 0 and 1
# Matrix
matrix multiplication - the number of rows of the 1st matrix should be equal to the number of columns of the 2nd matrix
matrix addition - the number of rows & columns of the 1st matrix should be equal to the number of rows and columns of the 2nd matrix.
# string functions
1. strlen (length) -            s : elon musk                               strlen(s) : 9
2. strcat (concatenation) -     s1 : elon      s2 : musk             strcat(s1,s2) : elonmusk       strcat(s2,s1) : muskelon 
3. strcpy (copy) -              s1 : elon      s2 :                           strcpy(s1,s2)      puts(s2) : elon
4. strcmp (compare) (XOR gate)  s1 : elon      s2 : elon      s3 : Elon    s4 : elonmusk   
                                strcmp(s1,s2) : 0       strcmp(s1,s3) : 1               strcmp(s1,s4) : -1
5. strrev (reverse) -           s : elon                                      strrev(s) : nole
# palindrome 
words that reads same backwards and forwards ex: malayalam, madam, nurses run