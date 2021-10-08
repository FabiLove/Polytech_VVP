import math
print('Введите длину длинного отрезка А и короткого отрезка В:')
a, b = int(input()), int(input())
kol = math.floor(a / b)
ost = a - (kol * b)
print('Длина незанятой части отрезка A:', ost)