print('Введите коэффициенты A, B и C для первого уравнения:')
a1 = float(input())
b1 = float(input())
c1 = float(input())
print('Введите коэффициенты A, B и C для второго уравнения:')
a2 = float(input())
b2 = float(input())
c2 = float(input())
delta = a1 * b2 - b1 * a2
delta1 = c1 * b2 - b1 * c2
delta2 = a1 * c2 - c1 * a2
x = delta1 / delta
y = delta2 / delta
print('Решение для системы уравнений с заданными коэфициентами:')
print('x =', x, '. y =', y,'.')