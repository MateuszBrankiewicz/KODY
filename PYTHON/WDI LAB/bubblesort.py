from random import randint,seed
import time

    
n = 10000000
seed(1)
a=[0]*n
start=time.time()
for i in range(n):
    a[i] = (randint(0,35000)) 
stop=time.time()
print('generowanie', stop-start)
print(a)
print('start')
start=time.time()
# for i in range(n-1):
#         for j in range(n-i-1): 
#             if a[j] > a[j+1]:
#                 a[j], a[j + 1] = a[j + 1], a[j]
a.sort()
stop=time.time()
print(a)
print('sortowanie',stop-start)
print('koniec')