for i in range(11):
    print(f"for loop:{i}")
num = 0

while num < 10:
    num = num + 1
    print(f"while loop{num}")


def funcion_de_if(numDeIf):
    if numDeIf < 10:
        numDeIf + 1
        print(f"if loop {numDeIf}: ")


funcion_de_if(0)
