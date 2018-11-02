#include "Arduino.h"
#ifndef _PRINT_Y_PRINTLN_MOD_
#define _PRINT_Y_PRINTLN_MOD_
	template <typename X> void printmod(X x) {
      Serial.print(x);
    }

    template <typename Y, typename... Args> void printmod(Y&& x, Args&&... args) {
      Serial.print(x);
      printmod(args...);
    }

    template <typename Z> void printlnmod(Z&& x) {
      Serial.println(x);
    }

    template <typename F, typename... Args> void printlnmod(F&& x, Args&&... args) {
      Serial.print(x);
      printlnmod(args...);
    }
    template <typename K> void printlnmodsep(K&& x) {
      Serial.println(x);
    }
    template <typename K,typename R> void printlnmodsep(K&& x, R&& x2) {
      Serial.println(x2);
      if(x==0){}//no hace nada... es solo para evitar que salgan mensajes molestos en el compilador, este argumento debe ser ignorado
    }
    template <typename K,typename R, typename... Args> void printlnmodsep(K&& x, R&& x2, Args&&... args) {
      Serial.print(x2);
      Serial.print(x);
      printlnmodsep(x, args...);
    }

#endif
