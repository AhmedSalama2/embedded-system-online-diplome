/*
 * main.c
 *
 *  Created on: 2 Jul 2022
 *      Author: Ahmed Salama 
 */
#include <stdio.h>
int main (){
	char x;
	printf ("Enter an alphabet :");
	fflush (stdin); fflush(stdout);
	scanf ("%c",&x);
	switch (x){
	case 'A':printf ("A is a vowel.");break;
	case 'a':printf ("a is a vowel.");break;
	case 'i':printf ("i is a vowel.");break;
	case 'I':printf ("I is a vowel.");break;
	case 'U':printf ("U is a vowel.");break;
	case 'u':printf ("u is a vowel.");break;
	case 'e':printf ("e is a vowel.");break;
	case 'E':printf ("E is a vowel.");break;
	case 'o':printf ("o is a vowel.");break;
	case 'O':printf ("O is a vowel.");break;
	default :printf ("%d is a consonant ",x);break;
	}
	return 0;
}




