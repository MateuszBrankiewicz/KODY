a = 'Ala ma kota'
b = ''
for i in range(len(a)):
    b = b + chr(1+ord(a[i]))
print(a)
print(b)