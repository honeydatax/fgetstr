#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *fgetstr(char *c,int sizes,char *s,FILE * f1){
	int ipos=0;
	int poss=0;
	char *cc;
	char *ccc;
	cc=c;
	if (sizes>3){
		ipos=ftell(f1);
		poss=fread(c,sizes-2,1,f1);
		c[sizes-1]=0;
		//c[poss+1]=0;
		ccc=strstr(c,s);
		if (ccc!=NULL){
			ccc[0+strlen(s)]=0;
			ipos=ipos+strlen(c);
			fseek(f1,ipos,SEEK_SET);
		}
		
	}else{
		cc=NULL;
		return cc;
	}
	return cc;
}
