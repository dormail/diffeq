# plot.py start

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

df = pd.read_csv('starting_value.csv')

x = df['x']
y = df['y']
yp = df['yp']

def f(x):
    xi =  ((1 + np.exp(-1 * np.pi / 4)) / np.sqrt(2))
    l = (np.sin(x) + np.cos(x)) * np.exp(-x) / 2
    kl = xi - l
    return kl / np.sin(x)

ya = x.copy()

for i in range(0,len(ya)):
    ya[i] = f(ya[i])

plt.plot(x,y)
plt.plot(x,ya)
plt.show()

# plot.py end
