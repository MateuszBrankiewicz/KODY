import numpy as np
import matplotlib.pyplot as plt
t = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9])
x = []
y = []
for i in range(len(t)):
    x.append(1/4*pow(t, 4)+6*pow(t, 2)+2)
    y.append(3 * pow(t, 2) + 2)

plt.plot(x, y, 'o')
plt.xlabel("Zmienna x wektora")
plt.ylabel("Zmienna y wektora")
plt.show()
