#include <stdio.h>
void devoluciones(){
	int del,as;
	printf("Que desea devolver%c\n",63);
	printf("%s \n",uno.p);
	printf("%s \n",dos.p);
	printf("%s \n",tres.p);
	printf("%s \n",cuatro.p);
	printf("%s \n",cinco.p);
	scanf("%d",&del);
	printf("\nCuantos desea devolver%c\n",63);
	scanf("%d",&as);
	 switch(del){
	 	case 1:	
	 	if(as<=uno.alm){
	 		uno.alm-=as;
	 		acum-=(uno.precio*as);
	 		uno.x+=as;
	 		printf("producto devuelto\n");
		 }else{
		 	printf("No se puede hacer esta accion :( \n");}
		 break;
		 case 2:
	 	if(as<=dos.alm){
	 		dos.alm-=as;
	 		acum-=(dos.precio*as);
	 		printf("producto devuelto\n");
	 		dos.x+=as;
		 }else{
		 	printf("No se puede hacer esta accion :( \n");
		 }
		 break;
		 case 3:
	 	if(as<=tres.alm){
	 		tres.alm-=as;
	 		acum-=(tres.precio*as);
	 		printf("producto devuelto\n");
	 		tres.x+=as;
		 }else{
		 	printf("No se puede hacer esta accion :( \n");
		 }
		 break;
		 case 4:
	 	if(as<=cuatro.alm){
	 		cuatro.alm-=as;
	 		acum-=(cuatro.precio*as);
	 		printf("producto devuelto\n");
	 		cuatro.x+=as;
		 }else{
		 	printf("No se puede hacer esta accion :( \n");
		 }
		 break;
		 case 5:
	 	if(as<=cinco.alm){
	 		cinco.alm-=as;
	 		acum-=(cinco.precio*as);
	 		printf("producto devuelto\n");
	 		cinco.x+=as;
		 }else{
		 	printf("No se puede hacer esta accion :( \n");
		 }
		break;
	 }
}
