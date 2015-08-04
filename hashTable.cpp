#include "hashTable.h"

HashTable::HashTable()
{
  int tableLength = 13;
  //STUB
 length = tableLength;
}

void HashTable::insertItem( Item *newItem)
{
  //STUB
  return;
}

bool HashTable::removeItem(string key)
{
  //STUB
  return false;
}

Item *HashTable::getItem(string key)
{
  //STUB
  Item stub;
  return &stub;
}

void HashTable::printTable()
{
  //STUB
  return;
}

void HashTable::printHistogram()
{
  //STUB
  return;
}

int HashTable::getLength()
{
  //STUB
  return 0;
}

int HashTable::getNumberOfItems()
{
  //STUB
  return 0;
}

int HashTable::hash(string key)
{
  //STUB
  return 0;
}

HashTable::~HashTable()
{
  //STUB
}
