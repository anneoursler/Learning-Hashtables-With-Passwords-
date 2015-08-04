#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;

struct Item
{
  string username;
  string password;
  Item *next;
};

#endif
