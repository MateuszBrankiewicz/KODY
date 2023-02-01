def decrypt_message(n, u, a, k, encrypted_message):
    decrypted_message = []
    for i in range(k):
        m = 0
        for j in range(n//8):
            c = encrypted_message[i][j]
            for l in range(8):
                if c & (1 << l) != 0:
                    m += (u[1] ** (8 * j + l)) % N
        decrypted_message.append(chr(m % 256))
    return ''.join(decrypted_message)

if __name__ == '__main__':
    n = int(input().strip())
    U = int(input().strip())
    a = [int(input().strip()) for i in range(n)]
    k = int(input().strip())
    encrypted_message = [list(map(int, input().strip().split())) for i in range(k)]
    u = [0, U + 1]

    decrypted_message = decrypt_message(n, u, a, k, encrypted_message)
    print(decrypted_message)