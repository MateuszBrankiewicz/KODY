a = int(input("Podaj a"))
s = x = i = 0
while a > 0:
    b = a % 8
    a = a // 8
    x = x * 10 + b
    i = i + 1
while i > 0:
    b = x % 10 
    x = x // 10
    s = s * 10 + b  
    i = i - 1
print (s)