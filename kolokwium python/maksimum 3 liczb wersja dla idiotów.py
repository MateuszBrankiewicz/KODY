from random import randint, seed
seed(99504)
tab = []
zakres = 100000
maximum = maximum1 = maximum2 = 0
for i in range(20):
    tab.append(randint(0,zakres))
print(tab)
for i in range(len(tab)):
    if tab[i] > maximum:
        maximum = tab[i]
        
    elif tab[i] > maximum1 and tab[i] != maximum:
        maximum1 = tab[i]
       
    elif tab[i] > maximum2 and tab[i]!= maximum and tab[i]!= maximum1:
        maximum2 = tab[i]
      

print(maximum)
print(maximum1)
print(maximum2)
