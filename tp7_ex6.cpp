//�crire :
//Une proc�dure void chargement(int *,int *, int *) permettant de saisir un entier 1=n=20
//et un entier 1=m=20 et de charger une matrice M par n*m entiers,
//Une proc�dure void affichage(int, int,int *) permettant d�afficher les �l�ments de la
//matrice M,
//Le programme principal d�clarant n, m et une matrice statique d�entiers M[20][20] et
//d�appeler les deux proc�dures chargement et affichage.

#include<stdio.h>
#include<stdlib.h>

chargement(int *n, int*m, int *p){
	int *p3; // pointeur de d�part du tableau unidimensionnel
	do{
		printf("donner le nombre de ligne=");
		scanf("%d",n);
	}while((*n<1)||(*n>20));
	
	do{
		printf("donner le nombre de colonne=");
		scanf("%d",m);
	}while((*m<1)||(*m>20));
	
	for(int i=0; i<*n; i++){
		for(int j=0; j<*m; j++){
			printf("donner M[%d][%d]",i,j);
			scanf("%d",p3+i*(*m)+j); //i * 20 est la contribution due aux lignes.donc cela d�place le pointeur de i * 20
		}//j est la contribution due aux colonnes. Si nous sommes � la colonne j, cela d�place le pointeur de j positions suppl�mentaires.
	}
}

void affichage(int n,int m, int *p3){
	int i,j;
	printf("M : \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",*(p3+i*(m)+j));
		}
		printf("\n");
	}
}

int main(){
	int n,m;
	int M[20][20];
	chargement(&n,&m,(int*) M);
	affichage(n,m,(int*) M);
	return 0;
}
