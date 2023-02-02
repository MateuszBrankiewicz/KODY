def find_arguments(a):
    b = [2464, 611, 2456]
    b_index = [3, 0, 2]
    s_values = [0, 611, 1222, 1833, 2444]

    for s in s_values:
        k_1 = 1355 * s % 2464
        if k_1 == 0:
            continue
        k_2 = (611 * k_1 - s) / 2464
        k_3 = (2456 * k_1 - 1480 * s) / 2464
        if (k_2 >= 0 and k_3 >= 0):
            U = (b[0] + k_1 * 2464) / a[b_index[0]]
            M = b[0] + k_1 * 2464
            V = (a[b_index[1]] * U - b[1]) / k_2
            for i in range(16):
                bi = (a[i] * U - M * (k_1 + k_2 * (i == b_index[1]) + k_3 * (i == b_index[2]))) % M
                if (bi != b[i == b_index[0]]):
                    break
            else:
                return (U, M, V)
    


a = [120833, 241638, 112, 241792, 242002, 121617, 243248, 3304, 248190, 13216, 26418, 52850, 105700, 332191, 60385, 241589]
result = find_arguments(a)
if result is None:
    print("Nie znaleziono argumentów.")
else:
    print("U:", result[0])
    print("M:", result[1])
    print("V:", result[2])
