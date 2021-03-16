#include <stdio.h>
void ventas(){
	int y,num=0;
	printf("ingrese el numero del producto\n");
	scanf("%d",&y);
	if(1<=y && y<=5){
	switch(y){
		case 1:
			printf(" \n Usted escogio 1Kg de huevo \n cuantos kilos quieres%c\n",63);
			scanf("%d",&num);
			uno.x-=num;
			if (uno.x<=0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				acum=acum+(num*uno.precio);
				uno.alm+=num;
			}
			break;
		case 2:
			printf(" \n Usted escogio el garrafon \n cuantos Garrafones quieres%c\n",63);
			scanf("%d",&num);
			dos.x-=num;
			if (dos.x<=0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				acum+=(num*dos.precio);
				dos.alm+=num;
			}
			break;
		case 3:
			printf(" \n Usted escogio papas \n cuantas papas quieres%c\n",63);
			scanf("%d",&num);
			tres.x-=num;
			if (tres.x<=0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				acum=acum+(num*tres.precio);
				tres.alm+=num;
			}
			break;
		case 4:
			printf(" \n Usted escogio coca cola \n cuantas coca colas quieres%c\n",63);
			scanf("%d",&num);
			cuatro.x-=num;
			if (cuatro.x<=0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				acum=acum+(num*cuatro.precio);
				cuatro.alm+=num;
			}
			break;
		case 5:
			printf(" \n Usted escogio 1Kg de tortilla \n cuantos kilos quieres%c\n",63);
			scanf("%d",&num);
			cinco.x-=num;
			if (cinco.x<0){
			printf("Disculpe ya no tenemos en existencia ");
			}else{
				acum=acum+(num*cinco.precio);
				cinco.alm+num;
			}
			break;
	}
}else{
		printf("Respuesta no valida");
	}	
}
