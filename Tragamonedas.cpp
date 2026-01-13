/* 
		Nombre: 									
			- Alan Fernando Carlos Flores			
*/
#include <iostream>
#include <time.h>
#include <math.h>
#include <Windows.h>
using namespace std;

int RESTARCU (int);
int SUMARCM (int);
int GANAUSUARIO(int,int);
int PIERDEMAQUINA(int);
void FINALJUEGO(string,int,int);
void Proceso (int,int,int,int,int);
int COMPRAR();

int main (){
	int cm=100,o=1,i=0,cu;
	char res,pausa, apa;
	string n;
	string usu[100][2];
	int dinero[100];
	
	
do{
	do{
		cu=5;
		system("cls");
		cout<<endl<<endl<<"		---------------------------------------------";
		cout<<endl<<"			    Ingrese su nombre: ";
		cin>>n;
		cout<<"		---------------------------------------------";
		if (i>0)
		{
			for(int j=0;j<o;j++)
			{
				cout<<endl<<endl<<n<<endl<<endl;
				if (usu[j][1]=="Pausado"&&usu[j][0]==n)
				{
					cu=dinero[j];
					cout<<"			Puede continuar con su juego"<<endl<<endl<<"		Nombre:"<<n<<"	Monedas: $"<<cu;
					i=j;			
				}
			}
		}
		do 
		{	
			int a,b,c;
			srand(time(NULL));

			a=rand()%10+0;
			b=rand()%10+0;
			c=rand()%10+0;
			
			system("cls");
			if(cu>0){
			cout<<endl<<"  --------------------------------    --------------------    --------------------"   ;
			cout<<endl<<"  |             Nombre:          |    |  $ de la maquina |    |   $ del usuario  |";
			cout<<endl<<"  |              "<<n<<"           |    |       $"<<cm<<"       |    |       $"<<cu<<"        |";
			cout<<endl<<"  --------------------------------    --------------------    --------------------";
				
			
			
			cout<<endl<<endl<<endl<<"		Presione cualquier tecla para girar la ruleta";
		
			cout<<endl<<endl<<"     -----------------------------------------------------------------------";
			cout<<endl<<"     ||-------------------------------------------------------------------||";
			cout<<endl<<"     ||                     ||                     ||                     ||";
			cout<<endl<<"     ||                     ||                     ||                     ||";
			cout<<endl<<"     ||                     ||                     ||                     ||";
			cout<<endl<<"     ||-------------------------------------------------------------------||";
			cout<<endl<<"     -----------------------------------------------------------------------"<<endl<<endl;
		
			system("pause");
			system("cls");
			cu=RESTARCU(cu);
			cm=SUMARCM(cm);
			cout<<endl<<"  --------------------------------    --------------------    --------------------"   ;
			cout<<endl<<"  |             Nombre:          |    |  $ de la maquina |    |   $ del usuario  |";
			cout<<endl<<"  |              "<<n<<"           |    |       $"<<cm<<"       |    |       $"<<cu<<"        |";
			cout<<endl<<"  --------------------------------    --------------------    --------------------";
		
		
			cout<<endl<<endl<<endl<<endl<<endl<<"     -----------------------------------------------------------------------";
			cout<<endl<<"     ||-------------------------------------------------------------------||";
			cout<<endl<<"     ||                     ||                     ||                     ||";
			cout<<endl<<"     ||          "<<a<<"          ||          "<<b<<"          ||          "<<c<<"          ||";
			cout<<endl<<"     ||                     ||                     ||                     ||";
			cout<<endl<<"     ||-------------------------------------------------------------------||";
			cout<<endl<<"     -----------------------------------------------------------------------";
		
			
			if(a==7&&b==7&&c==7)
			{
				cout<<endl<<endl<<"		---------------------------------------------";
				cout<<endl<<"			   ¡Felicidades!"<<endl<<endl<<"			  Usted ha ganado $"<<cm;
				cout<<endl<<"		---------------------------------------------";
				cu=GANAUSUARIO(cu,cm);
				cm=cm-cm;
			}
			else if(a==0&&b==0&&c==0)
			{
				if(cm<7){
				cout<<endl<<endl<<"		---------------------------------------------";
				cout<<endl<<"	   La maquina no tiene el dinero completo de su premio"<<endl;
				cout<<endl<<"			   ¡Felicidades!"<<endl<<endl<<"			  Usted ha ganado $"<<cm;
				cout<<endl<<"		---------------------------------------------";
				cu=cu+cm;
				cm=cm-cm;
				}
				else {
				cout<<endl<<endl<<"		---------------------------------------------";
				cout<<endl<<"			   ¡Felicidades!"<<endl<<endl<<"			  Usted ha ganado $7";
				cout<<endl<<"		---------------------------------------------";
				cu=cu+7;
				cm=cm-7;
				}
			}
			else if(a==b&&b==c)
			{
				if(cm<3){
				cout<<endl<<endl<<"		---------------------------------------------";
				cout<<endl<<"	   La maquina no tiene el dinero completo de su premio"<<endl;
				cout<<endl<<"			   ¡Felicidades!"<<endl<<endl<<"			  Usted ha ganado $"<<cm;
				cout<<endl<<"		---------------------------------------------";
				cu=cu+cm;
				cm=cm-cm;
				}
				else{
				cout<<endl<<endl<<"		---------------------------------------------";
				cout<<endl<<"			   ¡Felicidades!"<<endl<<endl<<"			  Usted ha ganado $3";
				cout<<endl<<"		---------------------------------------------";
				cu=cu+3;
				cm=cm-3;
				}
			}
			else if(a==b||b==c||a==c)
			{
				cout<<endl<<endl<<"		---------------------------------------------";
				cout<<endl<<"			   ¡Felicidades!"<<endl<<endl<<"			  Usted ha ganado $1";
				cout<<endl<<"		---------------------------------------------";
				cu=cu+1;
				cm=cm-1;
			}
			else 
			{
				cout<<endl<<endl<<"		---------------------------------------------";
				cout<<endl<<"			   Lastima"<<endl<<endl<<"			   Ya sera para la proxima:(";
				cout<<endl<<"		---------------------------------------------";
			}
	
			cout<<endl<<"	Desea seguir jugando? [S/N]: ";
			cin>>res;
	}
	else if(cu<=0){
		res='s';
	}
	
		if(cu<=0&&(res=='S'||res=='s')){
			cu=COMPRAR();
		}
		
		}while((res=='S'||res=='s')&&cu>0);
	
		system("cls");

		FINALJUEGO(n,cm,cu);
	
		cout<<endl<<endl<<"	Usted se ha gastado todos sus creditos, y no ha comprado más";
		
		cout<<endl<<endl<<endl<<"	Desea Retirarse (R) de su juego o Pausarlo (P)? [R/P]: ";
		cin>>pausa;
		
		if(pausa=='R'||pausa=='r')
		{
			usu[i][0]=n;
			usu[i][1]="Retirado";
			dinero[i]=cu;
			o=o+1;
			i=i+1;
		}
		else if (pausa=='P'||pausa=='p')
		{
			usu[i][0]=n;
			usu[i][1]="Pausado";
			dinero[i]=cu;
			o=o+1;
			i=o;
		}
		cout<<endl<<endl<<"	Desea apagar la maquina? [S/N]: ";
		cin>>apa;
		
		//SI LA DECICION FUE APAGAR LA MAQUINA, MOSTRAR TABLA FINAL
		if (apa=='s'||apa=='S')
		{
		//TABLA FINAL DE JUGADORES
	    cout<<endl<<"                                Marcador final del jugador:                       ";
		cout<<endl<<"  --------------------------------    --------------------    --------------------"   ;
		cout<<endl<<"  |             Nombre:          |    |  Estatus: |    |   Monedas del usuario  |";
		cout<<endl<<"  --------------------------------    --------------------    --------------------"   ;
		o=o-1;		
		for (int j=0;j<o;j++)
		{
		cout<<endl<<"  |              "<<usu[j][0]<<"           |    |       "<<usu[j][1]<<"       |    |       $"<<dinero[j]<<"         |";
		cout<<endl<<"  --------------------------------    --------------------    --------------------";
		}
		
			Sleep(500);
			cout<<endl<<endl<<endl<<"			   Apagando";
			for (int j=0;j<5;j++)
			{
				cout<<".";
				Sleep(500);
			}
		}
	}while (i>=o);
}while (apa=='N'||apa=='n');
return 0;
}



int RESTARCU (int cu)
{
	int restarcu=0;
	restarcu=cu-1;
	return restarcu;
}

int SUMARCM (int cm)
{
	int sumarcm=0;
	sumarcm=cm+1;
	return sumarcm;
}

int GANAUSUARIO (int cu,int cm)
{
	int ganar=0;
	ganar=cu+cm;
	return ganar;
}

int PIERDEMAQUINA(int cm)
{
	int pierde=0;
	pierde=cm-cm;
	return pierde;
}

void FINALJUEGO(string n,int cm,int cu)
{
	    cout<<endl<<"                                Marcador final del jugador:                       ";
		cout<<endl<<"  --------------------------------    --------------------    --------------------"   ;
		cout<<endl<<"  |             Nombre:          |    |  $ de la maquina |    |   $ del usuario  |";
		cout<<endl<<"  |              "<<n<<"           |    |       $"<<cm<<"       |    |       $"<<cu<<"         |";
		cout<<endl<<"  --------------------------------    --------------------    --------------------";
}

int COMPRAR()
{
	int moneda;
	char sin;
	cout<<endl<<endl<<"~~~~~~~~";
	cout<<endl<<endl<<"	Usted tiene monedas insuficientes, ¿Desea comprar mas? [S/N]: ";
	cin>>sin;
	if(sin=='s'||sin=='S')
	{
		do{
		cout<<"		 ¿Cuantas monedas desea comprar?: ";
		cin>>moneda;
		}while(moneda==0||moneda<0);
	}
	else if (sin=='n'||sin=='N'){
		moneda=0;
	}
	cout<<endl<<endl<<"~~~~~~~~";
	return moneda;
}