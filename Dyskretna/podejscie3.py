# zwraca n,q ale wszystkie 
def euclidean_gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def find_nq_and_u(u0, u1,u,a):
    for n in range(sum(u), 2**30):
        for q in range(1, n):
            if euclidean_gcd(n, q) == 1 and (u0 * q) % n == a[0] and (u1 * q) % n == a[1]:
                return n, q, (u0, u1)
    return None

# Iterowanie przez wszystkie możliwe kombinacje u0 i u1
a = [275, 9, 18, 169, 214, 20, 31, 337]
# a = [120833, 241638, 112, 241792, 242002, 121617, 243248, 3304, 248190, 13216, 26418, 52850, 105700, 332191, 60385, 241589]
for u0 in range(1, 21):
    for u1 in range(u0 + 1, 21):
        u = [u0, u1, 0, 0,0,0,0,0]
        # u = [u0, u1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
        nq_u = find_nq_and_u(u0, u1,u,a)
        if nq_u:
            print("N:", nq_u[0], "Q:", nq_u[1], "U:", nq_u[2])
