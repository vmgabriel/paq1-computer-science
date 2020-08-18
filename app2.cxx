/*
 * App2.cxx
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

int main(int argc, char **argv)
{
  int n=0; 
  
  cin >> n;

  int dato[n]={0},may=0;
  
  for (int k=1;k<n;k++)
  {
    cin >> dato[k];
  }
  
  may=dato[1];
  for (int k=2; k<n;k++)
  {
    if (dato[k]>may)
    {
      may=dato[k];
    }
  }

  cout << "El Numero es: "<<may<<endl;
  return 0;
}
