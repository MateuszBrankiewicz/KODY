def deszyfruj(m_encrypted, a, k, n):
    n = len(a)
    m = [0] * n
    for i in range(n - 1, -1, -1):
        # print(i)
        if (m_encrypted[0] >= a[i]):
            m[i] = 1
            m_encrypted[0] -= a[i]
    # print(m)
    return m

def find_sum(numbers, target_sum):
    n = len(numbers)
    dp = [False for i in range(target_sum + 1)]
    dp[0] = True
    for i in range(n):
        for j in range(target_sum, numbers[i] - 1, -1):
            if dp[j - numbers[i]]:
                dp[j] = True
    if dp[target_sum] == False:
        return []
    res = []
    for i in range(n - 1, -1, -1):
        if target_sum >= numbers[i] and dp[target_sum - numbers[i]]:
            res.append(numbers[i])
            target_sum -= numbers[i]
    return res

def utworz_binarne(liczby, a):
    tab = []
    for e in a:
        if e in liczby:
            tab.append(1)
        else:
            tab.append(0)
    bin1 = tab[0:8]
    bin2 = tab[8::]
    return bin1, bin2



def stworz_klucz_publiczny(dane, n):
    klucz_publiczny = [int(i) for i in dane[2:n+2]]
    return klucz_publiczny

def stworz_wiadomosc(dane, n):
    wiadomosc = [int(i) for i in dane[n+3::]]
    return wiadomosc

with open("./testy/test1.txt", "r") as dane:
    tablica = list(map(int, dane.read().split()))
    n = tablica[0]
    U = tablica[1]
    a = stworz_klucz_publiczny(tablica, n)
    k = tablica[n+2]
    m = tablica[-k:]
    for i in range( k):
        sum = find_sum(a, m[i])
        rozszyfrowane = utworz_binarne(sum, a)
        for i in rozszyfrowane:
            res = int("".join(str(x) for x in i), 2)
            print(chr(res), end="")
