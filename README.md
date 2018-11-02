# PRINT_Y_PRINTLN_MOD
Libreria con versiones especiales de print y println del objeto Serial del nucleo Arduino. 

# Modo de uso
Despues de añadir la libreria al codigo usuario, es posible hacer la siguiente llamada:<br>
&emsp;printlnmod("1","2","3");<br>

Esto generara tres instrucciones Serial.print, siendl la ultima de ellas un println, dando como resultado lo siguiente<br>
&emsp;123<br>
  
Tambien, existe la siguiente opcion.<br>
&emsp;printlnmodsep("|","1","2","3");<br>
  
Entregando lo siguiente por la puerta serial:<br>
&emsp;1|2|3<br>
 
(Notese que el primer argumento corresponde al separador)<br>
<br>
Tanto para printlnmod como para printlnmodsep, la cantidad de argumentos no esta limitada.
