




# def fib(n):
#   a = 0
#   b = 1
#   while b<n:
#     print(b) 
#     temp = a
#     a = b
#     b = temp+b
# x = int(input("Podaj liczbe: "))
# fib(x)
ile = 0
def fib(n):   
    if n == 1:
        return 1
    if n == 2:
        return 1
    return fib(n-1) + fib(n-2) 
print(fib(10))

# for i in range(1,55):
#   print(fib(i), i)


