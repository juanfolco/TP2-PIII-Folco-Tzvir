VISUALIZADOR DE DATOS DE CASOS DE COVID-19

Como enunciado del segundo parcial de la materia PROGRAMACIÓN III, se realiza una  
aplicación informática que cuenta con una línea de comandos para el procesado y la 
lectura de distintos datos, siendo los mismos ordenados y agrupados en categorías 
especificas.

La información forma parte del archivo .CSV, de la sección “Dataset” del Ministerio 
de Salud, y posee todos los casos registrados de COVID-19 hasta la fecha. 

En este repositorio se cuenta con dos carpetas, que contienen los siguientes 
contenidos:

•	Data_sortings: presenta las estructuras de datos utilizadas para la contención 
    de los datos a ser analizados en los argumentos, siendo los siguientes:

-	AVLTree.h: árbol binario balanceado utilizados para ordenar datos en stad.h.
-	ListCasos.h: presenta lista que luego será utilizada para el almacenamiento de 
    los datos de los argumentos.
-	NodeCasos.h: presenta el nodo que ListCasos.h utiliza.
-	TreeNode.h: nodo de árbol binario balanceado AVLTree.h.
-   merge.h y mergesort.h: algoritmo de ordenamiento merge que compara listas
-	mergesort.h y mergesort_num.h: presenta algoritmo de ordenamiento merge sort 
    que compara provincias en p_casos.h y p_muertes.h.
-	mergefecha.h y mergesortfecha.h: presenta algoritmo de ordenamiento merge sort 
    que compara fechas en casos_cui.h.
-	rango.h: presenta clase para colocar datos de stad.h, que luego serán ordenados 
    en AVLTree.h.

•	Methods: presenta los métodos que formarán parte de los argumentos de la línea 
    de comandos:
    
-	Paciente.h: presenta clase donde se incorporan datos para incorporarlos en las 
    listas en los argumentos (excepto en p_casos.h).
-	casos_cui.h: muestra de casos en cuidados intensivos ordenados por fecha. 
    En caso de que se haya insertado un parámetro, se presenta solo las fechas 
    mayores a esta.
-	casos_edad.h: siendo ordenados de acuerdo al nombre de la provincia, el dato 
    corresponderá a los años de los pacientes.
-	estado.h: presenta clase donde se incorporan datos para incorporarlos en las 
    listas en los argumentos (p_casos.h y  p_muertes.h).
-	p.casos.h: en caso del pasaje de un valor, se muestra las provincias con mayor 
    cantidad de casos ordenadas de más a menos. Si no presenta parámetros, 
    se detalla la información relacionada a todas las provincias.
-	p_muertes.h: si hay parámetro, se visualiza las provincias con mayor cantidad 
    de muertes de más a menos. En caso contrario, habrá datos de todas las provincias. 
-	Stad.h: exhibición de la información estadística de cada caso. 
	Cantidad total de muestras. 
	Cantidad total de infectados. 
	Cantidad de fallecidos. 
	% de infectado por muestras. 
	% de fallecidos por infectados. 
	Cantidad de infectados por rango etario ( rango de 10 años) 
	Cantidad de muertes por rango etario ( rango de 10 años)

Herramientas informáticas utilizadas

La creación de este proyecto no hubiera sido posible sin el uso de estas 
plataformas, siendo las mismas de gran ayuda para la estructura y desarrollo de 
este programa:

•	Github
•	CLION

 Bibliotecas utilizadas en CLION
 
•	iostream
•	fstream
•	string.h
•	string
•	sstream
•	bits/stdc++.h
•	utility

Link del sitio
https://github.com/juanfolco/TP2-PIII-Folco-Tzvir

Autores
Created and developed by Juan Ignacio Folco and Vera Estefanía Tzvir
