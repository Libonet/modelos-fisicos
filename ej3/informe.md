---
title: "Ejercicio 3"
geometry: margin=2cm
output: pdf_document
header-includes:
  - \usepackage{graphicx}
  - \usepackage{amsmath}
  - \usepackage{amssymb}
---

## Apartado a) 1.

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

## Apartado a) 2.

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