# whileloop
num = int(input("enter a number to find factorial\n"))
fact=1
while num>=1:
    fact*=num 
    num-=1
print("factorial = ",fact)

# forloop
num = int(input("enter a number to find factorial\n"))
fact = 1
for i in range(1,num+1):
    fact*=i
print("factorial = ",fact)

# recursive
num = int(input("enter a number to find factorial\n"))
def factorial(num):
    if num==1:
        return 1 
    else:
        return num*factorial(num-1)
print("factorial = ",factorial(num))