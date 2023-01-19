def ciag(n):
    a1 = 2
    a2= 3
    if n < 2:
        return 0
    else:
        for i in range(2,n):
            p = 2*a1 + a2
            a1 = a2
            a2 = p
            print(a1,a2)
ciag(10)
