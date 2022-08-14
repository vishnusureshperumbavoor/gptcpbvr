def sum():
    print("sum")
def diff():
    print("difference")
def dict(arguement):
    switcher={
        0:sum,
        1:diff,
    }
    return switcher.get(arguement,"number doesnt exist")
output = dict(1)
output()
