print('Введите два любых числа:')
a, b = float(input()), float(input())
x = a
a = b
b = x
print('Поменяем их местами:', a, b)