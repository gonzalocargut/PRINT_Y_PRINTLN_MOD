# PRINT_Y_PRINTLN_MOD
Libreria con versiones especiales de print y println del objeto Serial del nucleo Arduino. 

# Modo de uso
despues de añadir la libreria al codigo usuario, es posible hacer la siguiente llamda:<br>
&nbsp  printlnmod("1","2","3");<br>

esto generara tres instrucciones Serial.print, siendl la ultima de ellas un println, dando como resultado lo siguiente<br>
    123<br>
  
tambien, existe la siguiente opcion.<br>
    printlnmodsep("|","1","2","3");<br>
  
entregando lo siguiente por la puerta serial:<br>
    1|2|3<br>
 
(notese que el primer argumento corresponde al separador)<br>
