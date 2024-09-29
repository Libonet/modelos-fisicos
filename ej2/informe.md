---
title: "Ejercicio 2"
geometry: margin=2cm
output: pdf_document
---

### Solución

La pelota al dejarse caer por los escalones describe una serie de parábolas que podemos calcular de esta manera:

$$
\begin{aligned}
x(t) &= x_0 + v_0 * seno(\alpha) * t \\
y(t) &= y_0 + e*v_0 * cos(\alpha) * t - (1/2) * g * t^2
\end{aligned}
$$

Siendo "e" el coeficiente de restitución de la pelota y fijando el centro de nuestro eje al inicio del primer escalón.

Para determinar si la pelota cae en un escalón en particular obtenemos el tiempo que tarda en caer hasta la altura del escalón y revisamos si no superó el ancho del escalón.

Si encontramos que la pelota rebota en el mismo escalón, mantenemos el eje, pero al momento de superarlo y caer cambiamos nuestro eje por el del nuevo escalón, y calculamos dónde rebota en el mismo.

Estos son los resultados obtenidos para los distintos casos de prueba especificados en el ejercicio

TEST: velocidad inicial=1.80 m/s; angulo=18.00 grados; restitucion=0.6  
cantidad de rebotes (escalon 1 a 8): 1 2 3 2 3 3 2 3  
a) La pelota baja por las escaleras sin saltarse ningun escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 2 al menos dos veces  

TEST: velocidad inicial=1.80 m/s; angulo=18.00 grados; restitucion=0.5  
cantidad de rebotes (escalon 1 a 8): 1 3 2 3 3 2 3 3   
a) La pelota baja por las escaleras sin saltarse ningun escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 2 al menos dos veces  

TEST: velocidad inicial=1.80 m/s; angulo=22.00 grados; restitucion=0.6  
cantidad de rebotes (escalon 1 a 8): 1 2 2 2 2 2 2 2   
a) La pelota baja por las escaleras sin saltarse ningun escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 2 al menos dos veces  

TEST: velocidad inicial=1.80 m/s; angulo=22.00 grados; restitucion=0.5  
cantidad de rebotes (escalon 1 a 8): 1 2 2 2 2 2 2 3   
a) La pelota baja por las escaleras sin saltarse ningun escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 2 al menos dos veces  

TEST: velocidad inicial=1.80 m/s; angulo=26.00 grados; restitucion=0.6  
cantidad de rebotes (escalon 1 a 8): 1 1 2 1 2 2 2 1   
a) La pelota baja por las escaleras sin saltarse ningun escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 3 al menos dos veces  

TEST: velocidad inicial=1.80 m/s; angulo=26.00 grados; restitucion=0.5  
cantidad de rebotes (escalon 1 a 8): 1 2 1 2 2 1 2 2   
a) La pelota baja por las escaleras sin saltarse ningun escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 2 al menos dos veces  

TEST: velocidad inicial=2.40 m/s; angulo=18.00 grados; restitucion=0.6  
cantidad de rebotes (escalon 1 a 8): 1 1 2 1 2 2 2 2   
a) La pelota baja por las escaleras sin saltarse ningun escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 3 al menos dos veces  

TEST: velocidad inicial=2.40 m/s; angulo=18.00 grados; restitucion=0.5  
cantidad de rebotes (escalon 1 a 8): 1 1 2 2 2 2 2 1   
a) La pelota baja por las escaleras sin saltarse ningun escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 3 al menos dos veces  

TEST: velocidad inicial=2.40 m/s; angulo=22.00 grados; restitucion=0.6  
cantidad de rebotes (escalon 1 a 8): 1 1 1 1 1 2 1 2   
a) La pelota baja por las escaleras sin saltarse ningun escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 6 al menos dos veces  

TEST: velocidad inicial=2.40 m/s; angulo=22.00 grados; restitucion=0.5  
cantidad de rebotes (escalon 1 a 8): 1 1 1 2 1 1 2 1   
a) La pelota baja por las escaleras sin saltarse ningun escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 4 al menos dos veces  

TEST: velocidad inicial=2.40 m/s; angulo=26.00 grados; restitucion=0.6  
cantidad de rebotes (escalon 1 a 8): 1 1 0 2 1 1 1 1   
a) La pelota se salta un escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 4 al menos dos veces  

TEST: velocidad inicial=2.40 m/s; angulo=26.00 grados; restitucion=0.5  
cantidad de rebotes (escalon 1 a 8): 1 1 1 1 1 1 1 1   
a) La pelota baja por las escaleras sin saltarse ningun escalon  
b) La pelota no rebota dos veces en un mismo escalon  
c) La pelota no rebota dos veces en un mismo escalon  

TEST: velocidad inicial=3.00 m/s; angulo=18.00 grados; restitucion=0.6  
cantidad de rebotes (escalon 1 a 8): 1 1 0 2 1 1 2 1   
a) La pelota se salta un escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 4 al menos dos veces  

TEST: velocidad inicial=3.00 m/s; angulo=18.00 grados; restitucion=0.5  
cantidad de rebotes (escalon 1 a 8): 1 1 1 1 1 2 1 2   
a) La pelota baja por las escaleras sin saltarse ningun escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 6 al menos dos veces  

TEST: velocidad inicial=3.00 m/s; angulo=22.00 grados; restitucion=0.6  
cantidad de rebotes (escalon 1 a 8): 1 0 1 1 0 2 1 1   
a) La pelota se salta un escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 6 al menos dos veces  

TEST: velocidad inicial=3.00 m/s; angulo=22.00 grados; restitucion=0.5  
cantidad de rebotes (escalon 1 a 8): 1 0 1 1 1 1 1 2   
a) La pelota se salta un escalon  
b) La pelota rebota dos veces sobre un mismo escalon  
c) La pelota rebota sobre el escalon 8 al menos dos veces  

TEST: velocidad inicial=3.00 m/s; angulo=26.00 grados; restitucion=0.6  
cantidad de rebotes (escalon 1 a 8): 1 0 1 0 1 1 0 1   
a) La pelota se salta un escalon  
b) La pelota no rebota dos veces en un mismo escalon  
c) La pelota no rebota dos veces en un mismo escalon  

TEST: velocidad inicial=3.00 m/s; angulo=26.00 grados; restitucion=0.5  
cantidad de rebotes (escalon 1 a 8): 1 0 1 1 0 1 1 1   
a) La pelota se salta un escalon  
b) La pelota no rebota dos veces en un mismo escalon  
c) La pelota no rebota dos veces en un mismo escalon  
