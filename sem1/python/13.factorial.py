num = int(input("enter a number to find factorial\n"))
fact=1
while num>=1:
    fact*=num 
    num-=1
print("factorial = ",fact)

num = int(input("enter a number to find factorial\n"))
fact=1
for i in range(num,1,-1):
    fact*=i     
print("factorial = ",fact)

num = int(input("enter a number to find factorial\n"))
fact = 1
for i in range(1,num+1):
    fact*=i
print("factorial = ",fact)