---
title: "Ejercicio 1"
geometry: margin=2cm
output: pdf_document
header-includes:
  - \usepackage{graphicx}
  - \usepackage{amsmath}
  - \usepackage{amssymb}
---

## Apartado a)

El vagón de longitud $L$ y rapidez inicial $v_0$ junto a la arena que cae sobre él conforman un sistema de partículas. Tenemos que la sumatoria de las fuerzas externas que actúan sobre el sistema es igual a 0: $\sum F = 0$. 

Siendo $P_0 = m_0 v_0$ la cantidad de movimiento inicial (antes de pasar por el conducto) y $P = mv$ la cantidad de movimiento final (tras pasar por el conducto), por conservación de la cantidad de movimiento debe ser $P_0 = P \Rightarrow$ $m_0v_0 = mv$, donde $m$ y $v$ son la masa y la velocidad del sistema tras pasar por el conducto, respectivamente. Podemos descomponer $m = m_0 + m_1$, donde $m_1$ es la masa que gana el sistema (la masa de arena que cae sobre el vagón).

Consideremos que el tiempo inicial es $t_0 = 0~s$ y el tiempo final es $t_f$. Además, la masa inicial de arena sobre el vagón (antes de que caiga algún grano) es $0~kg$.

Tenemos que ${{dm} \over dt} = q$. Luego:
$${{dm} \over dt} = q$$
$$\Rightarrow$$
$$dm = q~dt$$
$$\Rightarrow$$
$$\int_{0}^{m_1} dm = \int_{t_0}^{t_f} q~dt$$
$$\Rightarrow$$
$$m_1 = q~t_f$$

Por lo tanto, reemplazando en la ecuación anterior, tenemos que $m_0v_0 = (m_0 + qt_f)v$. Para cualquier instante $t$ la ecuación resulta $m_0v_0 = (m_0 + qt)v$

Ya conocemos el desplazamiento del sistema en el intervalo $[t_0, t_f]$: es igual a L (ya que el vagón abandonará el conducto una vez que toda su longitud lo abandone). Consideramos entonces que la posición del sistema en el instante $t_0$ es $x_0 = 0~m$ y en el instante $t_f$ es $x_f = L$.

De la última ecuación despejamos $v = {{m_0v_0} \over m_0 + qt}$, y como $v = {dx \over dt}$, tenemos que ${dx \over dt} = {{m_0v_0} \over m_0 + qt_f} \Rightarrow dx = {{m_0v_0~dt} \over m_0 + qt}$. Luego:

$$dx = {{m_0v_0~dt} \over m_0 + qt}$$
$$\Rightarrow$$
$$\int_{0}^{L} dx = \int_{0}^{t_f} {{m_0v_0~dt} \over m_0 + qt}$$
$$\Rightarrow$$
$$\int_{0}^{L} dx = m_0v_0 \int_{0}^{t_f} {dt \over m_0 + qt}$$
$$\Rightarrow$$
$$Sustitución: u = m_0 + qt; du = qdt \Rightarrow {du \over q} = dt$$
$$\Rightarrow$$
$$L = m_0v_0 \int_{0}^{t_f} {du \over qu}$$
$$\Rightarrow$$
$$L = {m_0v_0 \over q} \int_{0}^{t_f} {du \over u}$$
$$\Rightarrow$$
$$L = {m_0v_0 \over q} \left[ln(u)\right]_{0}^{t_f}$$
$$\Rightarrow$$
$$L = {m_0v_0 \over q} \left[ln(m_0 + qt)\right]_{0}^{t_f}$$
$$\Rightarrow$$
$$L = {m_0v_0 \over q}~(ln(m_0 + qt_f) - ln(m_0 + q * 0~s))$$
$$\Rightarrow$$
$$L = {m_0v_0 \over q}~(ln(m_0 + qt_f) - ln(m_0))$$
$$\Rightarrow$$
$$L = {m_0v_0 \over q}~ln({{m_0 + qt_f} \over m_0})$$

Nosotros queremos obtener $m = m_0 + qt_f$. Despejando en la última ecuación tenemos:

$$L = {m_0v_0 \over q}~ln({{m_0 + qt_f} \over m_0})$$
$$\Rightarrow$$
$${qL \over m_0v_0} = ln({{m_0 + qt_f} \over m_0})$$
$$\Rightarrow$$
$$e^{qL \over m_0v_0} = e^{ln({{m_0 + qt_f} \over m_0})}$$
$$\Rightarrow$$
$$e^{qL \over m_0v_0} = {{m_0 + qt_f} \over m_0}$$
$$\Rightarrow$$
$$m_0~e^{qL \over m_0v_0} = m_0 + qt_f = m$$

Finalmente, la masa del vagón y su carga tras dejar atrás el conducto es:

$$\bold{m = m_0~e^{qL \over m_0v_0}}$$

## Apartado b)

En el apartado anterior despejamos $v = {{m_0v_0} \over m_0 + qt}$. Por lo tanto para el instante $t_f$ tenemos:

$$v = {{m_0v_0} \over m_0 + qt_f}$$
$$\Rightarrow$$
$$v = {{m_0v_0} \over m}$$
$$\Rightarrow$$
$$v = {{m_0v_0} \over {m_0~e^{qL \over m_0v_0}}}$$
$$\Rightarrow$$
$$v = {{v_0} \over {e^{qL \over m_0v_0}}}$$
$$\Rightarrow$$
$$v = {v_0~e^{-{qL \over m_0v_0}}}$$

Por lo tanto, la rapidez del vagón al dejar atrás el conducto es:

$$\bold{v = {v_0~e^{-{qL \over m_0v_0}}}}$$