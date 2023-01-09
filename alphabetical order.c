#include<stdio.h>
#include<string.h>
main(){
	int i,j,n;
	char str[100][100],s[100];
	printf("enter number of names :");
	scanf("%d",&n);
	printf("enter names in any order:");
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(str[i],str[j])>0){
				strcpy(s,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[i],s);
			}
		}
	}
	int ch;
	printf("choose an order :\n1=Ascendind\n2=decending\n");
	scanf("%d",&ch);
	if(ch==1){
		printf("Ascending order :\n");
		for(i=0;i<n;i++){
			printf("%s ",str[i]);
		}
	}
	else{
		printf("Decending order :\n");
		for(i=n-1;i>=0;i--){
			printf("%s ",str[i]);
		}
	}
	}
