#ifndef CART_H
#define CART_H

#define MAX_ITEMS_off;
#define MAX_ITEMS_on;

#include <string.h>

// OFFLINE WARENKORB
class ShopCart_off {

  int nrItems;

  Article articles[MAX_ITEMS_off];
  string articleNames[MAX_ITEMS_off];

  // Rabatte?
  int fullValue;

public:
  ShopCart(){

  }

};


// OFFLINE WARENKORB
class ShopCart_on {

  int nrItems;

  Article articles[MAX_ITEMS];
  string articleNames[MAX_ITEMS];

  // Rabatte?
  int fullValue;

};


#endif
