def euclidean_gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def find_nq_and_u(u0, u1,u,a):
    for n in range(max(u), 2**70, 1):
        for q in range(1, n):
            if euclidean_gcd(n, q) == 1:
                U0 = (u0 * q) % n
                U1 = (u1 * q) % n
                if U0 == a[0] and U1 == a[1]:
                    for i in range(2, len(a)):
                        q_1 = reverse_q(q, n)
                        u[i] = (a[i] * q_1) % n
                    return n, q, u
                else:
                    pass
            else:
                pass


def reverse_q(q, n):
    for i in range(1, n):
        if (q * i) % n == 1:
            return i
    return None

# Iterowanie przez wszystkie możliwe kombinacje u0 i u1
# a = [275, 9, 18, 169, 214, 20, 31, 337]
a = [120833, 241638, 112, 241792, 242002, 121617, 243248, 3304, 248190, 13216, 26418, 52850, 105700, 332191, 60385, 241589]
for u0 in range(1, 20):
    for u1 in range(2, 21):
        # u = [u0, u1, 0, 0, 0, 0, 0, 0]
        u = [u0, u1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
        nq_u = find_nq_and_u(u0, u1, u, a)
        if nq_u[0] > sum(nq_u[2]):
            print("N:", nq_u[0], "Q:", nq_u[1], "U:", nq_u[2])
            break
    break
