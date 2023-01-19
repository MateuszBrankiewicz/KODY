# def ciag(n):
#     a1 = 2
#     if n<1:
#         return 0
#     else:
#         print(a1)
#         for i in range(n):
#             p = 2*a1 + 1.5
#             print(p)
#             a1 = p
# ciag(10)
def ciag(n):
    a1 = 2
    if n<1:
        return 0
    else:
        p = 2 * a1 + 1.5
        print(p)
        a1 = p
        return ciag(n-1)
n = int(input("podaj liczbe"))
print(ciag(n))