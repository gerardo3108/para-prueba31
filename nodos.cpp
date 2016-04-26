#include<stdio.h>
#include<conio.h>
#include<windows.h>
//implementacion de lista simple enlasada en forma dinamica
//uso punteros

struct nodos{
	int dato;
	nodos*siguiente;
	
};
nodos*head,*nuevo;

int valor,op;

void ingresardatos(){
	printf("Ingrese valor entero: ");
	scanf("%d",&valor);
	system("cls");
	
} 


void ingresenodo(){//ingresar al inicio 
	
	if(head==NULL)
	{
		nuevo=new nodos; // se toma nodo de memoria apuntado por puntero nuevo 
		nuevo->dato=valor;//llenar con dato 
		nuevo->siguiente=NULL;//llenar enlace 
		head=nuevo;//cambiar valor head 
	}
	else{
		nuevo=new nodos;
		nuevo->dato=valor;
		nuevo->siguiente=head;
		head=nuevo;
	}

}


void eliminarnodos()// del inicio 
{	if(head==NULL)
	{
		printf("No se puede eliminar el nodo");
		getch();
			system("cls");
	}
	else{
		if(head->siguiente==NULL)
		{
			valor=head->dato;
			head=NULL;	
		}
		else{
			valor=head->dato;
			head=head->siguiente;
		}
	}
	
	
}

void listarnodos(){
	nodos * p;
	if(head==NULL)
	{
		printf("No hay nodos en la lista");
		getch();
		
	}
	else{
		p=head;
		do
		{
			
			printf(" [%d]",p->dato);
			p=p->siguiente;
			
		}while (p!=NULL);
		getch();
	}
	
	system("cls");
}


void valorbuscar(){
	nodos * p;
	int valorabuscar,ok=0;
	
	printf("Ingresar valor a buscar: ");
	scanf("%d",&valorabuscar);
	
	if(head==NULL)
	{
			printf("La lista esta vacia al buscar ");
			getch();
	}
	else{
		
		p=head;
		do
		{
			if(valorabuscar==p->dato)
			{
			printf("El valor [%d] se encontro en la lista",valorabuscar);
			ok=1;
			}
			
			p=p->siguiente;
			
		}while (p!=NULL);
		
		if(ok==0)
		{
		printf("El valor a buscar no se encontro");	
		}
		getch();
	
	}
		
	system("cls");
}
void mostrarpositivos()
{

	nodos * p;
	
	int numeropositivos=0;
	if(head==NULL)
	{
		printf("No hay nodos en la lista");
		getch();
		
	}
	else{
		
		p=head;
		do
		{
			if( p->dato > 0)
			{
			printf(" [%d]",p->dato);
			numeropositivos++;	
			}
			
			
			p=p->siguiente;
			
		}while (p!=NULL);
		getch();
	}
	printf("\nEl numero de numeros positivos es: %d",numeropositivos);
	getch();
	
	system("cls");
}

 main()
{

		do{
			printf("1. Ingresar nodo a la linsta:\n ");
			printf("2. Eliminar nodo a la linsta:\n ");
			printf("3. Listar nodo:\n ");
			printf("4. Buscar nodo en la lista:\n ");
			printf("5. Mostrar positivos: \n ");
			printf("0.Fin");
			printf("\n");
			scanf("%d",&op);
			system("cls");
			switch(op)
			{
					case 1:
						ingresardatos();
						ingresenodo();
					break;
					
					case 2:
						eliminarnodos();
						
					break;
					
						case 3:
						listarnodos();
					break;
					
					case 4:
						valorbuscar();
						
					break;
					
					case 5:
						mostrarpositivos();
						
					break;
					
					
					
				}
			
			
			
		}while(op!=0);
	
}
