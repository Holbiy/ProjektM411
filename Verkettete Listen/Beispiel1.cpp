#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//TypeDef
typedef struct Elm
{
  int Preis;
  char Bez[4];
  struct Elm* pNext;
} struElm;

//FunktionenKopf
struElm* CreateList(int);
void OutPutList(struElm*);
void StartMenu();

int main()
{
  StartMenu();/*
  struElm* pStart = CreateList(100);
  OutPutList(pStart);
  */
  

  system("pause");
  return  0;
}

void OutPutList(struElm* pStart)
{
  //Ausgabe
  for (struElm* pElm = pStart; pElm != NULL; pElm = pElm->pNext)
  {
    printf("Nr = %i\n", pElm->Preis);
  }
}

struElm* CreateList(int anzahlElemente)
{
  struElm* pNew = NULL;
  struElm* pStart = NULL;
  srand(time(NULL));

  for (int i = 0; i < anzahlElemente; i++)
  {
    //Elemente erstellen
    pNew = (struElm*)malloc(sizeof(struElm));
    pNew->Preis = rand() %9990 + 10;
    strcpy_s(pNew->Bez, "ABC");
    pNew->pNext = NULL;
    //Neues Element an Liste anfügen
    if (pNew == NULL) pStart = pNew;
    else
    {
      pNew->pNext = pStart;
      pStart = pNew;
    }
  }
  return pStart;
}

struElm* SortList(struElm* pStart)
{





  return pStart;
}

void StartMenu()
{
  printf("Funktionen:\n 1\tListe Erstellen \n2\tListe löschen\n3\tListe sortieren\n4\tListe ausgeben\n5\tProgramm beenden\n");

  

}