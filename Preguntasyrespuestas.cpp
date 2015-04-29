/* Preguntas y respuestas
CeciliaFesti
29/04/2015
*/
#include<iostream>
#include<string>


using namespace std;

int main() 
{
	cout<<"Comencemos este juego de preguntas y respuestas, con cada pregunta correcta sumaras 10 puntos";
	cout<<", cada vez que te equivoques en una pregunta restas 15 puntos";
        cout<<", si te aburris y queres salir durante el juego escribi el numero 0\n.";
        cout<<" Elija una de las siguientes tematicas colocando el numero de la elejida";
	cout<<"Ingrese 1. Matematica..\n";
	cout<<"Ingrese 2. Cultura general..\n";
	cout<<"Ingrese 3. Geografia..\n";
	cout<<"Ingrese 4. Espectaculo..\n";
	int op, contadorf, respuesta, salir=1, contador1=0, contador2=0, contador3=0, contador4=0, totalp=0;
        double pi;    	
        string resp, minus;
	bool exit=false; //Booleano para salir del do while.
	
	
	do
	{
	cin>>op;
	switch(op)
	{
		case 1:
		{
			cout<<"Elegiste preguntas de matematicas..\n";
			cout<<"1)¿Cuanto vale el numero PI (dos decimales)?\n";
			cin>>pi;
			if(pi==3.14)
			{
				cout<<"Correcto!\n";
				contador1=contador1+10;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador1=contador1-15;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";
			}
			
			cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
			cin>>salir;
			if(salir==0) //Si elijo salir, sale del switch para mostrar resultados.
			{
				  exit=true;
				  break;
			}
			    else if(salir==2)
		 		break;
			string r1=("seno"), r2=("coseno"), r3=("tangente");  //Defino las respuestas posibles.
			cout<<"\n2)Nombra una funcion trigonometrica\n";
			cin>>minus;
			for(int i=0;i<minus.length();i++) //Recorro el string ingresado para que sea todo minuscula.
			{
				char b=minus[i];
				if ((b>='A')and(b<='Z'))
 					minus[i]=b-'A'+'a';
			}
			if(minus.compare(r1)==0 or minus.compare(r2)==0 or minus.compare(r3)==0) //comparo la respuesta ingresada con las establecidas.
			{
				cout<<"Correcto!\n";
				contador1+=10;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";	
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador1-=15;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";	
			}
			
			cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
			cin>>salir;
			if(salir==0)
			{
				exit=true;
				break;
			}
			
		    else if(salir==2)
		 		break;
			
			cout<<"3)¿Que nombre se le da al conjunto de numeros positivos menos el cero?\n";
			cin>>respuesta;
			if(respuesta=='naturales')
			{
				cout<<"Correcto!\n";
				contador1=contador1+10;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador1=contador1-15;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";
			}
			
			
			cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
			cin>>salir;
			if(salir==0)
			{
				exit=true;
				break;
			}
		    else if(salir==2)
		 		break;
			 
			cout<<"¿Cual es la raiz de 144?\n";
			cin>>respuesta;
			if(respuesta==12)
			{
				cout<<"Correcto!\n";
				contador1=contador1+10;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador1=contador1-15;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";
			}
			cout<<"Fin de las preguntas sobre matematicas, sumaste "<<contador1<<" puntos.\n";
			cout<<"Ingrese el numero 2 y luego numero de tematica a la que quiere cambiar o 0 para salir.\n";
			cin>>op;
			if(op==0)
			  {
			  	exit=true;
			  	break;
			  }
			else if(op==2)
				break;
		}
			
		case 2:
		{
			
			cout<<"Elegiste preguntas Sobre Cultura general. \n";
			cout<<"1)¿Que sigunifica las siglas PC?\n";
			cin>>respuesta;
			if(respuesta=='personalcomputer')
			{
				cout<<"Correcto!\n";
				contador2+=10;
				cout<<"Sumas un total de..."<<contador2<<" puntos en historia.\n";
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador2-=15;
				cout<<"Sumas un total de..."<<contador2<<" puntos en historia.\n";
			}
			cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
			cin>>salir;
			if(salir==0)
			{
				exit=true;
				break;
			}
		    else if(salir==2)
		 		break;
			 	
			cout<<"2)¿Cual fue el primer nombre del emperador mas famoso de Roma?\n";
			string r1=("julio");
			cin>>minus;
			for(int i=0;i<minus.length();i++)
			{
				char b=minus[i];
 				if ((b>='A')and(b<='Z'))
  				minus[i]=b-'A'+'a';
			}
			if(minus.compare(r1)==0)
			{
				cout<<"Correcto!\n";
				contador2+=10;
				cout<<"Sumas un total de..."<<contador2<<" puntos en historia.\n";	
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador2-=15;
				cout<<"Sumas un total de..."<<contador2<<" puntos en historia.\n";	
			}
			cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
			cin>>salir;
			if(salir==0)
			{
				exit=true;
				break;
			}
		    else if(salir==2)
		 		break;
			 	
			cout<<"3)¿En que actual pais se encontraban los aztecas?\n";
			r1=("mexico");
			cin>>minus; 
			for(int i=0;i<minus.length();i++)
			{
				char b=minus[i];
 				if ((b>='A')and(b<='Z'))
  				minus[i]=b-'A'+'a';
			}	
			if(minus.compare(r1)==0)
			{
				cout<<"Correcto!\n";
				contador2+=10;
				cout<<"Sumas un total de..."<<contador2<<" puntos en historia.\n";	
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador2-=15;
				cout<<"Sumas un total de..."<<contador2<<" puntos en historia.\n";	
			}
			
			cout<<"Fin de las preguntas sobre historia, sumaste "<<contador2<<" puntos.\n";
			cout<<"Ingresa 2 y luego num de tematica para cambiarla, 0 para salir.\n";
			cin>>salir;
			if(salir==0)
			{
				exit=true;
				break;
			}
			  
			else if(salir==2)
				break;  
			}
		
		case 3:
			{
				
				cout<<"Elegiste preguntas sobre Geografia!\n";
				cout<<"1)¿Capital de Francia?\n";
				cin>>respuesta;
				if(respuesta=='paris')
				{
				cout<<"Correcto!\n";
				contador3+=10;
				cout<<"Sumas un total de..."<<contador3<<" puntos en bioligia.\n";
				}
				else
				{
				cout<<"Incorrecto!\n";
				contador3-=15;
				cout<<"Sumas un total de..."<<contador3<<" puntos en biologia.\n";
				}
				cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
				cin>>salir;
				if(salir==0)
				{
					exit=true;
					break;
				}
		   		else if(salir==2)
		 			break;
			 	
			 	cout<<"2)¿Como se llama el continente en el que se encuentra Estados unidos?\n";
			 	string r1=("Americano");
			 	cin>>minus;
 				for(int i=0;i<minus.length();i++)
				{
				char b=minus[i];
				if ((b>='A')and(b<='Z'))
 					minus[i]=b-'A'+'a';
				} 	
				if(minus.compare(r1)==0)
				{
				cout<<"Correcto!\n";
				contador3+=10;
				cout<<"Sumas un total de..."<<contador3<<" puntos en biologia.\n";	
				}
				else
				{
				cout<<"Incorrecto!\n";
				contador3-=15;
				cout<<"Sumas un total de..."<<contador3<<" puntos en biologia.\n";	
				}
				cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
				cin>>salir;
				if(salir==0)
				{
					exit=true;
					break;
				}
		    	else if(salir==2)
		 			break;
			 	
			 	cout<<"3)¿La lluvia es un fenomeno natural? 1:SI o 2:NO\n";
			 	r1=("si");
				cin>>minus;
				for(int i=0;i<minus.length();i++)
				{
					char b=minus[i];
					if ((b>='A')and(b<='Z'))
 						minus[i]=b-'A'+'a';
				}
				if(minus.compare(r1)==0)
				{
				cout<<"Correcto!\n";
				contador3+=10;
				cout<<"Sumas un total de..."<<contador3<<" puntos biologia.\n";	
				}
				else
				{
				cout<<"Incorrecto!\n";
				contador3-=15;
				cout<<"Sumas un total de..."<<contador3<<" puntos en biologia.\n";	
				}
				cout<<"Fin de las preguntas sobre Geografia, sumaste "<<contador3<<" puntos.\n";
				cout<<"Ingresa 2 y luego num de tematica para cambiarla, 0 para salir.\n";
				cin>>salir;
				if(salir==0)
				{
					exit=true;
					break;
				}
				else if(salir==2)
		 			break;
			}
			
		case 4:
			{
					
				cout<<"Elegiste preguntas sobre Espectaculo.\n";
				cout<<"1)¿Como se llama la señora de los almuerzos?\n";
				cin>>respuesta;
				if(respuesta=='mirthalegrand')
				{
					cout<<"Correcto!\n";
					contador4+=10;
					cout<<"Sumas un total de..."<<contador4<<" puntos en deportes.\n";
				}
				else
				{
					cout<<"Incorrecto!\n";
					contador4-=15;
					cout<<"Sumas un total de..."<<contador4<<" puntos en deportes.\n";
				}
				cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
				cin>>salir;
				if(salir==0)
				{
					exit=true;
					break;
				}
		   		else if(salir==2)
						cin>>op;
		 		
		 		cout<<"2)¿Como se llama el hijo menor del conducto Marcelo Tinelli?\n";
		 		string r1=("lorenzo");
		 		cin>>minus;
				for(int i=0;i<minus.length();i++)
				{
					char b=minus[i];
 					if ((b>='A')and(b<='Z'))
  						minus[i]=b-'A'+'a';
				}
		 		if(minus.compare(r1)==0)
				{
					cout<<"Correcto!\n";
					contador4+=10;
					cout<<"Sumas un total de..."<<contador4<<" puntos en deportes.\n";	
				}
				else
				{
					cout<<"Incorrecto!\n";
					contador4-=15;
					cout<<"Sumas un total de..."<<contador4<<" puntos en deportes.\n";	
				}
				
				cout<<"Fin de las preguntas sobre Espectaculo, sumaste "<<contador4<<" puntos.\n";
				cout<<"Ingresa 2 y luego num de tematica para cambiarla, 0 para salir.\n";
				cin>>salir;
				if(salir==0)
				{
					exit=true;
					break;
				}
			 	 
			    else if(salir==2)
		 			break; 
				
			}
	}
	}while(exit!=true);
	cout<<"Puntajes..:\n";
	cout<<"En Matematicas: "<<contador1<<"\n";
	cout<<"En Cultura general: "<<contador2<<"\n";
	cout<<"En Geografia: "<<contador3<<"\n";
	cout<<"En Espectaculo: "<<contador4<<"\n";
	contadorf=contador1+contador2+contador3+contador4;
	cout<<"Puntaje total: "<<contadorf<<"\n";
	cout<<"Gracias por jugar.!";
	return 0;
}
