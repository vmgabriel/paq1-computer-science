/*
 * App5.cxx
 * 
 * Copyright 2016 Gabriel Vargas <gabreta@VmGabriel96>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <iostream>

using namespace std;

struct nodo
{
  int x,y;
  nodo *sig;
};

int main(int argc, char **argv)
{
  nodo *cab=NULL, *aux;
  int n=0;
  cin >> n;
  for (int i=0;i<n;i++)
  {
    aux = new nodo;
    aux -> x=i;
    aux -> y=n-i;
    aux -> sig = cab;
    cab = aux;
  }
  aux=cab;
  while (aux != NULL)
  {
    cout << "Los datos de los nodos son:"<<endl;
    cout << aux -> x <<","<< aux -> y <<endl;
    aux = aux -> sig;
  }
  for (aux=cab->sig;aux != NULL; aux=aux->sig)
  {
    delete cab;
    cab = aux;
  }
  delete cab;
  return 0;
}
