def decrypt_message(n, U, a, encrypted_message, k):
    decrypted_text = []
    for k_index in range(k):
        for i in range(pow(2,n)):
            b = [int(j) for j in bin(i)[2:].zfill(n)]
            if sum([b[j % n] * a[j % n] for j in range(n)]) == encrypted_message[k_index]:
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
