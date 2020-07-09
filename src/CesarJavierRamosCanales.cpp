#include <iostream>
# include <string>
using namespace std;
int main () {
     int factura , tipodeproducto , cantidaddeproducto ;
     string cliente ;
     double precio , subtotal , descuento , totalapagar=0;
     cout<<"elija un numero segun producto : "<<endl; 
     cout<<" 1- celulares "<<endl;
     cout<<" 2- relojes "<<endl;
     cout<<" 3- laptops "<<endl;
     cout<<" 4- PCs "<<endl;
     cin>>tipodeproducto;
      cout<<"ingrese la cantidad a comprar : " ;
     cin >> cantidaddeproducto;

     switch (tipodeproducto)
     {
     case 1:
         precio = 5000.35;
         cout<<" el precio es : "<<precio<<endl;
         subtotal= precio * cantidaddeproducto ;
         cout<<"la cantidad comprada es : "<<cantidaddeproducto<<endl;
         cout<<"el subtotal es : "<<subtotal<<endl;
         if (cantidaddeproducto > 100)
         {
             descuento = subtotal * 0.10;
             cout<<" el descuento es : "<<descuento<<endl;
         }
         else if (cantidaddeproducto <=100)
         {
            cout<<"no aplica descuento "<<endl;
         }
         
         totalapagar= subtotal - descuento;
         cout<<" el total pagar es :  "<<totalapagar<<endl;
         break;
     case 2:
         precio = 500.75;
         cout<<" el precio es : "<<precio<<endl;
         subtotal= precio * cantidaddeproducto ;
         cout<<"la cantidad comprada es : "<<cantidaddeproducto<<endl;
         cout<<"el subtotal es : "<<subtotal<<endl;
         if (cantidaddeproducto > 50)
         {
             descuento = subtotal * 0.15;
             cout<<" el descuento es : "<<descuento<<endl;
         }
         else if (cantidaddeproducto <=50)
         {
            cout<<"no aplica descuento "<<endl;
         }
         totalapagar= subtotal - descuento;
         cout<<" el total pagar es :  "<<totalapagar<<endl;
         break;
     case 3:
          precio = 9999.99;
         cout<<" el precio es : "<<precio<<endl;
         subtotal= precio * cantidaddeproducto ;
         cout<<"la cantidad comprada es : "<<cantidaddeproducto<<endl;
         cout<<"el subtotal es : "<<subtotal<<endl;
         if (cantidaddeproducto > 10)
         {
             descuento = subtotal * 0.20;
             cout<<" el descuento es : "<<descuento<<endl;
         }
         else if (cantidaddeproducto <=10)
         {
            cout<<"no aplica descuento "<<endl;
         }
         totalapagar= subtotal - descuento;
         cout<<" el total pagar es :  "<<totalapagar<<endl;
         break;
     case 4:
         precio = 7500.54;
         cout<<" el precio es : "<<precio<<endl;
         subtotal= precio * cantidaddeproducto ;
         cout<<"la cantidad comprada es : "<<cantidaddeproducto<<endl;
         cout<<"el subtotal es : "<<subtotal<<endl;
         if (cantidaddeproducto > 20)
         {
             descuento = subtotal * 0.25;
             cout<<" el descuento es : "<<descuento<<endl;
         }
         else if (cantidaddeproducto <=20)
         {
            cout<<"no aplica descuento "<<endl;
         }
         totalapagar= subtotal - descuento;
         cout<<" el total pagar es :  "<<totalapagar<<endl;
         break;
     default : 
     cout <<" error al elejir el producto "<<endl;
         break;
     }
     
    return 0 ;
}