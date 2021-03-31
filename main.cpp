//
//  Mercado
//
//  Created by Camilo Navarro on 8/13/19.
//  Copyright © 2019 Camilo Navarro. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    
    
    float costo = 0, cont = 0, suma = 0, prom, mayor = 0, menor = 0;
    char c = '1', s = '1';
    
    string producto, Pmayor, Pmenor;
    
    while (s != '0')
        
    {
        while (c != '0')
        {
            cont ++;
            cout <<"Ingrese el nombre del producto"<< endl;
            cin>> producto;
            cout<<"Ingrese el costo del producto"<< endl;
            cin>> costo;
            cout<<"Para ingresar otro producto teclee '1', para continuar, teclee '0'"<< endl;
            cin>>c;
            suma = suma + costo;
            
            if (costo > mayor)
            {
                mayor = costo;
                Pmayor = producto;
            }
            if (costo < mayor)
            {
                menor = costo;
                Pmenor = producto;
            }
        }
        
        cout << "-------------------------------------------------"<< endl;
        cout << "El precio total del mercado es " << suma << " pesos" << endl;
        prom = suma / cont;
        cout << "El promedio de cada producto es "<< prom << " pesos" << endl;
        cout << "En total usted compro " << cont << " producto(s)" << endl;
        cout << "-------------------------------------------------"<< endl;
        cout << "El producto mas caro es '" << Pmayor <<"'"<< endl;
        cout << "con un costo de " << mayor << " pesos" <<endl;
        cout << "-------------------------------------------------"<< endl;
        cout << "El producto mas barato es '" << Pmenor <<"'"<< endl;
        cout << "con un costo de " << menor << " pesos" <<endl;
        cout << "-------------------------------------------------"<< endl;
        
        
        
        cout<<"Para terminar, teclee '0'"<< endl;
        cin>>s;
        
    }
    
    
    
    
    return 0;
    
}

