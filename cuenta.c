#include <stdio.h>
struct productos{
	char *p;
	int x;
	int precio;
	int alm;
};
struct productos uno={"[1]1Kg de huervo",5,35},dos={"[2]Garrafon ",10,19},tres={"[3]Bolsa de papas ",20,15},cuatro={"[4]Botella de coca cola",5,15};
struct productos cinco= {"[5]1kg de tortillas ",10,10};
int cont,acum;
void cuenta(){
	if(uno.alm>0){
		printf("\n\nUsted tiene(s) %d kilos de huevo y son %c%d",uno.alm,36,uno.alm*uno.precio);
	}
	if(dos.alm>0){
		printf("\n\nUsted tiene(s) %d garafone(s) y son %c%d",dos.alm,36,dos.alm*dos.precio);
}if(tres.alm>0){
		printf("\n\nUsted tiene(s) %d bolsa(s) de papas y son %c%d",tres.alm,36,tres.alm*tres.precio);
	}if(cuatro.alm<0){
		printf("\n\nUsted tiene(s) %d botella(s) de coca cola y son %c%d",cuatro.alm,36,cuatro.alm*cuatro.precio);
	}if(cinco.alm>0){
		printf("\n\nUsted tiene(s) %d kilos de tortilla y son %c%d",cinco.alm,36,cinco.alm*cinco.precio);
}if(acum>0){
		printf("\n\n\tSu cuenta seria %c%d",36,acum);
}else{

		printf("\n\n\tUsted no selecciono nada :(");
}
}
