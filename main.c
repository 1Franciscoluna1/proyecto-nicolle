//Autores Nicolle Lizbeth Castillo Gutierrez y Omar Alejandro barba limon 
//04 de Junio del 2021
//Proyecto del final de parcial

#include<stdio.h>
//#include<conio.h>

struct dato {
char nombre[30], tel[10];
int edad, codigo; 	
}p[10];
typedef dato d_empleado;

int ingreso ()
{
	int mesas;
	printf("\n\tescribe el numero de la mesas");
	scanf("%i",& mesas);
	return mesas;
	
}
void menu()
{
	printf("\n\t\n\tMenu\n\t\n\t");
	printf("\n\tEl combo incluye papas chicas y refresco chico");
	printf("\n\tHamburguesa basica\n\tburger 77mxn\t\t\tcombo 139mxn");
	printf("\n\tHamburguesa doble\n\tburger 100mxn\t\t\tcombo 159mxn");
	printf("\n\tHamburguesa tocino\n\tburger 77mxn\t\t\tcombo 139mxn");
	printf("\n\tHamburguesa tocino doble\n\tburger 100mxn\t\t\tcombo  159mxn");
	printf("\n\tHamburguesa de pollo\n\tburger 92mxn\t\t\tcombo 155mxn");
	printf("\n\tHamburguesa jalapeño\n\tburger 92mxn\t\t\tcombo 155mxn");
		
}
void usuario()
{
	//nombre y ID 
	d_empleado empleado; 
	int id, telefono[10], edad;
	char nombre[30];
	printf("\n\tEscribe el nombre de la persona que esta atendiendo: ");
	fflush (stdin); gets(empleado.nombre);
	printf("\n\tEscribe tu numero de empleado:");
	scanf("%i",& empleado.codigo);
	printf("\n\tEscribe tu edad: ");
	scanf("%i",& empleado.edad);
	printf("\n\tEscribe telefono: ");
	fflush(stdin); gets(empleado.tel);

	
}
void aver()
{

}
main()
{
	int me;
	{
		me=ingreso();
		printf("\n\tel numero de mesa es: %i", me);
	}
	menu();
	usuario();
	aver();
	
	
}