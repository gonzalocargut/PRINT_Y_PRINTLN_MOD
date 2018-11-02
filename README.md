# PRINT_Y_PRINTLN_MOD
Libreria con versiones especiales de print y println del objeto Serial del nucleo Arduino. 

# Modo de uso\n
despues de añadir la libreria al codigo usuario, es posible hacer la siguiente llamda:
  printlnmod("1","2","3");

esto generara tres instrucciones Serial.print, siendl la ultima de ellas un println, dando como resultado lo siguiente
  123
  
tambien, existe la siguiente opcion.
  printlnmodsep("|","1","2","3");
  
entregando lo siguiente por la puerta serial:
  1|2|3
 
(notese que el primer argumento corresponde al separador)
