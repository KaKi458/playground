def change_value(variable : int):
    variable += 10
    print(variable)

def change_and_return_value(variable : int) -> int:
    return variable + 10

a = 5
print(a)
change_value(a)
print(a)
a = change_and_return_value(a)
print(a)
