def fib(n):
  a = 0
  b = 1
  for i in range(n):
    print(b) 
    p = a
    a = b
    b = p + b 
x = int(input("Podaj x"))
fib(x)