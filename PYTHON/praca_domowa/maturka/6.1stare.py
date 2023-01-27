def zaszyfruj(lancuch):
    for i in range(len(lancuch)):
        if lancuch[i].isalpha():
            if lancuch[i].islower():
                lancuch[i] = chr((ord(lancuch[i]) - ord('a') + 3) % 26 + ord('a'))
            else:
                lancuch[i] = chr((ord(lancuch[i]) - ord('A') + 3) % 26 + ord('A'))
