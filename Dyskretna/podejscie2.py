def euclidean_gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def find_N_and_Q(a, u0, u1,u):
    for N in range(sum(u), 2**70):
        for Q in range(1, N):
            if (u0 * Q) % N == a[0] and (u1 * Q) % N == a[1] and euclidean_gcd(Q, N) == 1:
                return N, Q

# a = [120833, 241638, 112, 241792, 242002, 121617, 243248, 3304, 248190, 13216, 26418, 52850, 105700, 332191, 60385, 241589]
a = [275, 9, 18, 169, 214, 20, 31, 337]
u0 = [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,14,15,16,17,18,19]
u1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,14,15,16,17,18,19,20]

for i in u0:
    for j in u1:
        u = [i, j]
        result = find_N_and_Q(a, i, j,u)
if result:
    N, Q, u0, u1 = result
    print("N:", N)
    print("Q:", Q)
    print("u0:", u0)
    print("u1:", u1)
else:
    print("No suitable values for N, Q, u0, u1 were found.")
