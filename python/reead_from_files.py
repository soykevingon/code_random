

employee_file = open("employees.txt", "r")

#print(employee_file.readable()) # readable para saber si se puede leer

for employee in employee_file.readlines():
    print(employee)

#print(employee_file.read()) esto solo lo lee
#print(employee_file.readlines()[1]) readlines es para convertirlo en lista y asi con [] escoges  que quieres ver



employee_file.close()






