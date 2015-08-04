#include "linkedList.h"

LinkedList::LinkedList()
{
  head = new Item;
  head -> next = NULL;
  length = 0;
}

void LinkedList::insertItem(Item *newItem)
{
  newItem->next = head->next;
  head->next = newItem;
  length++;
  return;
}

bool LinkedList::removeItem(string key){
  //STUB
  return false;
}
Item *LinkedList::getItem(string key){
  //STUB
  Item test;
  return &test;
}

void LinkedList::printList()
{
  printAssist(length, head);
  return;
}

void LinkedList::printAssist(int len, Item *currentItem)
{
  if (length == 0){
    cout << "NULL" << endl;
    return;
  }
  cout << currentItem->username << "," << currentItem->password << "->";
  printAssist(len--, currentItem->next);
  return;
}

int LinkedList::getLength()
{
  //STUB
  return 0;
}

LinkedList::~LinkedList()
{
  //STUB
}
