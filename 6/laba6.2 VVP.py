print('Введите три числа:')
a, b, c = float(input()), float(input()), float(input())
print('a =', a, 'b =', b, 'c =', c)
x = b
b = a
y = c
c = x
a = y
print('Поменяем их местами: a =', a, 'b =', b, 'c =', c)
