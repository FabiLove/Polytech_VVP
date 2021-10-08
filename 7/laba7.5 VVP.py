print('Введите коэффициенты A и B (A не равно 0):')
a = float(input())
b = float(input())
x = 0
p = 0
if a != 0:
    p = 0 - b
    x = p / a
    print('Уравнение вида A * x + B = 0 имеет решение x =', x)
elif a == 0:
    print('Ошибка. A не должно быть равно 0.')
    exit
