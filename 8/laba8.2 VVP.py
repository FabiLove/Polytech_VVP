import math
print('Введите длину длинного отрезка А и короткого отрезка В:')
a, b = int(input()), int(input())
ot = math.floor(a / b)
print('Количество отрезков B, размещенных на отрезке A', ot)