# PRINT_Y_PRINTLN_MOD
Libreria con versiones especiales de print y println del objeto Serial del nucleo Arduino. 

# Modo de uso
Despues de añadir la libreria al codigo usuario, es posible hacer la siguiente llamada:<br>
	printlnmod("1","2","3");

Esto generara tres instrucciones Serial.print, siendo la ultima de ellas un println, dando como resultado lo siguiente<br>
	123
  
Tambien, existe la siguiente opcion.<br>
	printlnmodsep("|","1","2","3");
  
Entregando lo siguiente por la puerta serial:<br>
	1|2|3
 
(Notese que el primer argumento corresponde al separador)<br>
<br>
Tanto para printlnmod como para printlnmodsep, la cantidad de argumentos no esta limitada.
