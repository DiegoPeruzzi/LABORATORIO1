//6.	Construya un programa que genere la siguiente serie: 1, 5, 3, 7, 5, 9, 7, ..., 23 hasta llegar al número más próximo al 100.
# include  <iostream>
# include <string.h>
using namespace  std ;

main () {


    int i = 1 , acum;
    
    for (i = 3 ; i <= 100 ; i = i + 4 ) {
        cout << i << " , " ;
        i = i-2 ;
        cout << i << " , " ;
    }
    system ( " pause " );

}
