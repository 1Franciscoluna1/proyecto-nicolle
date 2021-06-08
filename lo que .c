//Autores:  Omar Alejandro Barba Limón y Nicolle Lizbeth Castillo Gutierrez 
 //Junio 4,2021
 // Proyecto 
 
#include <stdio.h>
// #include <conio.h>
#include <stdlib.h> 
#include <ctype.h>
 
 struct dato {
char nombre[30], tel[10];
int edad,codigo;
  	
}empleado[2];



//mesas funcion

 int ingresar(){
 	int mesas;
 	printf("\t\tPara iniciar el programa ingrese la cantidad de mesas del dia: ");
 	scanf("%i",&mesas);
 	return mesas;	
 }

void menu(){
 	printf("Ingresando a seleccion de menu...\n");
	printf("\n\t\n\tMenu\n\t\n\t");
	printf("\n\tHamburguesas: ");
	printf("\n\t\tEl combo incluye papas  y refresco ");
	printf("\n\t\tHamburguesa sencilla 79 mxn");
	printf("\n\t\tHamburguesa doble 109 mxn");
	printf("\n\t\tCombo sencillo 119 mxn");
	printf("\n\t\tCombo doble 149 mxn");
	printf("\n\tBebidas:");
	printf("\n\t\tMateada 45mxn");
	printf("\n\t\tCerveza 25mxn");
	printf("\n\t\tRefresco 25mxn");
	printf("\n\t\tPapas 50mxn");
}
 
//impresion del empleado
 void imprecion_usuario(int mesero){
for(int i=0;i < mesero;i++){
  printf("\n\n\t%s",empleado[i].nombre);
  printf("\n\t%s",empleado[i].tel);
  printf("\n\t%i",empleado[i].edad);
  printf("\n\t%i\n\t",empleado[i].codigo);
}
} 

//llenado de mesas
 void llenar_mesas(int x, int a[30]){
 	int i;
 	
	for(i=0;i<x;i++){
	printf("\n\tingrese los datos de la mesa %i:  ",i+1);
    scanf("%i",&a[i]);
	}
	}
 
 void imprimir_mesas(int x, int a[30]){
 	int i;
 	
	for(i=0;i<x;i++){
	printf("\n\tLos datos en la mesa %i son: %i\n\t",i+1,a[i]);
    
	}
 }
  int total(int th,int tb){
	int s;
	 	s=th+tb;
	//printf("\n\tEl resultado total de la cuenta es de: %i\n\t",s);
  return s;	
	 }
	 
 void pedido(int datos){
	int cant=0,s=0,d=0,c1=0,c2=0,rs=0,rd=0,rc=0,rcc=0,j=0,h,ii=0,th=0,tb=0; 
	int zz=0,b=0,beb=0,r=0,tr=0,tc=0,c=0,m=0,tm=0,p,tp,total_cuenta,a=0;
 	//menu();
 	//hamburguesa
 	printf("\n\tIngrese la cantidad de articulos de hamburguesas: ");
 	scanf("%i",&h);
 		
		 do{
       printf("\n\t\t La cantidad de articulos a seleccionar es: %i",h);
 	printf("\n\tSeleccione 1 si quiere agregar una hamburguesa sencilla \n\tSeleccione 2 si quiere agregar una habmurguesa doble");
 	printf("\n\tSeleccione 3 si quiere agregar un combo sencillo \n\tSeleccione 4 si quiere agregar un combo doble");
	scanf("%i",&cant);
	
		
 	if(cant==1){
     
		 printf("Indique la cantidad de hamburgesas sencillas que se selecionaron: ");
 		scanf("%i",&s);
     if(s<h){
 		rs=s*79;
 		ii=ii+s;
		 }
     else 
    printf("Error en la seleccion: ");
   }
	else if(cant==2){
		 printf("Indique la cantidad de hamburgesas dobles que se selecionaron: ");
 		scanf("%i",&d);
    if(d<=h){
 		rd=d*109;
 			ii=ii+d;}
       else printf("Error en la seleccion");
		 }
	else if(cant==3){
		 printf("Indique la cantidad de combos sencillos que se selecionaron: ");
 		scanf("%i",&c1);
     if(c1<=h){
 		rc=c1*119;
 		ii=ii+c1;}
     else printf("Error en la seleccion");
		 }
	else if(cant==4){
		 printf("Indique la cantidad de combos dobles que se selecionaron: ");
 		scanf("%i",&c2);
     if(c2<=h){
 		rcc=c2*149;
 		ii=ii+c2;}
      else printf("Error en la seleccion");
		 }
     else {
    printf("\n\tError en la seleccion");
  }	 
		 system("cls");	
	}
	while(ii!=h);
	//bebidas
	printf("\n\tIngrese la cantidad de articulos de bebidas y extras: ");
 	scanf("%i",&b);
 	do{
     printf("\n\t\t La cantidad de articulos a seleccionar es: %i",h);
 	printf("\n\tIseleccione 1 si quiere agregar un refresco \n\t seleccione 2 si quiere agregar una cerveza");
 	printf("\n\tIseleccione 3 si quiere agregar una malteada\n\t seleccione 4 si quiere agregar papas: ");
	scanf("%i",&beb);
	
		
 	if(beb==1){
		 printf("\n\tIndique la cantidad de refrescos que se consumieron: ");
 		scanf("%i",&r);
     if(r<=b){
 		tr=r*45;
 		zz=zz+r;}
     else 
       printf ("Error en la seleccion");
		 }
	else if(beb==2){
		 printf("\n\tIndique la cantidad de cervezas que se consumieron: ");
 		scanf("%i",&c);
     if(c<=b){
 		tc=c*25;
 		zz=zz+c;}
     else printf ("Error en la seleccion");
		 }
	else if(beb==3){
		 printf("\n\tIndique la cantidad de malteadas que se consumieron: ");
 		scanf("%i",&m);
     if(m<=b){
 		tm=m*25;
 		zz=zz+m;}
     else
        printf ("Error en la seleccion");
		 }
	
	else if(beb==4){
		 printf("\n\tIndique la cantidad de papas que se consumieron: ");
 		scanf("%i",&p);
     if(p<=b){
 		tp=p*30;
 		zz=zz+p;} 
     	else 
     printf ("Error en la seleccion");
  }	 
	system("cls");

	 }
	while(zz!=b);
	
	{
	
	printf("\n\t\tLos valores ingresado de haburguesas son: ");
	printf("\n\tLa cantidad de hamburguesa sencillas son %i y el total es: %i",s,rs); 
	printf("\n\tLa cantidad de hamburguesa dobles son %i y el total es: %i",d,rd); 
	printf("\n\tLa cantidad de combos sencillos son %i y el total es: %i",c1,rc); 
	printf("\n\tLa cantidad de combos dobles son %i y el total es: %i\n\n\t",c2,rcc); 
}

	printf("\n\t\tLos valores de las bebidas son: ");	
	printf("\n\tLa cantidad de refrescos son %i y el total es: %i",r,tr);
	printf("\n\tLa cantidad de cervezas son %i y el total es: %i",c,tc);
	printf("\n\tLa cantidad de malteadas son %i y el total es: %i\n\n\t",r,tr);
	printf("\n\tLa cantidad de papas extras son %i y el total es: %i\n\n\t",r,tr);

	th=rs+rd+rc+rcc;
	tb=tr+tc+tm+tp;	
  //printf("%i",total_cuenta);
  //total_cuenta = vtas+total_cuenta;
  datos=total( th, tb);
    printf("El valor de la cuenta es de: %i",datos);
	  }
	  


int llenar_meseros(){
int meseros;
 printf("\t\tPara poder continuar ingrese la cantidad de meseros.");
scanf("%i", &meseros);
 	  for (int i=0;i < meseros;i++){
	printf("\n\tEscribe el nombre de la persona que esta atendiendo: ");
	fflush (stdin);
  scanf(" %[^\n]s",empleado[i].nombre);
	printf("\n\tEscribe tu numero de empleado:");
	scanf(" %i",& empleado[i].codigo);
	printf("\n\tEscribe tu edad: ");
	scanf(" %i",& empleado[i].edad);
	printf("\n\tEscribe telefono: ");
	scanf(" %[^\n]s",empleado[i].tel);
}

  return meseros;
}
		
  int ingreos_menu(){
    int var;
printf("\n\tIngrese '1' si quiere ingresar al menu ");
 	printf("\n\tIngrese '2' si quiere llenar las mesas con la cantidad\n\tde personas que va a tener disponible durante el turno:  ");
 	printf("\n\tIngrese '3' si quiere sacar cuenta de una mesa");
 	printf("\n\tIngrese '4' si quiere salir: ");
 	scanf("%i",&var);
   return var;
  }

void imrpimir_totalcta(int total){
printf("\n\nEl total de las ventas del dia fue=\t%i mxn",total);
}

 int main(){
 	int me,var,m,z,opc,x,i,a[30] = {0};
 	int totalmeseros, datos=0;
  

  totalmeseros = llenar_meseros();

	imprecion_usuario(totalmeseros);
	system("pause");
	system("cls");
	me=ingresar();
	system("cls");
	do
	{
	var=ingreos_menu();
 	
	system("cls");
 	switch (var)
	 {
	 case 1: {//menu
	 
		menu();
	 	system("pause");
		system("cls");
		break;
	 }
	 case 2:{//seleccion de mesas 
	 
	 llenar_mesas(me,a);
   imprimir_mesas(me,a);	
	 system("pause");
	 system("cls");
		break;
	 }
	 case 3:{//llenar pedidos 
	 	menu();
	 	 system("pause");
		 system("cls");
	 	pedido(datos);

		break;
	 }
	 case 4:
	 	{
	 		break;
		 }
		 
	 }
	 
	 }
	 while (var!=4);
  imprimir_mesas(me,a); 
	imprecion_usuario(totalmeseros);
  //imrpimir_totalcta(datos);
	 return 0;
	//getch();
	 }
	 