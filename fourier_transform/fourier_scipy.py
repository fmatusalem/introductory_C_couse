#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun May  1 20:59:13 2022

@author: filipe
"""

import matplotlib.pyplot as plt
import numpy as np
from scipy.fft import rfft, rfftfreq

plt.style.use('seaborn-poster')
#%matplotlib inline

# sampling rate
sr = 100
# sampling interval
ts = 1.0/sr
t = np.arange(0,1,ts)

freq = 1.
x = 3*np.sin(2*np.pi*freq*t)

freq = 4
x += np.sin(2*np.pi*freq*t)

freq = 7   
x += 0.5* np.sin(2*np.pi*freq*t)

arr=np.column_stack((t,x))

#with open("sample.dat", "w") as f:
#    np.savetxt(f, arr)

plt.figure(figsize = (8, 6))
plt.plot(t, x, 'r')
plt.ylabel('Amplitude')

plt.show()

X = rfft(x)
#print(X)

n=100

#Given a window length n and a sample spacing d in seconds:
freq=rfftfreq(n, d=0.01)
print(freq)

plt.figure(figsize = (8, 6))
plt.stem(freq, abs(X), 'b', \
         markerfmt=" ", basefmt="-b")
plt.xlabel('Freq (Hz)')
plt.ylabel('DFT Amplitude |X(freq)|')
plt.show()