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
print('Сумма модулей этих чисел = ', sum, '.')
print('Разность модулей этих чисел = ', raz, '.')
print('Произведение модулей этих чисел = ', pr, '.')
print('Частное модулей этих чисел = ', chas, '.')
