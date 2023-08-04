celsius = float(input("enter temperature in celsius\n"))
print("temperature in fahrenheit = ",(celsius*(5/9))+32)
print("temperature in kelvin = ",celsius+273.15)

fahren = float(input("enter temperature in farenheit\n"))
print("temperature in celsius = ","{:.2f}".format((fahren-32)*(5/9)))
print("temperature in kelvin = ","{:.2f}".format((fahren-32)*(5/9)+273.15))

kelvin = float(input("enter temperature in kelvin\n"))
print("temperature in celsius = ",kelvin-273.15)
print("temperature in fahrenheit = ","{:.2f}".format((kelvin-273.15)*(9/5)+32))