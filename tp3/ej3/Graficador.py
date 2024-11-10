import numpy as np
import matplotlib.pyplot as plt

# Constantes
g = 9.8  # Gravedad
L = 0.45 # Longitud de la vara
VA = 1.5 # Velocidad de A
m = 5 # Masa


def omega(theta):
    return VA/ (L * np.cos(theta))

def alpha(theta):
    return omega(theta)**2 * np.tan(theta)

def aceleracion(theta):
    return (L * (omega(theta)**2)) / (2 * np.cos(theta))

def normalEnA(theta):
    return m * (g - aceleracion(theta))

def normalEnB(theta):
    return ((1/2) * m * L * (g - aceleracion(theta)) * np.sin(theta) - (1/12) * m * L**2 * alpha(theta))/(L * np.cos(theta))

radianes = np.linspace(0, 50 * (np.pi/180), 10000)  # Valores de radianes de 0 a pi/2

thetas = []
Normales_A = []
Normales_B = []
ang_separacion = 0
# Comprobación de la igualdad
for theta in radianes:
    norm_A = normalEnA(theta)
    norm_B = normalEnB(theta)

    thetas.append(theta)
    Normales_A.append(norm_A)
    Normales_B.append(norm_B)
    
    if np.isclose(norm_B,0, atol=1e-2):
        ang_separacion = theta

# Graficar los puntos que cumplen la igualdad
plt.figure(figsize=(10, 6))
plt.plot(thetas, Normales_A, color='b', label="Normal de A")
plt.plot(thetas, Normales_B, color='r', label="Normal de B")
plt.plot(ang_separacion, 0, color="g", label="Angulo de separación. (%.5f)" %(ang_separacion))
plt.plot(ang_separacion,0,'go') 
plt.xlabel('Angulo')
plt.ylabel('Valor de la normal')
plt.xlim(0, 50 * (np.pi/180))
plt.ylim(-10, 40)
plt.grid()
plt.legend()
plt.show()