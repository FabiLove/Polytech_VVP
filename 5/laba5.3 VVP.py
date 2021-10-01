import math
print('Найдем произведение длин отрезков AC и BC, имея их координаты на плоскости')
print('Введите координаты первой, второй и третьей точек:')
x1, y1, x2, y2, x3, y3 = int(input()), int(input()),int(input()),int(input()),int(input()),int(input())
ac = (x2 - x1)**2 + (y2 - y1)**2
bc = (x3 - x2)**2 + (y3 - y2)**2
r1 = math.sqrt(ac)
r2 = math.sqrt(bc)
print('Отрезок AC = ', r1)
print('Отрезок BC = ', r2)
print('Произведение длин отрезков = ', r2 * r1)
