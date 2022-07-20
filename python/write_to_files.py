

employee_file = open("employees.txt", "a") #"a"" es para a~adir y "w" es para escribir encima

#employee_file.write("Toby - Human Resources") esto anade al final del file (no importa si hay algo ya en linea)
employee_file.write("\nKelly - Customer Service") #\n lo a~ade en una linea nueva

employee_file.close()



