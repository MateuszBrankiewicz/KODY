def decrypt_message(n, U, a, encrypted_message, k):
    a_half = n // 2
    a_first_half = a[:a_half]
    a_second_half = a[a_half:]

    a_half_values = {}
    for i in range(2 ** a_half):
        b = [int(j) for j in bin(i)[2:].zfill(a_half)]
        a_half_values[sum([b[j] * a_first_half[j] for j in range(a_half)])] = b

    decrypted_text = []
    for k_index in range(k):
        x = encrypted_message[k_index]
        for i in range(2 ** (n - a_half)):
            b = [int(j) for j in bin(i)[2:].zfill(n - a_half)]
            y = sum([b[j] * a_second_half[j] for j in range(n - a_half)])
            if x - y in a_half_values:
                b = a_half_values[x - y] + b
                j = 0
                for i in range(0, n * k, 8):
                    chunk = "".join([str(bit) for bit in b[j:j + 8]])
                    j += 8
                    if chunk:
                        ascii_value = int(chunk, 2)
                        if 32 <= ascii_value <= 127:
                            decrypted_text.append(chr(ascii_value))
    return "".join(decrypted_text) if decrypted_text else None


def stworz_klucz_publiczny(dane, n):
    klucz_publiczny = []
    for i in dane[2:n+2]:
        klucz_publiczny.append(int(i))
    return klucz_publiczny


def stworz_wiadomosc(dane, n):
    wiadomosc = []
    for i in dane[n+3::]:
        wiadomosc.append(int(i))
    return wiadomosc


dane = open("C:\\Users\\Szef\\Desktop\\GIT\\KODY\\Dyskretna\\testy\\test3.txt", "r")
tablica = dane.read().split()
n = int(tablica[0])
U = int(tablica[1])
a = stworz_klucz_publiczny(tablica, n)
k = int(tablica[n+2])
m = stworz_wiadomosc(tablica, n)
print(decrypt_message(n, U, a, m, k))
dane.close()
