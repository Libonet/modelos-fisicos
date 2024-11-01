import numpy as np
import matplotlib.pyplot as plt

# Constantes
g = 9.8  # Gravedad
r = 1.524  # Radio
v0 = 3.5**2  # Velocidad inicial
m = 0.45 # Masa
energia_inicial = (1/2) * v0 * m + m * g * r

# Magnitud del roce
def Fr(mu, theta):
    return mu * g * m * np.cos(theta)

# Altura cuando el bloque esta en el angulo theta
def altura(theta):
    return r * np.cos(theta)

def potencial(theta):
    return  m * g * altura(theta)

def W_fnc(mu,theta):
    return Fr(mu, theta) * theta * r

def velocidad_cuadrado(mu, theta):
    return (2/m) * (energia_inicial + W_fnc(mu,theta) - potencial(theta))


radianes = np.linspace(0, np.pi / 2, 100)  # Valores de radianes de 0 a pi/2
coeficientes = np.linspace(0, 0.4, 100)  # Valores de mu en el rango [0, 0.4]

# Listas para almacenar los puntos que cumplen la igualdad
x_points = []
y_points = []

# Comprobación de la igualdad
for mu in coeficientes:
    for theta in radianes:
        division = (velocidad_cuadrado(mu, theta) / np.cos(theta)) - m * g 
        print(division)
        if np.isclose(division,0, atol=1e-1):  # Tolerancia para la comparación
            x_points.append(mu)
            y_points.append(theta)

# Graficar los puntos que cumplen la igualdad
print(len(x_points))
plt.figure(figsize=(10, 6))
plt.plot(x_points, y_points, color='b', label=r'$\theta(\mu_c)$')
plt.xlabel('Coeficiente de rozamiento')
plt.ylabel('Theta crítico')
plt.title('Donde se desprende el bloque')
plt.xlim(0, np.pi / 2)
plt.ylim(0, 0.4)
plt.grid()
plt.show()
