try:
    value = 10/0
    number = int(input("Enter a number: "))
    print(number)
except ZeroDivisionError as err: #except y lo otro es para especificar el error y err es para printear el error especifico
    print(err)
except ValueError:
    print("Invalid Input")

