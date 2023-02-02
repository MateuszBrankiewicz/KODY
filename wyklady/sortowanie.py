# def babelkowe(tab):
#     for i in range(len(tab)-1):
#         for j in range(len(tab)-i-1):
#             if tab[j] > tab[j+1]:
#                 temp = tab[j] 
#                 tab[j] = tab[j+1]
#                 tab[j+1] = temp
                
# tab= [9,9,82,1,2,3,4,5,6,7,8,12]
# print(tab)
# babelkowe(tab)
# print(tab)

# def wybieranie(tab):
#     for i in range(len(tab)-1):
#         ind = i
#         for j in range(i+1,len(tab)):
#             if tab[j] < tab[ind]:
#                 tab[j], tab[ind] = tab[ind], tab[j]
                
# tab= [9,9,82,1,2,3,4,5,6,7,8,12]
# print(tab)
# wybieranie(tab)
# print(tab)

#----------------------------------------------------------------
#QUICKSORT szybkie sortowania dzielimy na pol poprzez pivota i przestawiamy pokolei wyrazy 

# def qs(tab, l, p):
#     pivot = int  
#     pivot = tab[(l + p)//2]
#     i = l
#     j = p
#     while i<=j:
#         while tab[i]< pivot:
#             i+=1
#         while tab[j] > pivot:
#             j -= 1
#         if i<=j:
#             tmp = tab[i]
#             tab[i] = tab[j]
#             tab[j] = tmp
#             i+=1
#             j -= 1
#             print(tab)
#     if l < j:
#         qs(tab, l, j)
#     if i < p:
#         qs(tab,i, p)
        
# tab= [9,9,82,1,2,3,4,5,6,7,8,12]
# print(tab)
# qs(tab, 0, len(tab)-1)
# print(tab)
#--------------------------------------------------------------------------------------



#SZUKANIE BINARNE - zwraca indeks szukanej wartosci 
a = 0
t = [1, 5, 7, 11, 13, 15, 20, 21, 25, 45]
n = len(t)
left = 0
right = n-1
indeks = -1
znaleziono = False
while left <= right and znaleziono == False:
    k = (left + right) // 2
    if a == t[k]:
        znaleziono = True
        indeks = k
    elif a < t[k]:
        right = k - 1
    else:
        left = k + 1
if znaleziono:
 print("t[",indeks, "] = ", t[indeks])
else:
 print("brak szukanego elementu")

#----------------------------------------------------------------

#SZUKANIE DWOCH NAJBLIZSZYCH PKT
print(76%5)



