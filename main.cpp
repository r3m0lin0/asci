#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

// FUNCIONES

//JUEGO
 
void jugar ()  
{
                  
   int animaldepersonaje; string nombredepersonaje;

                                                      //ELECCION DE PERSONAJE

    cout<< endl << endl << endl << endl << endl << endl << endl << endl << endl;

	cout << "           .----------------.   .----------------.   .----------------.   .----------------. " << endl;
	cout << "           | .--------------. | | .--------------. | | .--------------. | | .--------------. |" << endl;
	cout << "           | |   ______     | | | |      _       | | | |      __      | | | |      _       | |" << endl;
	cout << "           | |  |_   _ !    | | | |     | |      | | | |     /  !     | | | |     | |      | |" << endl;
	cout << "           | |    | |_) |   | | | |  ___| |___   | | | |    / /! !    | | | |  ___| |___   | |" << endl;
	cout << "           | |    |  __'.   | | | | |___   ___|  | | | |   / ____ !   | | | | |___   ___|  | |" << endl;
	cout << "           | |   _| |__) |  | | | |     | |      | | | | _/ /    ) !_ | | | |     | |      | |" << endl;
	cout << "           | |  |_______/   | | | |     |_|      | | | ||____|  |____|| | | |     |_|      | |" << endl;
	cout << "           | |              | | | |              | | | |              | | | |              | |" << endl;
	cout << "           | '--------------' | | '--------------' | | '--------------' | | '--------------' |" << endl;
	cout << "            '----------------'   '----------------'   '----------------'   '----------------'" << endl;
	
	cout<< endl << endl << endl;
	
	
	cout << "                              ¿¿¿que animal te identifica mas???  " << endl;

	cout<< endl << endl << endl << endl;

	cout << "                _                              .                   ,--._,--.                       " << endl;    
	cout << "                ' `*-.      1) gatitx          .                 ,'  ,'   ,-`.                     " << endl;
    cout << "                  )  _`-.                      .      (`-.__    /  ,'   /                          " << endl;
	cout << "                 .  : `. .                     .       `.   `--'        )__,--'-.                  " << endl;
	cout << "                 : _   '  !                    .         `--/       ,-.  ______/                   " << endl;
	cout << "                 ; *` _.   `*-._               .           (o-.     ,o- /                          " << endl;
	cout << "                 `-.-'          `-.            .            `. ;        )                          " << endl;
	cout << "                   ;       `       `.          .             |:          )       2)cabritx         " << endl;
	cout << "                   .    .   :   .-'   .        .            ,'`       ,   )                        " << endl;
	cout << "                   '  `+.;  ;  '      :        .           (o o ,  --'     :                       " << endl;
	cout << "                   :  '  |    ;       ;-.      .             --','.        ;                       " << endl;
	cout << "                   ; '   : :`-:     _.`* ;     .             `;;  :       /                        " << endl;
	cout << "                .*' /  .*' ; .*`- +'  `*'      .               ;'  ;  ,' ,'                        " << endl;
	cout << "                `*-*   `*-*  `*-*'             .              ,','  :  '                           " << endl << endl;


    cin >> animaldepersonaje ;

	switch (animaldepersonaje) 
	
{
       case 1: cout<< endl << endl << endl << endl << endl << endl << endl << endl << endl; 
	           
     cout << "                _                              .                                          " << endl;    
     cout << "                ' `*-.                         .    ¿Que nombre te pondrias?              " << endl;
     cout << "                  )  _`-.                      .                                          " << endl;
	 cout << "                 .  : `. .                     .                   ฅ^•ﻌ•^ฅ                " << endl;
	 cout << "                 : _   '  !                    .                                          " << endl;
	 cout << "                 ; *` _.   `*-._               .       ฅ^•ﻌ•^ฅ                            " << endl;
	 cout << "                 `-.-'          `-.            .                        ฅ^•ﻌ•^ฅ           " << endl;
	 cout << "                   ;       `       `.          .                                          " << endl;
	 cout << "                   .    .   :   .-'   .        .   podes elegir cual sea que quieras      " << endl;
	 cout << "                   '  `+.;  ;  '      :        .                                          " << endl;
	 cout << "                   :  '  |    ;       ;-.      .   ฅ^•ﻌ•^ฅ                                " << endl;
	 cout << "                   ; '   : :`-:     _.`* ;     .                             ฅ^•ﻌ•^ฅ      " << endl;
	 cout << "                .*' /  .*' ; .*`- +'  `*'      .             ฅ^•ﻌ•^ฅ                      " << endl;
	 cout << "                `*-*   `*-*  `*-*'             .                                          " << endl;
	 cout<< endl << endl << endl << endl << endl << endl << endl << endl << endl; 
	 cout << endl << "                              Tu nombre es:  "; cin >> nombredepersonaje;      cout << endl; 
			   
			   
			   
			   cout << nombredepersonaje;
			   
			   
			   int caminos; 
			   cout << "donde queres ir? 1-playa 2-bosque" << endl;
			   cin >> caminos; 
			   switch (caminos) {
			   case 1: 
				   int playa;
				   cout << "1-tomar sol o  2-meterse al agua" << endl; 
				   cin >> playa;
				   switch (playa) {
				   case 1: 
					   break;
				   case 2: 
					   break; 


				   }



				   break;
			   case 2: 
				   break; 


	}
 
			   
			   
			   break;











        case 2: cout << endl << endl << "cuidado las wampas! jeje" << endl;
		       break;








	   default: jugar();
				break;
 } 





}






int main(int,char**args){



    int eleccionmenu;




    // MENU PRINCIPAL

    cout<< endl << endl << endl << endl << endl << endl << endl << endl;

	cout << "           .----------------.   .----------------.   .----------------.   .----------------. " << endl;
	cout << "           | .--------------. | | .--------------. | | .--------------. | | .--------------. |" << endl;
	cout << "           | |   ______     | | | |      _       | | | |      __      | | | |      _       | |" << endl;
	cout << "           | |  |_   _ !    | | | |     | |      | | | |     /  !     | | | |     | |      | |" << endl;
	cout << "           | |    | |_) |   | | | |  ___| |___   | | | |    / /! !    | | | |  ___| |___   | |" << endl;
	cout << "           | |    |  __'.   | | | | |___   ___|  | | | |   / ____ !   | | | | |___   ___|  | |" << endl;
	cout << "           | |   _| |__) |  | | | |     | |      | | | | _/ /    ) !_ | | | |     | |      | |" << endl;
	cout << "           | |  |_______/   | | | |     |_|      | | | ||____|  |____|| | | |     |_|      | |" << endl;
	cout << "           | |              | | | |              | | | |              | | | |              | |" << endl;
	cout << "           | '--------------' | | '--------------' | | '--------------' | | '--------------' |" << endl;
	cout << "            '----------------'   '----------------'   '----------------'   '----------------'" << endl;
	
	cout<< endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	cout << "                1) Jugar" << endl;
	cout << "                2) recomendaciones/creditos" << endl;
	cout << "                3) Salir";

	cout<< endl << endl << endl << endl << endl << endl;

	cout << "          ¿su opcion?" << endl << endl;

	cin >> eleccionmenu;  

	switch (eleccionmenu)
	{
	   case 1: jugar(); break;

	   case 2: break;
	
	   case 3: exit(1); break;

	   default: cout << endl << "su opcion no es valida" << endl << endl <<endl; break;
	}
    
	
	

	return 0;
}