import math
print('Введите размер файла в байтах:')
b = int(input())
per = b / 1024
kb = math.ceil(per)
print('Размер этого файла в килобайтах:', kb)