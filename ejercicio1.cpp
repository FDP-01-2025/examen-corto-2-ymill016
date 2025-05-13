//corto 2

#include <iostream>
using namespace std;

int main (){
    //Declaracion de variables
    int edad, genero, prenda, camisa = 90, pants=130, chaq=900;
    int blus = 80, fal = 110, abri= 250;
    float saldo = 300, desc1= 30, desc2=20;

    //Pedir al usuario su edad
    cout << "Ingresa su edad: ";
    cin >> edad;

    //Validacion de edad. y recomendar una talla
    if (edad >= 0 && edad <= 10){
        cout << "Tu talla recomendada es 8" << endl;
    } else if (edad >=11 && edad <= 15){
        cout << "Tu talla recomendada es 12" << endl;
    }else if (edad >= 16 && edad <= 60){
        cout << "Tu tallla recomendada es 16" << endl;
    }else{
        cout << "Tu talla recomendada es 18"<< endl;
    }

    //Pedir su genero
    cout << "Ingrese su genero (1 para hombre, 2 para mujer, 3 mostrar todo ";
    cin >> genero;

    //De acuerdo a su genero mostrar las prendas disponibles o mostrar todo
    switch (genero){
        //En caso que sea hombre
        case 1:{
            cout << "Ropa disponible para hombre " << "Descuento de " << desc1 << "%" << endl;
            cout << "1. Camisa Casual: " << camisa << "$" <<" Su descuento es " << "$" <<(camisa*desc1)/100 <<  endl;
            cout << "2. Pantalón Formal: " << pants << "$" << " Su descuento es " << "$" << (pants*desc1)/100 << endl;
            cout << "3. Chaqueta Premium: "<< chaq<<"$" << " Su descuento es " << "$" << (chaq*desc1)/100 << endl;

            cout << "Seleccione la prenda que desea comprar: ";
            cin >> prenda;

            if (prenda==1)
            {
                cout << "El precio de la prenda  (Camisa Casual) es: " << "$" << (camisa*desc1)/100 << endl;
                       cout << "Compra exitosa. Tu saldo restante es de $" << saldo - (camisa*desc1)/100 << endl;
                
            }

            else if (prenda == 2){
                cout << "El precio de la prenda (Pantalon Formal) es: " << "$" << (pants*desc1)/100 << endl;
                  cout << "Compra exitosa. Tu saldo restante es de $" << saldo - (pants*desc1)/100 << endl;

            }else if (prenda ==3){
                cout << "El precio de la prenda (Chaqueta premium) es: " << "$" << (chaq*desc1)/100 << endl;
                cout << "Saldo insuficiente. Te faltan $" << (chaq*desc1)/100 - saldo << " para completar la compra" << endl;

            }else {
                cout << "Opcion invalida" << endl;
            }
            break;
        }
        //En caso que sea mujer
        case 2: {
            cout << "1. Blusa Moderna: $" << blus << " Su descuento es $" << (blus*desc2)/100  <<  endl;
            cout << "2. Falda Elegante: $" << fal << " Su descuento es $" << (fal*desc2)/100 <<  endl;
            cout << "3. Abrigo Premium: $" << abri << " Su descuento es $" << (abri*desc2)/100 << endl;

            cout << "Seleccione la prenda que desea comprar: ";
            cin >> prenda;

            if (prenda==1)
            {
                cout << "El precio de la prenda  (Blusa moderna) es: " << "$" << (blus*desc2)/100  << endl;
                       cout << "Compra exitosa. Tu saldo restante es de $" << saldo - (blus*desc2)/100  << endl;
                
            }

            else if (prenda == 2){
                cout << "El precio de la prenda (Falda elegante) es: " << "$" << (fal*desc2)/100 << endl;
                  cout << "Compra exitosa. Tu saldo restante es de $" << saldo - (fal*desc2)/100 << endl;

            }else if (prenda ==3){
                cout << "El precio de la prenda (Abrigo premium) es: " << "$" << (abri*desc2)/100 << endl;
                 cout << "Compra exitosa. Tu saldo restante es de $" << saldo - (abri*desc2)/100  << endl;

            } else {
                 cout << "Opcion invalida" << endl;
            }

            break;
        }
        //en caso que quiera ver todo lo disponible
        case 3: {
             cout << "Ropa disponible para hombre " << "Descuento de " << desc1 << "%" << endl;
            cout << "1. Camisa Casual: " << camisa << "$" <<" Su descuento es " << "$" <<(camisa*desc1)/100 <<  endl;
            cout << "2. Pantalón Formal: " << pants << "$" << " Su descuento es " << "$" << (pants*desc1)/100 << endl;
            cout << "3. Chaqueta Premium: "<< chaq<<"$" << " Su descuento es " << "$" << (chaq*desc1)/100 << endl;


             cout << "4. Blusa Moderna: $" << blus << " Su descuento es $" << (blus*desc2)/100  <<  endl;
            cout << "5. Falda Elegante: $" << fal << " Su descuento es $" << (fal*desc2)/100 <<  endl;
            cout << "6. Abrigo Premium: $" << abri << " Su descuento es $" << (abri*desc2)/100 << endl;

            //Pedir la opcion al usuario
            cout << "Seleccione la prenda que desea comprar: ";
            cin >> prenda;

            if (prenda==1)
            {
                cout << "El precio de la prenda  (Camisa Casual) es: " << "$" << (camisa*desc1)/100 << endl;
                       cout << "Compra exitosa. Tu saldo restante es de $" << saldo - (camisa*desc1)/100 << endl;
                
            }

            else if (prenda == 2){
                cout << "El precio de la prenda (Pantalon Formal) es: " << "$" << (pants*desc1)/100 << endl;
                  cout << "Compra exitosa. Tu saldo restante es de $" << saldo - (pants*desc1)/100 << endl;

            }else if (prenda ==3){
                cout << "El precio de la prenda (Chaqueta premium) es: " << "$" << (chaq*desc1)/100 << endl;
                cout << "Saldo insuficiente. Te faltan $" << (chaq*desc1)/100 - saldo << " para completar la compra" << endl;

            }else if (prenda==4)
            {
                cout << "El precio de la prenda  (Blusa moderna) es: " << "$" << (blus*desc2)/100  << endl;
                       cout << "Compra exitosa. Tu saldo restante es de $" << saldo - (blus*desc2)/100  << endl;
                
            }

            else if (prenda == 5){
                cout << "El precio de la prenda (Falda elegante) es: " << "$" << (fal*desc2)/100 << endl;
                  cout << "Compra exitosa. Tu saldo restante es de $" << saldo - (fal*desc2)/100 << endl;

            }else if (prenda ==6){
                cout << "El precio de la prenda (Abrigo premium) es: " << "$" << (abri*desc2)/100 << endl;
                 cout << "Compra exitosa. Tu saldo restante es de $" << saldo - (abri*desc2)/100  << endl;

            } else {
                 cout << "Opcion invalida" << endl;
            }

            break;
        }
        default :{
            cout << "No esta en la lista de opciones" << endl;
            break;
        }
    }


    return 0;
}