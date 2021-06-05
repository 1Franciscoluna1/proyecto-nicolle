 //Autores:  Omar Alejandro Barba Limón y Nicolle Lizbeth Castillo Gutierrez 
 //Junio 4,2021
 // Proyecto 
 #include <stdio.h>
 //#include <conio.h>
 
 struct dato {
char nombre[30], tel[10];
int edad;
float codigo; 	
};

 int ingresar(){
 	int mesas;
 	printf("Para iniciar el programa ingrese la cantidad de mesas del dia: ");
 	scanf("%i",&mesas);
 	return mesas;	
 }
 
 int inicio(){
	int var;
 	printf("Ingrese '1' si quiere ingresar al menu\n ");
 	printf("Ingrese '2' si quiere ingresar a la selecion de mesas:  ");
 	printf("Ingrese '3' si quiere Sacar cuenta de una mesa");
 	scanf("%i",&var);
 
 	return var;
 	
}

 int usuario(){
 	
 	
 	
 }

 
 void llenar_mesa(int x, int a[30]){
 	int m,i;
 	
 printf("¿Que numero de mesa es la que usted quiere llenar?");	
	scanf("%i",&m);
	for(i=0;i<x;i++){
    
		printf("ingrese datos: ");
    scanf("%i",&a[m-1]);
	}
	
	
	}
 
 void menu(){
 	printf("Ingresando a seleccion de menu...\n");
printf("\n\t\n\tMenu\n\t\n\t");
	printf("\n\tEl combo incluye papas chicas y refresco chico");
	printf("\n\tHamburguesa basica\n\tburger 77mxn\t\t\tcombo 139mxn");
	printf("\n\tHamburguesa doble\n\tburger 100mxn\t\t\tcombo 159mxn");
	printf("\n\tHamburguesa tocino\n\tburger 77mxn\t\t\tcombo 139mxn");
	printf("\n\tHamburguesa tocino doble\n\tburger 100mxn\t\t\tcombo  159mxn");
	printf("\n\tHamburguesa de pollo\n\tburger 92mxn\t\t\tcombo 155mxn");
	printf("\n\tHamburguesa jalapeño\n\tburger 92mxn\t\t\tcombo 155mxn");
} 
 	
 	
 	
 int main(){
 	int me,opc,x,i,a[30] = {0};
	me=ingresar();
	opc=inicio();
 
 	switch (opc){
	 case 1: {
	 	menu();
		break;
	 }
	 case 2:{//seleccion de mesas 
	
	 if(me>0){
	 llenar_mesa(me,a);	
	 }
	 	
		break;
	 }
	 case 3:{
		break;
	 }
	 }
	return 0;
	//getch();
 }