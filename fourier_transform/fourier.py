import matplotlib.pyplot as plt
import numpy as np

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

with open("sample.dat", "w") as f:
    np.savetxt(f, arr)

plt.figure(figsize = (8, 6))
plt.plot(t, x, 'r')
plt.ylabel('Amplitude')

plt.show()

def DFT(x):
    """
    Function to calculate the 
    discrete Fourier Transform 
    of a 1D real-valued signal x
    """

    N = len(x)
    n = np.arange(N)
#    print(n)
    k = n.reshape((N, 1))
#    print(k)
    e = np.exp(-2j * np.pi * k * n / N)
    
    X = np.dot(e, x)
    
    return X


X = DFT(x)
#print(X)
# calculate the frequency
N = len(X)
n = np.arange(N)
T = N/sr
freq = n/T
#print(freq) 
#print(abs(X))

plt.figure(figsize = (8, 6))
plt.stem(freq, abs(X), 'b', \
         markerfmt=" ", basefmt="-b")
plt.xlabel('Freq (Hz)')
plt.ylabel('DFT Amplitude |X(freq)|')
plt.show()