#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fonk1(int []);
void fonk2(int [] );
int main(int argc, char *argv[]) {
	int asal[100]={1};
	int i;
	for(i=0;i<100;i++){
		asal[i]=1;
		}
fonk1(asal);
fonk2(asal);
		
		
		return 0;
}
int fonk1(int dizi[]){
int j,k;
	for(j=2;j<100;j++){
			if(dizi[j]==1){
				for(k=j+1;k<100;k++){
					if(k%j==0){
						dizi[k]=0;
					}
				}
			}
		}
	return dizi;}
	void fonk2(int dizi[]){
		int i;
	for(i=0;i<100;i++){
			printf("dizinin %d. elemani: %d\n",i,dizi[i]);	
	}}
