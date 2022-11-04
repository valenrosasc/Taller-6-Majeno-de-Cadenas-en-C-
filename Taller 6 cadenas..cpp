//Universidad Tecnologica de Pereira.
//Ingeniería en Sistemas y Computación.
//IS284 Programación 2.
//Valentina Rosas Coral
//Observaciones
//Tipo de notacion Pascal Case

#include <stdio.h>
#include <string.h>

/* 1)Hacer una función que reciba una cadena de caracteres y devuelva la longitud de esta. Es decir, 
implemente la función strlen.*/
//Nombre de la funcion: Ejercicio 1
//Objetivo: Hacer una funcion que reciba una cadena de carcteres e imprima la longitud de esta.
//Ejemplo: Si el usuario ingresa la cadena "Hola" imprime la longitud de cadena que es '4'.

int Ejercicio1() //strlen "Cuenta los caracteres de la cadenas"
{
	char cadena1 [20];
	int tam;
    printf("Ingrese una cadena: ");
    scanf("%s",cadena1);
    tam=strlen (cadena1);
    printf ("La cadena ' %s ' Tiene %d caracteres \n",cadena1,tam);
}

/* 2)Hacer una función que reciba una cadena de caracteres y devuelva una copia en otra con el contenido de 
la primera. Es decir implemente la función strcpy. */
//Nombre de la funcion: Ejercicio 2
//Objetivo: Hacer una funcion que devuleva una copia de la cadena ingresada.
//Ejemplo: Si el usuario ingresa la cadena "Hola" imprime "Hola" en la cadena 2.

int Ejercicio2() //strcpy "Copia una cadena"
{
	char cad1 [20], cad2 [20];
	printf("Ingrese la cadena 1: ");
	scanf ("%s",cad1);
	strcpy (cad2,cad1);
	printf ("Cadena 1 quedo copiada en Cadena 2 %s ---%s\n", cad1, cad2);
}

/* 3)Hacer una función que reciba un entero N y devuelva una cadena de longitud N, leyendo por pantalla cada uno
de los N caracteres de la cadena. */
//Nombre de la funcion: Ejercicio 3
//Objetivo: Hacer una funcion que reciba N numero e imprima una cadena de N longitud.
//Ejemplo: Si el usuario ingresa el numero 3 imprime la cadena 1,2,3.

void Ejercicio3()
{
    int n;
    printf("Ingrese un numero entero que determina el tamaño de la cadena: ");
    scanf ("%d",&n);
    char cad[n];
    for (int i=0;i<=n;i++)
    {
        printf ("%c",cad[i]);
    }
}

/*4)Haga una función que reciba una cadena de caracteres y un carácter, debe devolver la cadena con el caracter
 adicionado al final. Por ejemplo si la cadena inicial es “casa” y el caracter es ´s´, debe devolver “casas”.*/
//Nombre de la funcion: Ejercicio 4
//Objetivo: Hacer una funcion que reciba una cadena y un carcter e imprima la union de estos dos.
//Ejemplo: Si el usuario ingresa "gato" y el caracter 's' imprime como resultado "gatos".

void Ejercicio4()
{
    char cad1 [20];
    char cad2[20];
    printf ("Ingrese la cadena: ");
    scanf ("%s",cad1);
    printf ("Ingrese el caracter: ");
    scanf ("%s",cad2);
    cad2[1]='\0';
    printf ("%s",cad2);
    strcat(cad1,cad2);
    printf ("La union de la cadena y caracter: %s\n",cad1);
}

// 5)Hacer una función que reciba una cadena de caracteres y la invierta en ella misma.
//Nombre de la funcion: Ejercicio 5
//Objetivo: Hacer una funcion que reciba una cadena de caracteres e imprima la cadena invertida.
//Ejemplo: Si el usuario ingresa "hola" imprime "aloh".

void Ejercicio5()
{
    char cad1[20];
	printf("Ingrese la cadena: ");
	scanf ("%s",cad1);
	strrev (cad1);
	printf("La cadena invertida es: %s\n",cad1);  
}

/* 6)Hacer una función que reciba una cadena de caracteres y devuelva otra cadena invirtiendo todos
los caracteres de la primera. */
//Nombre de la funcion: Ejercicio 6
//Objetivo: Hacer una funcion que reciba una cadena de caracteres e imprima ptra cadena con los caracteres invertidos.
//Ejemplo: Si el usuario ingresa "hola" se imprime en otra cadena "aloh"

void Ejercicio6()
{
    char cad1[20];
	printf("Ingrese la cadena: ");
	scanf ("%s",cad1);
	strrev (cad1);
	printf("La cadena invertida es: %s\n",cad1);
}

/*7)Haga una función que reciba dos cadenas de caracteres y devuelva otra cadena con la concatenación de las
 dos primeras. Es decir implemente la función concat. */
//Nombre de la funcion: Ejercicio 7
//Objetivo: Hacer una funcion que le pida al usuario dos cadenas y posteriormente las imprima juntas.
//Ejemplo: Si el usuario ingresa en la primera cadena "123" y en la segunda cadena "456" imprimira como resultado "123456".


void Ejercicio7()
{
    char cad1 [20], cad2 [20], cad3 [20];
	printf("Ingrese la cadena 1: ");
	scanf ("%s",cad1);
	printf ("Ingrese la cadena 2: ");
	scanf ("%s",cad2);
	strcat(cad1,cad2);
    strcat(cad1,cad3);
	printf ("La cadena final es: %s\n",cad1);
}

//8)Hacer una función que reciba una cadena de caracteres y cuente cuantas vocales tiene.
//Nombre de la funcion: Ejercicio 8
//Objetivo: Hacer una funcion que reciba una cadena y muestre en pantalla cuantas vocales hay en esta.
//Ejemplo: Si el usuario ingresa "hola" imprime "2" que es el numero de vovales que tiene la palabra.

void Ejercicio8()
{
    char cad1[20];
	printf("Ingrese la cadena: ");
	scanf ("%s",cad1);
    int i=0;
    int cantvocales;
    while (cad1[i]!='\0')
    {
        if (cad1[i]!='a' ||cad1[i]!='e'||cad1[i]!='i'||cad1[i]!='o'||cad1[i]!='u'||cad1[i]!='A' ||cad1[i]!='E'||cad1[i]!='I'||cad1[i]!='O'||cad1[i]!='U')
        cantvocales=cantvocales+1;
        i++;
    }
    printf("La cantidad de vocales en %s es: %d \n",cad1,cantvocales);
}

//9)Hacer una función que reciba una cadena de caracteres y devuelva otra sin las vocales.
//Nombre de la funcion: Ejercicio 9
//Objetivo: Hacer una funcion que reciba una cadena y muestre en pantalla los caracteres que no sean vocales.
//Ejemplo: Si el usuario ingresa "hola" imprime "h" y "l" que son los caracteres que No son vocales.

void Ejercicio9()
{
    char cad1 [20], cad2 [20];
	printf("Ingrese la cadena 1: ");
	scanf ("%s",cad1);
    int i=0;
    int j=strlen(cad1);
    char r;
    printf ("Cadena sin vocales: ");
    for(i=j-1; i >=0 ;i--)
    {
 
        if (cad1[i]=='a' || cad1[i]=='e' ||  cad1[i]=='i' ||cad1[i]=='o'||cad1[i]=='u')
        {
            cad2[i] = ' ';
        }
        else 
        {
            r=cad1[i];
            cad2[i] = r;
        }
       //printf("%c", cad1[i]);
   }
   printf ("%s\n", cad2);
    
}

//10)Hacer una función que lea un string con solo caracteres numéricos y devuelva el número que representa.
//Nombre de la funcion: Ejercicio 10
//Objetivo: Hacer una funcion que reciba un string e imprima el numero que representa.
//Ejemplo: 


void Ejercicio10()
{
    char cad1 [20];
    int numero;
	printf("Ingrese la cadena solo con valores numericos: ");
	scanf ("%s",cad1);
    //numero=atoi(cad1);
    printf("El numero es: %i\n",numero);
    
}

/*11)Hacer una función que reciba una cadena de caracteres e indique si es palíndrome. Una cadena de caracteres 
es palíndrome si se lee igual al derecho que al revés. Ejemplo: “ojo”, “abcdedcba”, “a”, 
“dabalearrozalazorraelabad”. */
//Nombre de la funcion: Ejercicio 11
//Objetivo: Hacer una funcion que reciba una palabra e indique si es palindrome o no.
//Ejemplo: Si el usuario ingresa "Somos" que es palindrome indica que esta palabra es palindrome.

void Ejercicio11()
{
    char cad1 [20], cad2 [20];
	printf("Ingrese la cadena: ");
	scanf ("%s",cad1);
    strcpy (cad2,cad1);
    strrev(cad2);
    if (strcmp(cad1,cad2)==0)
	printf("Es un palindrome\n");
	else
	printf("No es un palindrome\n");
}


/*12)Hacer una función boolean que reciba dos cadenas de caracteres e indique si son iguales.
 Es decir implemente la función srtcmp. */
//Nombre de la funcion: Ejercicio 12
//Objetivo: Hacer una funcion que reciba dos candenas e indique si estas son iguales.
//Ejemplo: Si el usuario ingresa la primera cadena "1234" y la segunda cadena "1234" nos indicara que son iguales.


void Ejercicio12()
{
	char cad1 [20], cad2 [20];
	printf("Ingrese la cadena 1: ");
	scanf ("%s",cad1);
	printf ("Ingrese la cadena 2: ");
	scanf ("%s",cad2);
	if (strcmp(cad1,cad2)==0)
	printf("cadena 1 y cadena 2 son iguales");
	else
	printf("cadena 1 y cadena 2 no son iguales");
}

/*13)Hacer una función que reciba dos cadenas de caracteres e indique si la segunda está incluida en la primera 
(es decir si es substring). */
//Nombre de la funcion: Ejercicio 13
//Objetivo: Hacer una funcion que reciba dos candenas e indique si la segunda esta incluida en la primera.
//Ejemplo: Si el usuario ingresa la primera cadena "12345" y la segunda cadena "123" indicara que la segunda esta incluida en la primera.


void Ejercicio13()
{
    char cad1 [20];
    char cad2 [20];
	printf("Ingrese la cadena 1: ");
	scanf ("%s",cad1);
	printf ("Ingrese la cadena 2: ");
	int tamcad1,tamcad2;
    tamcad1=strlen(cad1);
    tamcad2=strlen(cad2);
    
}

//14) Elaborar un menú que llame cada uno de los puntos del taller.

void menu()
{
    printf ("1.Reciba una cadena de caracteres y devuelva la longitud de esta. \n");
    printf ("2.Reciba una cadena de caracteres y devuelva una copia en otra con el contenido de la primera.\n");
    printf ("3.Reciba un entero N y devuelva una cadena de longitud N, leyendo por pantalla cada uno de los N caracteres de cadena.\n");
    printf ("4.Reciba una cadena de caracteres y un caracter, debe devolver la cadena con el caracter adicionado al final \n");
    printf ("5.Reciba una cadena de caracteres y la invierta en ella misma. \n");
    printf ("6.Reciba una cadena de caracteres y devuelva otra cadena invirtiendo todos los caracteres de la primera. \n");
    printf ("7.Reciba dos cadenas de caracteres y devuelva otra cadena con la concatenación de las dos primeras. \n");
    printf ("8.Reciba una cadena de caracteres y cuente cuantas vocales tiene. \n");
    printf ("9.Reciba una cadena de caracteres y devuelva otra sin las vocales. \n");
    printf ("10.Lea un string con solo caracteres numéricos y devuelva el número que representa. \n");
    printf ("11.Reciba una cadena de caracteres e indique si es palíndrome. \n");
    printf ("12.Función booleana que reciba dos cadenas de caracteres e indique si son iguales. \n");
    printf ("13.Reciba dos cadenas de caracteres e indique si la segunda está incluida en la primera \n");
    printf ("14. SALIDA\n");
    printf ("Ingrese la opcion: ");
    int op;
    scanf ("%d",&op);
    
    switch(op)
    {
    	case 1:
    		Ejercicio1();
    		break;
    		menu();
    	case 2:
    		Ejercicio2();
    		break;
    		menu();
    	case 3:
    		Ejercicio3();
    		break;
    		menu();
    	case 4:
    		Ejercicio4();
    		break;
    		menu();
    	case 5:
    		Ejercicio5();
    		break;
    		menu();
    	case 6:
    		Ejercicio6();
    		break;
    		menu();
    	case 7:
    		Ejercicio7();
    		break;
    		menu();
    	case 8:
    		Ejercicio8();
    		break;
    		menu();
    	case 9:
    		Ejercicio9();
    		break;
    		menu();
    	case 10:
    		Ejercicio10();
    		break;
    		menu();
    	case 11:
    		Ejercicio11();
    		break;
    		menu();
    	case 12:
    		Ejercicio12();
    		break;
    		menu();
    	case 13:
    		Ejercicio13();
    		break;
    		menu();
    	case 14:
    		printf("Adios...");
		default:
			printf("La opcion no es valida intente con otra...\n");
			break;
	}
}

int main()
{
	menu();
	return 0;
}
