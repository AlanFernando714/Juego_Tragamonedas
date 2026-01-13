🎰 Máquina Tragamonedas en C++
📌 Descripción

Este proyecto es un juego de consola desarrollado en C++ que simula el funcionamiento de una máquina tragamonedas.
El jugador utiliza créditos para girar la ruleta y puede ganar o perder monedas según combinaciones aleatorias generadas por el programa.

El proyecto fue desarrollado con fines académicos, reforzando conceptos básicos de programación estructurada y lógica de juego.

🎯 Objetivo del juego

El objetivo es ganar la mayor cantidad de monedas posibles, utilizando créditos para girar la ruleta y obteniendo premios según los números que aparezcan.

🕹️ Cómo jugar

Al iniciar el programa, el jugador debe ingresar su nombre.

El jugador comienza con una cantidad inicial de monedas.

Cada giro de la ruleta:

Consume 1 moneda del usuario.

Agrega 1 moneda a la máquina.

Se generan tres números aleatorios entre 0 y 9.

Dependiendo de la combinación, el jugador puede ganar monedas:

777 → Gana todo el dinero de la máquina.

000 → Gana $7 o el total disponible si la máquina no tiene suficiente.

Tres números iguales → Gana $3.

Dos números iguales → Gana $1.

Sin coincidencias → No gana monedas.

Si el jugador se queda sin créditos, puede comprar más monedas o terminar su partida.

El jugador puede pausar o retirarse, y el sistema guarda su estado.

Al apagar la máquina, se muestra un marcador final con los jugadores y sus créditos.

🏆 Final del juego

El juego termina cuando:

El jugador decide retirarse.

El jugador se queda sin monedas y no compra más.

Se apaga la máquina y se muestra el marcador final.

⚙️ Conceptos utilizados

Programación en C++

Funciones

Arreglos

Generación de números aleatorios (rand)

Estructuras de control (if, switch, do-while)

Manejo básico de memoria

Uso de librerías del sistema (windows.h)

🛠️ Requisitos

Compilador de C++

Sistema operativo Windows (uso de librería windows.h)

Consola o terminal

📁 Estructura del proyecto
maquina-tragamonedas-cpp/
├── tragamonedas.cpp
├── README.md
└── .gitignore

📚 Tipo de proyecto

Proyecto académico – Programación en C++

Este proyecto fue realizado como práctica para reforzar la lógica de programación y el uso de funciones en C++.

👤 Autor

Alan Fernando Carlos Flores
Estudiante de Ingeniería en Sistemas Computacionales

📄 Licencia

Este proyecto se proporciona únicamente con fines educativos.
El autor no se hace responsable del uso indebido del código.