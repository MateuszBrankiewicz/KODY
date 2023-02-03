# def wybieranie(tab):
#     for i in range(len(tab) -1):
#         ind = i
#         for j in range(i+1, len(tab)):
#             if tab[j] < tab[ind]:
#                 #ind = j
#                 tab[j], tab[ind] = tab[ind], tab[j]
# tab= [1,34,2,1,3,4,5,6]
# wybieranie(tab)
# print(tab)
# def sortSelection(t):
#     for i in range(len(t)-1):
#         ind = i
#         for j in range(i+1,len(t)):
#             if t[j] < t[ind]:
#                 ind = j
#         t[i], t[ind] = t[ind], t[i]
# tab2= [1,34,2,1,3,4,5,6]
# sortSelection(tab2)

# print(tab2)
def sorowanieprzezwstawianie(tab):
    for i in range(len(tab)-1):
        dows = tab[i]
        j = i + 1
        # if tab[j]> tab[i]:
        #     temp = tab[j]
        #     tab[j] = tab[i]
        #     tab[i] = temp
        # else:
        wh