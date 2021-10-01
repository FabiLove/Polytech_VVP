print('Введите два ненулевых числа a и b:')
a1, b1 = int(input()), int(input())
a = abs(a1)
a = abs(b1)
sum = a + b
raz = abs(a - b)
pr = a * b
if a > b:
    chas = a**2 / b**2
else:
    chas = b**2 / a**2
print('Сумма квадратов этих чисел = ', sum, '.')
print('Разность квадратов этих чисел = ', raz, '.')
print('Произведение квадратов этих чисел = ', pr, '.')
print('Частное квадратов этих чисел = ', chas, '.')