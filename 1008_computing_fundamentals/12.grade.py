regno = input("enter regno of the student\n")
name = input("enter name of the student\n")
mark = int(input("enter mark of the student\n"))
def dict(mark):
    switcher={
        10:"S",
        9:"S",
        8:"A",
        7:"B",
        6:"C",
        5:"D",
        4:"E",
    }
    return switcher.get(mark,"Failed")
print("regno : "+regno)
print("name : "+name)
print("mark : ",mark)
print("mark//10 : ",mark//10)
print("grade : "+dict(mark//10))
