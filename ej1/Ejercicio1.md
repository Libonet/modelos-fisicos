# Ejercicio 1

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
