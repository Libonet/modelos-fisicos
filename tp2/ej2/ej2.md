---
title: "Ejercicio 2"
geometry: margin=2cm
output: pdf_document
header-includes:
  - \usepackage{graphicx}
  - \usepackage{amsmath}
  - \usepackage{amssymb}
---

## Apartado a)

Tenemos que un satélite se ubica en una órbita circular, por lo cual la fuerza de gravedad F que la tierra ejerce sobre el satélite es normal a la órbita, y se tiene que $F = {GMm \over r^2}$, donde G es la constante de gravitación universal, M es la masa de la tierra, m es la masa del satélite y r es la distancia del satélite al centro de la tierra.

También podemos escribir $F = ma$, y como $a = {v^2 \over r}$ obtenemos $F = {GMm \over r^2} = m {v^2 \over r}$, de donde $v^2 = {GM \over r}$.

Además sabemos que $GM = gR^2$, donde R es el radio de la tierra y g la aceleración de la gravedad, por lo cual escribimos $v^2 = {gR^2 \over r}$. Finalmente, despejamos la velocidad $v = R \sqrt{g \over r} = \sqrt{GM \over r}$ con la cual el satélite describe su órbita.

Además, la velocidad con la cual el satélite describe su órbita es $v = {2 \pi r\over T}$, donde T es el período (que tenemos como dato, T = 23.934 h). Luego, $R \sqrt{g \over r} = {2 \pi r\over T} \Rightarrow T = {2 \pi r \over {R \sqrt{g \over r}}}$

Para los siguientes cálculos utilizaremos estos valores de las constantes g y R:

* $g = 9.81~m/s^2 = 127137.6~km/h^2$
* $R = 6.37~.~10^6~m = 6370~km$

Ahora planteamos:

$$T = 23.934~h = {2 \pi \over R} {r \over \sqrt{g \over r}}$$
$$\Rightarrow$$
$${r \over \sqrt{g \over r}} = 24264.7~km~h$$
$$\Rightarrow$$
$${r^2 \over {g \over r}} = 588775461.2~km^2~h^2$$
$$\Rightarrow$$
$${r^3 \over g} = 588775461.2~km^2~h^2$$
$$\Rightarrow$$
$$r^3 = 588775461.2~km^2~h^2 * 127137.6~km/h^2 = 7.49~.~10^{13}~km^3$$
$$\Rightarrow$$
$$r = \sqrt[3]{7.49~.~10^{13}~km^3}$$
$$\Rightarrow$$
$$r = 42144.53~km$$

Obtuvimos que la distancia del satélite al centro de la tierra es $r = 42144.53~km$. Nosotros queremos calcular la distancia $d$ del satélite a la superficie terrestre, que será $d = r - R = (42144.53 - 6370)~km$.

Por lo tanto, al distancia del satélite a la superficie de la tierra es

$$\bold{d = 35774.53~km = 22229.26~mi}$$

En unidades del USI y de uso común en Estados Unidos resulta

$$\bold{d = 35774530~m = 117370492.8~ft}$$

## Apartado b)

En el apartado anterior dijimos que $v = {2 \pi r\over T}$. Luego:

$$v = 2 \pi {42144.53~km\over 23.934~h}$$
$$\Rightarrow$$
$$v = 2 \pi~1760.86~km/h$$

Finalmente, resulta

$$\bold{v = 11063.84~km/h = 6874.75~mi/h}$$

En unidades del USI y de uso común en Estados Unidos resulta

$$\bold{v = 3073.29~m/s = 10082.97~ft/s}$$
