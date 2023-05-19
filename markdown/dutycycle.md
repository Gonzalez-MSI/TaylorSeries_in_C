# Modulación de Ancho de Pulso (PWM)

### PWM
La señal PWM (Pulse Width Modulation, Modulación de Ancho de Pulso) es una señal que utiliza el microcontrolador para generar una señal continua sobre el proceso a controlar.

### Ciclo de trabajo

El ciclo de trabajo, a veces denominado “factor de trabajo”, se expresa como un porcentaje del tiempo de activación. Por ejemplo, un ciclo de trabajo del 10% es una señal que se encuentra activada el 10% del tiempo y desactivada el otro 90%.

![DutyCycle](images/Duty.png)

### Simulacion en Multisim

```
Señales cuadradas solicitadas:
```
![Señales Cuadradas](images/SQ2.png)

Para simular las señales cuadradas solicitadas deben seguirse los siguientes pasos:

1. Seleccionar el modo de onda cuadrada en el generador de funciones Agilent

![SQ](images/CD1.png)

1. Especificar la frecuencia a partir de la expresión

$$\omega = 5\pi \frac{kRads}{s}$$

Siendo $\omega$ la frecuencia angular en kilo radianes y conociendo que 

$$\omega = \frac{2 \pi}{T} \ \ y \ \ f = \frac{1}{T}$$

por tanto 

$$5\pi = \frac{2\pi}{T}$$

$$\frac{5\pi}{2\pi} = \frac{1}{T}$$

$$\frac{5\cancel{\pi}}{2\cancel{\pi}} = f$$

$$\boxed{Frecuencia \rarr 2.5kHz = f}$$


![](2023-05-18-20-29-16.png)

2. Calcular el periodo de la señal

$$f = 2.5kHz = 2500Hz$$

$$T = \frac{1}{f}$$

$$T = \frac{1}{2500Hz}$$

$$\boxed{Periodo \rarr T = 0.0004s = 400\mu s} $$

3. Establecer el $V_{pp}$ en el generador

A partir de las figuras proporcionadas de las señales solicitadas, podemos identificar que la amplitud es de 2V o, lo que es lo mismo, un voltaje pico a pico de  $V_{pp} = 4V$. 

![](2023-05-18-20-47-36.png)

4. Ajustar las escalas de voltaje y tiempo en el osciloscopio

En este caso se emplearon divisiones de 2V para la escala del voltaje y, a su vez, se emplearon divisiones de 100$\mu$s para la escala del tiempo.

![](2023-05-18-20-59-38.png)

5. Ajustar el ciclo de trabajo

Para ajustar el ciclo de trabajo se debe presionar el botón ```Shift``` del generador de funciones y posteriormente el botón ```Offset``` , mismo que cuenta con leyenda de ```% Duty```.

![](2023-05-18-21-06-09.png)