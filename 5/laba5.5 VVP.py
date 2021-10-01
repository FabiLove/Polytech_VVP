import math
print('Найдем периметр и площадь треугольника, имея координаты его вершин')
print('Введите координаты первой, второй и третьей вершин:')
x1, y1, x2, y2, x3, y3 = int(input()), int(input()),int(input()),int(input()),int(input()),int(input())
ab = (x2 - x1)**2 + (y2 - y1)**2
ac = (x3 - x1)**2 + (y3 - y1)**2
bc = (x3 - x2)**2 + (y3 - y2)**2
a = math.sqrt(ab)
b = math.sqrt(bc)
c = math.sqrt(ac)
p = a + b + c
pol = p / 2
s = math.sqrt(pol * (pol - a) * (pol - b) * (pol - c))
print('Площадь треугольника S = ', s, '.', 'Периметр треугольника P = ', p, '.')