---
title: "Ejercicio 3"
geometry: margin=2cm
output: pdf_document
header-includes:
  - \usepackage{graphicx}
  - \usepackage{ebproof}
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

Por lo tanto, obtuvimos $\bold{t_f = {-v_0 \over a(t_f)}}$.

Ahora queremos calcular $d = x(t_f)$. Por estar en un MRUV tenemos que se cumple esta ecuación: $x(t_f) = x_0 + v_0 (t_f - t_0) + {1 \over 2} a(t_f) (t_f - t_0)^2$.

Como $t_0 = 0~s$ y $x_0 = 0~m$, resulta: $x(t_f) = v_0 t_f + {1 \over 2} a(t_f) t_f^2$.

Finalmente obtuvimos $\bold{d =v_0 t_f + {1 \over 2} a(t_f) t_f^2}$.



