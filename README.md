<h3> Sintaxis y Semántica de los Lenguajes </h3>

Curso K2051 - Lunes Turno Noche

Ciclo Lectivo 2021

Legajo: 155.478-5

Apellido y Nombre: Baltazar Llusco, Elmer

Usuario GitHub: ebaltazar

Compilador utilizado: C18 (Visual Studio Code y MinGW)


<h3> Procesos de Compilación </h3>

Fuente -> Preprocesamiento -> Fuente Preprocesado

El primer paso que hace el compilador es pre-procesar el código fuente, interpreta toda directiva #define, #include.. entre otros y genera una salida.

Compilación -> Código Ensamblador -> Ensamblador -> Código Objeto

En el siguiente paso, se procede a realizar la compilación de la salida mencionada para formar un código binario NO ejecutable.
Para esto, la transforma al lenguaje ensamblador propio de nuestro procesador y después se procede a 'ensamblarlo' a código objeto.

Linkeo -> Ejecutable

Luego, para lograr que el código objeto sea ejecutable se realiza un linkeo (enlace) con las librerías utilizadas del sistema (y otras que utilice).
Gracias a esto, el archivo contendrá lo necesario para poder crear el ejecutable.


![image](https://user-images.githubusercontent.com/38117838/115179800-87504000-a0aa-11eb-8eea-5fc634e019d3.png)
Etapas de la compilación (Imagen)
