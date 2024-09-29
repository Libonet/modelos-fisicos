---
title: "Primer TP modelos fisicos"
geometry: margin=2cm
output: pdf_document
header-includes:
  - \usepackage{graphicx}
  - \usepackage{amsmath}
  - \usepackage{amssymb}
---

## Ejercicio 1

Para poder resolver de una forma "sencilla" vamos a pensar al problema como uno de vectores. Sabemos que si el origen de coordenadas es A entonces el vector P puede calcularse de la siguiente forma: (r es la longitud de la varilla $AP$)

$$\overline{P_A(t)}\ =\ (r \times \cos(\phi(t)),r \times \sin(\phi(t)))$$

El problema es que nos interesa saber el angulo que se forma entre el vector $\overline{i}$ cuando el origen de coordenadas se encuentra en B. Sin embargo, punto B es equivalente a $ A + (0, l)$ siendo $l$ la distancia entre ellos. De hecho, culaquier vector con origen de coordenadas $B$ podemos trasladarlo a $A$ sumando $\overline{l}=(0,l)$ o trasladar de $A$ a $B$ restando $\overline{l}=(0,l)$.

Entonces tenemos que en $B$:

$$\overline{P_B(t)}\ =\overline{P_A(t)}-\overline{l}$$

$$\overline{P_B(t)}\ =\ (r \times \cos(\phi(t)),r \times \sin(\phi(t)))-\overline{l}$$

$$= (r \times \cos(\phi(t)),r \times \sin(\phi(t)))-(0,l)$$

$$= (r \times \cos(\phi(t)),(r \times \sin(\phi(t))) - l)$$

Sabiendo esto podemos calcular:
$$ \cos(\widehat{\overline{i}\overline{P_B(t)}}) = \frac{\overline{i} \times \overline{P_B(t)}}{\vert\overline{i} \vert \times \vert \overline{P_B(t)} \vert}$$
$$ = \frac{r \times \cos(\phi(t))}{1 \times \vert \overline{P_B(t)} \vert}$$
$$ = \frac{r \times \cos(\phi(t))}{\sqrt{(r \times \cos(\phi(t)))^2\ +\ (r \times \sin(\phi(t)) - l)^2}}$$
$$ = \frac{r \times \cos(\phi(t))}{\sqrt{r^2 \times \cos(\phi(t))^2\ +\ (r \times \sin(\phi(t))-l)^2}}$$
$$ = \frac{r \times \cos(\phi(t))}{\sqrt{r^2 -2 \times r \times \sin(\phi(t))+l^2}}$$

Y por lo tanto:

$$ \widehat{\overline{i}\overline{P_B(t)}} = \cos^{-1}(\frac{r \times \cos(\phi(t))}{\sqrt{r^2 -2 \times r \times \sin(\phi(t))\times l+l^2}})$$

Por simplicidad de la notación definimos:

$$f(t)= \cos^{-1}(\frac{r \times \cos(\phi(t))}{\sqrt{r^2 -2 \times r \times \sin(\phi(t))\times l+l^2}})$$

Pero esta no es la solución correcta. Esto nos da el menor ángulo entre $\overline{i}$ y $\overline{P_B(t)}$ por lo que hay que tener en cuenta si este angulo es el que buscamos.  
Para determinar esto, simplemente hay que determinar si el punto P se encuentra en los cuadrantes 1 o 2. Eso lo podemos determinar si la segunda componente de $\overline{P_B(t)}$ es mayor a 0.

Simplificando:

$$ \sin(\phi(t)) \ge \frac{l}{r}$$

Por lo tanto nos queda:

$$
\theta(t) = 
\begin{cases}
    f(t),& \text{si } \sin(\phi(t)) \ge \frac{l}{r}\\
    2\pi-f(t),& \text{si } \sin(\phi(t)) < \frac{l}{r}
\end{cases}
$$

Y también:

$$
\dot{\theta}(t) =
\begin{cases}
    \dot{f}(t),& \text{si } \sin(\phi(t)) \ge \frac{l}{r}\\
    -\dot{f}(t),& \text{si } \sin(\phi(t)) < \frac{l}{r}
\end{cases}
$$

## Ejercicio 2

La pelota al dejarse caer por los escalones describe una serie de parábolas que podemos calcular de esta manera:

$$
R(t) = 
\begin{cases}
x(t) &= x_0 + v_0 * seno(\alpha) * t \\
y(t) &= y_0 + e*v_0 * cos(\alpha) * t - (1/2) * g * t^2
\end{cases}
$$

Siendo "e" el coeficiente de restitución de la pelota y fijando el centro de nuestro eje al inicio del primer escalón.

Para determinar si la pelota cae en un escalón en particular obtenemos el tiempo que tarda en caer hasta la altura del escalón y revisamos si no superó el ancho del escalón.

$$
tiempo = {-velocidad \pm \sqrt{velocidad^2 - 4 * (-g/2) * -altura} \over 2 * (-g/2)}
$$

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


## Ejercicio 3

### Apartado a) 1.

En este caso sabemos que la aceleración es constante y el auto se mueve sobre una rampa recta, por ende el movimiento es un MRUV.

Del enunciado sacamos los siguientes datos:

* $v_0 = 60~mi/h$ (velocidad inicial)
* $v_f = 0~mi/h$ (velocidad final)
* $a(t) = cte = -10~ft/s^2$ (aceleración)

El programa se encarga de convertir estos valores al sistema USI.

Queremos calcular el tiempo $t_f$ requerido para que el automóvil quede en reposo y la distancia $d$ que recorre sobre la rampa.

Tomamos como tiempo inicial $t_0 = 0~s$ y la posición inicial $x_0 = 0 m$. Luego, la distancia recorrida será $d = x(t_f)$.

Como estamos en un MRUV, se cumple la siguiente ecuación: $v(t_f) = v_f = v_0 + a(t_f)(t_f - t_0)$. 

Como $v_f = 0~m/s$ y $t_0 = 0~s$, resulta: $v_0 + a(t_f) t_f = 0~m/s$.

Trabemos algebráicamente la expresión: $v_0 + a(t_f) t_f = 0~m/s$ $\Rightarrow$ $a(t_f) t_f = -v_0$ $\Rightarrow$ $t_f = -v_0/a(t_f)$.

Por lo tanto, obtuvimos
$$\bold{t_f = {-v_0 \over a(t_f)}}$$

Ahora queremos calcular $d = x(t_f)$. Por estar en un MRUV tenemos que se cumple esta ecuación: $x(t_f) = x_0 + v_0 (t_f - t_0) + {1 \over 2} a(t_f) (t_f - t_0)^2$.

Como $t_0 = 0~s$ y $x_0 = 0~m$, resulta: $x(t_f) = v_0 t_f + {1 \over 2} a(t_f) t_f^2$.

Finalmente, como $d = x(t_f)$, obtuvimos 
$$\bold{d =v_0~t_f + {1 \over 2}~a(t_f)~t_f^2}$$

### Apartado a) 2.

En este caso tenemos que la aceleración varía linealmente, por lo cual su ecuación tiene la forma $a(t) = mt + a_0$, siendo $a_0 = -10~ft/s^2$ y $a_f = a(t_f) = 0~m/s^2$.

Nuevamente queremos calcular el tiempo $t_f$ y la distancia $d$ con las definiciones hechas en el apartado anterior.

Tenemos que 
$a(t) = {dv \over dt}$ 
$\Rightarrow$
$dv = {a(t)~dt}$ 
$\Rightarrow$
$\int_{v_0}^{v_f} dv = \int_{t_0}^{t_f} a(t)~dt$
$\Rightarrow$
$\int_{v_0}^{v_f} dv = \int_{t_0}^{t_f} (mt+a_0)~dt$

Como $t_0 = 0~s$, resulta: 
$\int_{v_0}^{v_f} dv = m\int_{0}^{t_f} t~dt + \int_{0}^{t_f} a_0~dt$
$\Rightarrow$
$\left[v\right]_{v_0}^{v_f} = {m \over 2} \left[ t^2 \right]_{0}^{t_f} + a_0 \left[t\right]_{0}^{t_f}$
$\Rightarrow$
$v_f-v_0 = {1 \over 2}~m~t_f^2 + a_0~t_f$
$\Rightarrow$
$v_f = v(t_f) = v_0 +{1 \over 2}~m~t_f^2 + a_0~t_f$

Como $v_f = 0~m/s$, resulta: $-v_0 = {1 \over 2}~m~t_f^2 + a_0~t_f$

Luego podemos plantear el siguiente sistema de ecuaciones:

$$
\begin{cases}
mt_f + a_0 = a_f = 0~m/s^2\\
{1 \over 2}~m~t_f^2 + a_0~t_f = -v_0
\end{cases}
$$
$$\Rightarrow$$
$$
\begin{cases}
mt_f = -a_0\\
{1 \over 2}~(m~t_f)~t_f + a_0~t_f = -v_0
\end{cases}
$$

Obtenemos estas ecuaciones:

\begin{align}
mt_f = -a_0\\
{1 \over 2}~(m~t_f)~t_f + a_0~t_f = -v_0
\end{align}

Reemplazando $\it{(1)}$ en $\it{(2)}$ resulta: 
${1 \over 2}~(-a_0)~t_f + a_0~t_f = -v_0$
$\Rightarrow$
$a_0~t_f - {1 \over 2}~a_0~t_f = -v_0$
$\Rightarrow$
${1 \over 2}~a_0~t_f = -v_0$
$\Rightarrow$
$a_0~t_f = -2v_0$
$\Rightarrow$
$t_f = -2{v_0 \over a_0}$

Por lo tanto, obtuvimos que 
$$\bold{t_f = -2{v_0 \over a_0}}$$

Y despejamos la pendiente $m = -{a_0 \over t_f}$.

Ahora nos queda calcular la distancia recorrida sobre la rampa. Para ello debemos obtener la ecuación del desplazamiento.

Partamos de que: 
$v(t) = {dx \over dt}$ 
$\Rightarrow$
$dx = {v(t)~dt}$ 
$\Rightarrow$
$\int_{x_0}^{x_f} dx = \int_{t_0}^{t_f} v(t)~dt$
$\Rightarrow$
$\int_{x_0}^{x_f} dx = \int_{t_0}^{t_f} (v_0 +{1 \over 2}~m~t^2 + a_0~t)~dt$

Como $t_0 = 0~s$ y $x_0 = 0~m$, resulta:
$\int_{0}^{x_f} dx = v_0 \int_{0}^{t_f} dt +{1 \over 2}~m \int_{0}^{t_f} t^2~dt + a_0 \int_{0}^{t_f} t~dt$
$\Rightarrow$
$\left[x\right]_{0}^{x_f} = v_0 \left[t\right]_{0}^{t_f} + {m \over 6} \left[ t^3 \right]_{0}^{t_f} + {a_0 \over 2} \left[ t^2 \right]_{0}^{t_f}$
$\Rightarrow$
$x_f = v_0~t_f + {a_0 \over 2} t_f^2 + {m \over 6}~t_f^3$

Por lo tanto, como $d = x_f = x(t_f)$, obtuvimos:

$$\bold{d = v_0~t_f + {a_0 \over 2} t_f^2 + {m \over 6}~t_f^3}$$
