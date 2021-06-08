// //Autores Nicolle Lizbeth Castillo Gutierrez y Omar Alejandro barba limon 
// //04 de Junio del 2021
// //Proyecto del final de parcial

// #include<stdio.h>
// //#include<conio.h>

// typedef struct{
// char nombre[30], tel[10];
// int edad, codigo; 	
// }dato;


// int ingreso ()
// {
// 	int mesas;
// 	printf("\n\tescribe el numero de la mesas");
// 	scanf("%i",& mesas);
// 	return mesas;
	
// }
// void menu()
// {
// 	printf("\n\t\n\tMenu\n\t\n\t");
// 	printf("\n\tEl combo incluye papas chicas y refresco chico");
// 	printf("\n\tHamburguesa basica\n\tburger 77mxn\t\t\tcombo 139mxn");
// 	printf("\n\tHamburguesa doble\n\tburger 100mxn\t\t\tcombo 159mxn");
// 	printf("\n\tHamburguesa tocino\n\tburger 77mxn\t\t\tcombo 139mxn");
// 	printf("\n\tHamburguesa tocino doble\n\tburger 100mxn\t\t\tcombo  159mxn");
// 	printf("\n\tHamburguesa de pollo\n\tburger 92mxn\t\t\tcombo 155mxn");
// 	printf("\n\tHamburguesa jalapeño\n\tburger 92mxn\t\t\tcombo 155mxn\n\n");
		
// }
// void usuario(dato *empleado)
// {
	

//   for (int i=0;i < 2;i++){
// 	printf("\n\tEscribe el nombre de la persona que esta atendiendo: ");
// 	fflush (stdin); 
//   scanf(" %[^\n]s",empleado[i].nombre);
// 	printf("\n\tEscribe tu numero de empleado:");
// 	scanf("%i",& empleado[i].codigo);
// 	printf("\n\tEscribe tu edad: ");
// 	scanf("%i",& empleado[i].edad);
// 	printf("\n\tEscribe telefono: ");
// 	fflush(stdin);
//   scanf(" %[^\n]s",empleado[i].tel);
//   }
	
// }
// void aver(dato *empleado)
// {
// for(int i=0;i < 2;i++){
//   printf("\n\n%s",empleado[i].nombre);
//   printf("\n%s",empleado[i].tel);
//   printf("\n%i",empleado[i].edad);
//   printf("\n%i",empleado[i].codigo);

// }
// }
// int main()
// {
//   dato empleado[2];
// 	int me;
	
// 	me=ingreso();
// 	printf("\n\tel numero de mesa es: %i", me);
	
// 	menu();
// 	usuario(empleado);
// 	aver(empleado);
	
	
// }