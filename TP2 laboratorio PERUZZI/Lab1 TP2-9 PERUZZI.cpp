//9.	Realizar un algoritmo que permita a una m�quina expendedora de gaseosas realizar su venta diaria.
// La m�quina se carga con una cierta cantidad latas de gaseosa de distintos tipos para poder venderlas 
//a un determinado precio (3.50$). Permite recibir monedas de 1$ y 50 centavos y da el vuelto cuando corresponda. 
//Tiene un visor en donde va informando los distintos momentos: "Ingrese monedas para recibir la bebida", "Elija la bebida", 
//"Retire su bebida", "Retire su vuelto", "Disculpe, no hay m�s bebidas".

# include  < iostream >
# include  < string.h >

using namespace  std ;

main () {


    int Coca_Cola = 5 , Coca_Cola_Zero = 3 , Sprite = 1 , Fanta = 0 , Pritty = 0 , gaseosa, disponibilidad; // Gaseosas y cuantas hay en la m�quina, puesto aleatoriamente por mi,
    flotador PRECIO_GASEOSA = 3.50 ;                                                                       // hay unas con 0 para probar el "No hay bebidas"
    flotador MONEDA_1 = 1 , MONEDA_050 = 0.50 ;
    float moneda1, moneda050, total_moneda1, total_moneda050, total;
    float vuelto;

    cout << " \ t \ t //// ELIJA SU BEBIDA //// " << endl;

    cout << " Coca Cola " << " \ t C�digo 1 " << endl << " Coca Cola Zero " << " \ t C�digo 2 " << endl << " Sprite " << " \ t \ t C�digo 3 " << endl << " Fanta " << " \ t \ t C�digo 4 " << endl << " Pritty " << "\ t \ t C�digo 5 " << endl;
    cout << " C�digo: " ;
    cin >> gaseosa;

    // DISPONIBILIDAD DE GASEOSAS
    
    cambiar (gaseosa) {
        caso  1 : disponibilidad = Coca_Cola- 1 ;
        romper ;
        caso  2 : disponibilidad = Coca_Cola_Zero- 1 ;
        romper ;
        caso  3 : disponibilidad = Sprite- 1 ;
        romper ;
        caso  4 : disponibilidad = Fanta- 1 ;
        romper ;
        caso  5 : disponibilidad = Pritty- 1 ;
        romper ;
        predeterminado : cout << endl << " OPCI�N INCORRECTA " << endl;
        sistema ( " pausa " );
        return  0 ;
        romper ;
    }  

    if (disponibilidad < 0 ) {
        cout << endl << " No hay de ese tipo de gaseosa " << endl;
        sistema ( " pausa " );
        return  0 ;
    }
    
    // SI HAY GASEOSAS, CONTEO DE DINERO Y ENTREGA

    cambiar (gaseosa) {
        caso  1 : cout << " \ t \ t //// INGRESE MONEDAS //// " << endl << " \ t \ t //// (COSTO 3.50 $) //// \ n \ n " << endl;
                cout << " Moneda $ 1 (Cantidad) :: " ;
                cin >> moneda1;
                total_moneda1 = moneda1 * MONEDA_1;

            if (total_moneda1> 4 ) {
                cout << " NO SE ACEPTAN M�S DE 4 MONEDAS DE $ 1 " << endl << " \ n RETIRAR SU VUELTO: $ " << total_moneda1-PRECIO_GASEOSA << endl << endl;
                sistema ( " pausa " );
                cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " COCA COLA \ n " << endl;
                sistema ( " pausa " );
                return  0 ;

            } else  if (total_moneda1 == 4 ) {
                cout << endl << " \ n RETIRAR SU VUELTO: $ " << total_moneda1-PRECIO_GASEOSA << endl << endl;
                sistema ( " pausa " );
                cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " COCA COLA \ n " << endl;
                sistema ( " pausa " );
                return  0 ;

            } else  if (total_moneda1 < 4 ) {
                cout << " Moneda $ 0.50 (Cantidad) :: " ;
                cin >> moneda050;
                total_moneda050 = moneda050 * MONEDA_050;
                total = total_moneda050 + total_moneda1;

                si (total == PRECIO_GASEOSA) {
                    cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " COCA COLA \ n " << endl;
                    sistema ( " pausa " );
                    return  0 ;

                } m�s  si (total> PRECIO_GASEOSA) {
                    cout << endl << " \ n RETIRAR SU VUELTO: $ " << total-PRECIO_GASEOSA << endl << endl;
                    sistema ( " pausa " );
                    cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " COCA COLA \ n " << endl;
                    sistema ( " pausa " );
                    return  0 ;

                } m�s {
                    cout << endl << " \ n NO INGRES� SUFICIENTE DINERO- COSTO $ 3.50 " << endl << endl;
                    sistema ( " pausa " );
                    return  0 ;
                }
            }
        romper ;
// ////////////////////////////////////////////////// //////////////////////////////////////////////////// ////////////
        caso  2 : cout << " \ t \ t //// INGRESE MONEDAS //// " << endl << " \ t \ t //// (COSTO 3.50 $) //// \ n \ n " << endl;
                cout << " Moneda $ 1 (Cantidad) :: " ;
                cin >> moneda1;
                total_moneda1 = moneda1 * MONEDA_1;

            if (total_moneda1> 4 ) {
                cout << " NO SE ACEPTAN M�S DE 4 MONEDAS DE $ 1 " << endl << " \ n RETIRAR SU VUELTO: $ " << total_moneda1-PRECIO_GASEOSA << endl << endl;
                sistema ( " pausa " );
                cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " COCA COLA CERO \ n " << endl;
                sistema ( " pausa " );
                return  0 ;

            } else  if (total_moneda1 == 4 ) {
                cout << endl << " \ n RETIRAR SU VUELTO: $ " << total_moneda1-PRECIO_GASEOSA << endl << endl;
                sistema ( " pausa " );
                cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " COCA COLA CERO \ n " << endl;
                sistema ( " pausa " );
                return  0 ;

            } else  if (total_moneda1 < 4 ) {
                cout << " Moneda $ 0.50 (Cantidad) :: " ;
                cin >> moneda050;
                total_moneda050 = moneda050 * MONEDA_050;
                total = total_moneda050 + total_moneda1;

                si (total == PRECIO_GASEOSA) {
                    cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " COCA COLA CERO \ n " << endl;
                    sistema ( " pausa " );
                    return  0 ;

                } m�s  si (total> PRECIO_GASEOSA) {
                    cout << endl << " \ n RETIRAR SU VUELTO: $ " << total-PRECIO_GASEOSA << endl << endl;
                    sistema ( " pausa " );
                    cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " COCA COLA CERO \ n " << endl;
                    sistema ( " pausa " );
                    return  0 ;

                } m�s {
                    cout << endl << " \ n NO INGRES� SUFICIENTE DINERO- COSTO $ 3.50 " << endl << endl;
                    sistema ( " pausa " );
                    return  0 ;
                }
            }
        romper ;
// ////////////////////////////////////////////////// //////////////////////////////////////////////////// ////////////
        caso  3 : cout << " \ t \ t //// INGRESE MONEDAS //// " << endl << " \ t \ t //// (COSTO 3.50 $) //// \ n \ n " << endl;
                cout << " Moneda $ 1 (Cantidad) :: " ;
                cin >> moneda1;
                total_moneda1 = moneda1 * MONEDA_1;

            if (total_moneda1> 4 ) {
                cout << " NO SE ACEPTAN M�S DE 4 MONEDAS DE $ 1 " << endl << " \ n RETIRAR SU VUELTO: $ " << total_moneda1-PRECIO_GASEOSA << endl << endl;
                sistema ( " pausa " );
                cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " SPRITE \ n " << endl;
                sistema ( " pausa " );
                return  0 ;

            } else  if (total_moneda1 == 4 ) {
                cout << endl << " \ n RETIRAR SU VUELTO: $ " << total_moneda1-PRECIO_GASEOSA << endl << endl;
                sistema ( " pausa " );
                cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " SPRITE \ n " << endl;
                sistema ( " pausa " );
                return  0 ;

            } else  if (total_moneda1 < 4 ) {
                cout << " Moneda $ 0.50 (Cantidad) :: " ;
                cin >> moneda050;
                total_moneda050 = moneda050 * MONEDA_050;
                total = total_moneda050 + total_moneda1;

                si (total == PRECIO_GASEOSA) {
                    cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " SPRITE \ n " << endl;
                    sistema ( " pausa " );
                    return  0 ;

                } m�s  si (total> PRECIO_GASEOSA) {
                    cout << endl << " \ n RETIRAR SU VUELTO: $ " << total-PRECIO_GASEOSA << endl << endl;
                    sistema ( " pausa " );
                    cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " SPRITE \ n " << endl;
                    sistema ( " pausa " );
                    return  0 ;

                } m�s {
                    cout << endl << " \ n NO INGRES� SUFICIENTE DINERO- COSTO $ 3.50 " << endl << endl;
                    sistema ( " pausa " );
                    return  0 ;
                }
            }
        romper ;
// ////////////////////////////////////////////////// //////////////////////////////////////////////////// ////////////
        caso  4 : cout << " \ t \ t //// INGRESE MONEDAS //// " << endl << " \ t \ t //// (COSTO 3.50 $) //// \ n \ n " << endl;
                cout << " Moneda $ 1 (Cantidad) :: " ;
                cin >> moneda1;
                total_moneda1 = moneda1 * MONEDA_1;

            if (total_moneda1> 4 ) {
                cout << " NO SE ACEPTAN M�S DE 4 MONEDAS DE $ 1 " << endl << " \ n RETIRAR SU VUELTO: $ " << total_moneda1-PRECIO_GASEOSA << endl << endl;
                sistema ( " pausa " );
                cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " FANTA \ n " << endl;
                sistema ( " pausa " );
                return  0 ;

            } else  if (total_moneda1 == 4 ) {
                cout << endl << " \ n RETIRAR SU VUELTO: $ " << total_moneda1-PRECIO_GASEOSA << endl << endl;
                sistema ( " pausa " );
                cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " FANTA \ n " << endl;
                sistema ( " pausa " );
                return  0 ;

            } else  if (total_moneda1 < 4 ) {
                cout << " Moneda $ 0.50 (Cantidad) :: " ;
                cin >> moneda050;
                total_moneda050 = moneda050 * MONEDA_050;
                total = total_moneda050 + total_moneda1;

                si (total == PRECIO_GASEOSA) {
                    cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " FANTA \ n " << endl;
                    sistema ( " pausa " );
                    return  0 ;

                } m�s  si (total> PRECIO_GASEOSA) {
                    cout << endl << " \ n RETIRAR SU VUELTO: $ " << total-PRECIO_GASEOSA << endl << endl;
                    sistema ( " pausa " );
                    cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " FANTA \ n " << endl;
                    sistema ( " pausa " );
                    return  0 ;

                } m�s {
                    cout << endl << " \ n NO INGRES� SUFICIENTE DINERO- COSTO $ 3.50 " << endl << endl;
                    sistema ( " pausa " );
                    return  0 ;
                }
            }
        romper ;
// ////////////////////////////////////////////////// //////////////////////////////////////////////////// ////////////
        caso  5 : cout << " \ t \ t //// INGRESE MONEDAS //// " << endl << " \ t \ t //// (COSTO 3.50 $) //// \ n \ n " << endl;
                cout << " Moneda $ 1 (Cantidad) :: " ;
                cin >> moneda1;
                total_moneda1 = moneda1 * MONEDA_1;

            if (total_moneda1> 4 ) {
                cout << " NO SE ACEPTAN M�S DE 4 MONEDAS DE $ 1 " << endl << " \ n RETIRAR SU VUELTO: $ " << total_moneda1-PRECIO_GASEOSA << endl << endl;
                sistema ( " pausa " );
                cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " PRITTY \ n " << endl;
                sistema ( " pausa " );
                return  0 ;

            } else  if (total_moneda1 == 4 ) {
                cout << endl << " \ n RETIRAR SU VUELTO: $ " << total_moneda1-PRECIO_GASEOSA << endl << endl;
                sistema ( " pausa " );
                cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " PRITTY \ n " << endl;
                sistema ( " pausa " );
                return  0 ;

            } else  if (total_moneda1 < 4 ) {
                cout << " Moneda $ 0.50 (Cantidad) :: " ;
                cin >> moneda050;
                total_moneda050 = moneda050 * MONEDA_050;
                total = total_moneda050 + total_moneda1;

                si (total == PRECIO_GASEOSA) {
                    cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " PRITTY \ n " << endl;
                    sistema ( " pausa " );
                    return  0 ;

                } m�s  si (total> PRECIO_GASEOSA) {
                    cout << endl << " \ n RETIRAR SU VUELTO: $ " << total-PRECIO_GASEOSA << endl << endl;
                    sistema ( " pausa " );
                    cout << endl << endl << " \ t \ t //// RETIRE SU BEBIDA /// " << endl << " CPRITTY \ n " << endl;
                    sistema ( " pausa " );
                    return  0 ;

                } m�s {
                    cout << endl << " \ n NO INGRES� SUFICIENTE DINERO- COSTO $ 3.50 " << endl << endl;
                    sistema ( " pausa " );
                    return  0 ;
                }
            }
        romper ;
        
    }
