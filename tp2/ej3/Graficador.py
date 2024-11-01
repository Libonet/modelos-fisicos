import numpy as np
import matplotlib.pyplot as plt

# Constantes
g = 9.8  # Gravedad
r = 1.524  # Radio
v0 = 3.5**2  # Velocidad inicial

# Rango de valores para x y y
y_vals = np.linspace(0, np.pi / 2, 100)  # Valores de x en radianes de 0 a pi/2
x_vals = np.linspace(0, 0.4, 100)  # Valores de y en el rango [0, 0.4]

# Listas para almacenar los puntos que cumplen la igualdad
x_points = []
y_points = []

# Comprobación de la igualdad
for x in x_vals:
    for y in y_vals:
        lhs = ((v0 + 2 * g * (r - np.cos(x) * r) + 2 * y * g * np.cos(x) * x * r) ** 2) / np.cos(x)
        rhs = r * g
        if np.isclose(lhs, rhs, atol=1e-5):  # Tolerancia para la comparación
            x_points.append(x)
            y_points.append(y)

# Graficar los puntos que cumplen la igualdad
plt.figure(figsize=(10, 6))
plt.scatter(x_points, y_points, color='blue', s=10)
plt.xlabel('Coeficiente de rozamiento')
plt.ylabel('Theta crítico')
plt.title('Donde se desprende el bloque')
plt.xlim(0, np.pi / 2)
plt.ylim(0, 0.4)
plt.grid()
plt.show()
