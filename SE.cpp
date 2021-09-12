#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string.h>
#include<time.h>

using namespace std;
	
//FUNCIONES 
void FR(int fhabitacion,int Farma, int Fpersonaje, char Dnom[],char Darma[],char Dhabi[]);
void HVH(char Dhabi[]);
void H(); //Compara La eleccion del jugador para saber si la historia es real
void HP();
void HA();
void HHv(int Ihabi, int IFhabitacion, char chabiep[]);
void HPv(int Iperse, int IFpersonaje, char cpersep[]);
void HAv(int Iarmase,int IFarma, char carmasep[]);


//VARIABLES GLOBALES ----------------------------------------------------------------------------------------------------------------------------------------------

	//Nombre Declarado
	char Npers[5][50] = {{"Oso Gominola"},{"Winnie Pooh"},{"Timmy Turner"},{"Goku"},{"CR7"}};
	char Nhabi[5][50] = {{"Ba\xA4o"},{"Cocina"},{"Sala"},{"Cochera"},{"Recamara"}};
	char Narma[5][50] = {{"Trofeo"},{"Bat"},{"Katana"},{"Martillo"},{"Sarten"}};
	
	
	//Respuestas
	char Dnom[50];
	char Darma[50];
	char Dhabi[50];
	
	//Informacion asociada
	char habiep[50];
	char persep[50];
	char armasep[50];
	
	
	//Eleccion del usuario
	int Earma;
	int Epers;
	int Ehabi;
	
	//Variables
	const int tam = 5;
	int habitacion[tam];
	int personaje[tam];
	int arma[tam];
	int Fhistoria;
	int Fhabitacion;
	int Fpersonaje;
	int Farma;
	int opc;

//FIN DE VARIABLES GLOBALES --------------------------------------------------------------------------------------------------------------------------------------------

int main (){


cout<<"EN UNA NOCHE BASTANTE TRANQUILA, SE LLEVA A CABO UNA REUNI\xE0N DE ENSUE\xA5O CON VARIAS CELEBRIDADES CON EL FIN DE\n";
cout<<"INTERCAMBIAR EXPERIENCIAS Y DIVERTIRSE, A LA MITAD DE LA REUNI\xE0N LLEGA UN FANATICO DE TODOS ELLOS,\n";
cout<<"TRAS PERDERSE EN EL BOSQUE POR SEGUIR UNA LUZ EXTRA\xA5 A, Y ESTOS LE PERMITEN LA ENTRADA, UNA VEZ DENTRO EL FAN\n";
cout<<"EMPIEZA  A TOMARSE FOTOS Y VIDEOS, PERO UNA DE LAS CELEBRIDADES SE LE EMPIEZA A NOTAR INCOMODO,\n";
cout<<"Y MAS TARDE APARECE EL FAN MUERTO...\n";
system("pause");
system("cls");

cout<<"ES TU DEBER AVERIGUAR QUI\x82N FUE EL ASESINO CON UN TOTAL DE 9 PREGUNTAS\n";
cout<<"DEBERAS PRESTAR ATENCI\xA2N EN LAS DIFERENCIAS ENTRE SITOS,ARMAS Y PERSONAJES\n";
cout<<"BUENA SUERTE\n";
system("pause");
system("cls");
	

	srand(time(0));
	
	Fhistoria = 1 + rand() % 5;
	cout<<Fhistoria<<endl;


	for(int i=0; i<=tam; i++)
	{
	
		habitacion[i]=1 + rand() % 5;
		personaje[i]=1 + rand() % 5;
		arma[i]=1 + rand() % 5;
	
			for(int j=0; j<=tam; j++)
			{
				if(Fhistoria == j)
				{
					Fhabitacion = habitacion[j-1];
					Fpersonaje=personaje[j-1];
					Farma = arma[j-1];
				}
			}
	}
	
	
	
	//OBTENER RESPUESTA NOMBRES
	for(int i=0; i<=tam; i++){
		if(i  == Fpersonaje)
		{
		
		for(int j=0; j<50; j++)
		{
			
			Dnom[j] = Npers[i-1][j];
		    
		}
		}
	}
	
	
	//OBTENER RESPUESTA HABITACION
	for(int i=0; i<=tam; i++){
		if(i  == Fhabitacion)
		{
		
		for(int j=0; j<50; j++)
		{
			
			Dhabi[j] = Nhabi[i-1][j];
		    
		}
		}
	}
	
	//OBTENER RESPUESTA ARNMA
	for(int i=0; i<=tam; i++){
		if(i  == Farma)
		{
		
		for(int j=0; j<50; j++)
		{
			
			Darma[j] = Narma[i-1][j];
		    
		}
		}
	}
	


// PREGUNTAS Y FUNCIONES
	system("cls");
	for(int k=0; k<9; k++){
		cout<<"\t\t\t 1-Habitacion\n";
		cout<<"\t\t\t 2-Personaje\n";
		cout<<"\t\t\t 3-Arma\n";
		cout<<"\t\t\t \xA8Sobre que quieres saber? ";
		cin>>opc;
		system("cls");
		switch(opc){
		case 1:{
			system("cls");
						H();
						
				 	break;
				}
					
		case 2:{
			system("cls");
						HP();
						
			break;
				}
	
		case 3:{
			system("cls");
			 			HA();

			break;
				}
	
		default:{
			system("cls");
				cout<<"\t\t\tOpcion invalida\n";
				cout<<"\t\t\tHas perdido una pregunta"<<endl;
				cout<<"\t\t\t:(\n";
			break;
				}
			
				}
		}


FR(Fhabitacion, Farma, Fpersonaje, Dnom, Darma, Dhabi);

system("PAUSE");
return 0;
}


void FR(int Fhabitacion,int Farma, int Fpersonaje, 	char Dnom[],char Darma[],char Dhabi[])
{
	int Earma;
	int Epers;
	int Ehabi;
	cout<<"\t\t\tHas finalizado tus intentos"<<endl;
	cout<<"\t\t\tAhora veamos"<<endl;
	
	//DONDE?
	cout<<"\t\t\t\xA8 En donde sucedio el crimen?"<<endl;
	cout<<"\t\t\t1- Ba\xA4o"<<endl;
	cout<<"\t\t\t2- Cocina"<<endl;
	cout<<"\t\t\t3- Sala"<<endl;
	cout<<"\t\t\t4- Cochera"<<endl;
	cout<<"\t\t\t5- Recamara"<<endl;
	cin>>Ehabi;
	
	//AHORA PREGUNTAR  QUIEN?
	cout<<"\t\t\t\xA8Quie fue?"<<endl;
	cout<<"\t\t\t1- Oso Gominola"<<endl;
	cout<<"\t\t\t2- Winnie Pooh"<<endl;
	cout<<"\t\t\t3- Timmy Turner"<<endl;
	cout<<"\t\t\t4- Goku"<<endl;
	cout<<"\t\t\t5- Cr7"<<endl;
	cin>>Epers;
	
	
	//CON QUE?
	cout<<"\t\t\t\xA8 Con que?"<<endl;
	cout<<"\t\t\t1- Trofeo"<<endl;
	cout<<"\t\t\t2- Bat"<<endl;
	cout<<"\t\t\t3- Katana"<<endl;
	cout<<"\t\t\t4- Martillo"<<endl;
	cout<<"\t\t\t5- Sarten"<<endl;
	cin>>Earma;


		if (Ehabi == Fhabitacion && Epers == Fpersonaje && Earma == Farma)
		{
			cout<<"Felicidades diste con el asesino"<<endl;
			cout<<"El FBI te necesita"<<endl;
		}

		else{
			cout<<"Estas equivocado"<<endl;
			if (Ehabi == Fhabitacion){
				cout<<"El sitio si era "<<Dhabi<<endl;
			}
		
			if (Epers == Fpersonaje){
				cout<<"El Personaje culpable si era "<<Dnom<<endl;
			}
		
			if (Earma == Farma){
				cout<<"El arma usada si era "<<Darma<<endl;
			}
			
		}
	
	
}



void HH(int Ihabi, int IFhabitacion, char chabiep[] )
	{
		if(IFhabitacion == Ihabi)
		{
			cout<<"El Sitio ";
			puts(chabiep);
			cout<<"Tiene las luces fundidas, no se pude ver nada\n";
			cout<<"Tiene un aroma muy extra\xA4o\n";
			system("pause");
			system("cls");
		}
		
		else
		{
			
			cout<<"El sitio ";
			puts(chabiep);
			cout<<"No Tiene las luces fundidas, se pude apreciar gran parte del lugar\n";
			cout<<"No Tiene un aroma muy extra\xA4o\n";
			system("pause");
			system("cls");
		}
}


void H(){
	("color 0E");
	int habie;
						cout<<"\t\t\tElige la habitacion de la que quieres informacion\n";
						cout<<"\t\t\t1- Ba\xA4o"<<endl;
						cout<<"\t\t\t2- Cocina"<<endl;
						cout<<"\t\t\t3- Sala"<<endl;
						cout<<"\t\t\t4- Cochera"<<endl;
						cout<<"\t\t\t5- Recamara"<<endl;
						cin>>habie;
						system("cls");
						switch(habie){
							case 1:{	
									for(int i=0; i<=tam; i++)
									{
										if(i  == habie)
										{
											for(int j=0; j<50; j++)
											{
												habiep[j] = Nhabi[i-1][j];    
											}
										}
									}
									
							HH(habie, Fhabitacion, habiep);		
									
								break;
							}
							case 2:{			
								for(int i=0; i<=tam; i++)
									{
										if(i  == habie)
										{
											for(int j=0; j<50; j++)
											{
												habiep[j] = Nhabi[i-1][j];    
											}
										}
									}
									
							HH(habie, Fhabitacion, habiep);	
								
								break;
							}
							case 3:{			
								for(int i=0; i<=tam; i++)
									{
										if(i  == habie)
										{
											for(int j=0; j<50; j++)
											{
												habiep[j] = Nhabi[i-1][j];    
											}
										}
									}
									
							HH(habie, Fhabitacion, habiep);	
								break;
							}
							case 4:{		
								for(int i=0; i<=tam; i++)
									{
										if(i  == habie)
										{
											for(int j=0; j<50; j++)
											{
												habiep[j] = Nhabi[i-1][j];    
											}
										}
									}
									
							HH(habie, Fhabitacion, habiep);	
								break;
							}
							case 5:{			
							for(int i=0; i<=tam; i++)
									{
										if(i  == habie)
										{
											for(int j=0; j<50; j++)
											{
												habiep[j] = Nhabi[i-1][j];    
											}
										}
									}
									
							HH(habie, Fhabitacion, habiep);	
								break;
							}
							default :{
								cout<<"\t\t\tOpcion invalida\n";
								cout<<"\t\t\tHas perdido una pregunta"<<endl;
								cout<<"\t\t\t:(\n";
								break;
							}
			}
}

void HPv(int Iperse, int IFpersonaje, char cpersep[] )
	{
		if(IFpersonaje == Iperse)
		{
			puts(cpersep);
			cout<<"No luce Tranquilo y relajado\n"; 
			cout<<"Las camaras no han captado a ";
			puts(cpersep);
			system("pause");
			system("cls");
		}
		
		else
		{
			
			puts(cpersep);
			cout<<"Luce Tranquilo y relajado\n"; 
			cout<<"Las camaras han captado a ";
			puts(cpersep);
			system("pause");
			system("cls");
		}
}

void HP(){
	system("color 64");
	int perse;
						cout<<"\t\t\t \xA8 De que personaje quieres informacion?\n";
						cout<<"\t\t\t1- Oso Gominola"<<endl;
						cout<<"\t\t\t2- Winnie Pooh"<<endl;
						cout<<"\t\t\t3- Timmy Turner"<<endl;
						cout<<"\t\t\t4- Goku"<<endl;
						cout<<"\t\t\t5- Cr7"<<endl;
						cout<<"\t\t\tDigita la opcion? ";
						cin>>perse;
						system("cls");
						switch(perse){
							case 1:{	
									for(int i=0; i<=tam; i++)
									{
										if(i  == perse)
										{
											for(int j=0; j<50; j++)
											{
												persep[j] = Npers[i-1][j];    
											}
										}
									}
									
							HPv(perse, Fpersonaje, persep);		
									
									
								break;
							}
							case 2:{			
								for(int i=0; i<=tam; i++)
									{
										if(i  == perse)
										{
											for(int j=0; j<50; j++)
											{
												persep[j] = Npers[i-1][j];    
											}
										}
									}
									
							HPv(perse, Fpersonaje, persep);	
								
								break;
							}
							case 3:{			
							for(int i=0; i<=tam; i++)
									{
										if(i  == perse)
										{
											for(int j=0; j<50; j++)
											{
												persep[j] = Npers[i-1][j];    
											}
										}
									}
									
							HPv(perse, Fpersonaje, persep);	
								break;
							}
							case 4:{		
							for(int i=0; i<=tam; i++)
									{
										if(i  == perse)
										{
											for(int j=0; j<50; j++)
											{
												persep[j] = Npers[i-1][j];    
											}
										}
									}
									
							HPv(perse, Fpersonaje, persep);	
								break;
							}
							case 5:{			
							for(int i=0; i<=tam; i++)
									{
										if(i  == perse)
										{
											for(int j=0; j<50; j++)
											{
												persep[j] = Npers[i-1][j];    
											}
										}
									}
									
							HPv(perse, Fpersonaje, persep);	
								break;
							}
							default :{
								cout<<"\t\t\tOpcion invalida\n";
								cout<<"\t\t\tHas perdido una pregunta"<<endl;
								cout<<"\t\t\t:(\n";
								break;
							}
			}
}


void HAv(int Iarmase,int IFarma, char carmasep[] )
	{
		if(IFarma == Iarmase)
		{
			puts(carmasep);
			cout<<"Luce desgastado\n"; 
			cout<<"Las camaras no han captado el arma ";
			puts(carmasep);
			system("pause");
			system("cls");
		}
		
		else
		{
			
			puts(carmasep);
			cout<<"No luce desgastado\n"; 
			cout<<"Las camaras han captado el arma ";
			puts(carmasep);
			system("pause");
			system("cls");
		}
}



void HA(){
	system("color 0E");
	int armase;
						cout<<"\t\t\t\xA8Sobre que arma deseas informacion?\n";
						cout<<"\t\t\t1- Trofeo"<<endl;
						cout<<"\t\t\t2- Bat"<<endl;
						cout<<"\t\t\t3- Katana"<<endl;
						cout<<"\t\t\t4- Martillo"<<endl;
						cout<<"\t\t\t5- Sarten"<<endl;
						cout<<"\t\t\tDigita la opcion?";
						cin>>armase;
						system("cls");
						switch(armase){
							case 1:{	
									for(int i=0; i<=tam; i++)
									{
										if(i  == armase)
										{
											for(int j=0; j<50; j++)
											{
												armasep[j] = Narma[i-1][j];    
											}
										}
									}
									
							HAv(armase, Farma, armasep);		
									
									
								break;
							}
							case 2:{			
								for(int i=0; i<=tam; i++)
									{
										if(i  == armase)
										{
											for(int j=0; j<50; j++)
											{
												armasep[j] = Narma[i-1][j];    
											}
										}
									}
									
							HAv(armase, Farma, armasep);		
								
								break;
							}
							case 3:{			
							for(int i=0; i<=tam; i++)
									{
										if(i  == armase)
										{
											for(int j=0; j<50; j++)
											{
												armasep[j] = Narma[i-1][j];    
											}
										}
									}
									
							HAv(armase, Farma, armasep);		
								break;
							}
							case 4:{		
						for(int i=0; i<=tam; i++)
									{
										if(i  == armase)
										{
											for(int j=0; j<50; j++)
											{
												armasep[j] = Narma[i-1][j];    
											}
										}
									}
									
							HAv(armase, Farma, armasep);		
								break;
							}
							case 5:{			
							for(int i=0; i<=tam; i++)
									{
										if(i  == armase)
										{
											for(int j=0; j<50; j++)
											{
												armasep[j] = Narma[i-1][j];    
											}
										}
									}
									
							HAv(armase, Farma, armasep);		
								break;
							}
							default :{
								cout<<"\t\t\tOpcion invalida\n";
								cout<<"\t\t\tHas perdido una pregunta"<<endl;
								cout<<"\t\t\t:(\n";
								break;
							}
			}
}

