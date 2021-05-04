#include <iostream>
using namespace std;

int tam(char *c){
	int con=0;
	while(*(c+con)!='\0'){
		con++;
	}
	return con;

}
int tamarr( char c[]){
    int con=0;
	while(c[con]!='\0'){
		con++;
	}
	return con;




}



char *concatenar(char *a,char *b){
	char *d=a;
    while(*(a)!='\0'){a++;}
    while(*b!='\0'){
        *a=*b;
        a++;b++;
    }
    a=d; return a;
}

void *conca(char a[],char b[]){
    int tam1=tamarr(a);
    int tam2=tamarr(b);
    for(int i=0;i<tam2;i++){
        a[i+tam1]=b[i];
    }
    

}



int main(){
	char one[]={"HOLA"};
	char two[]={"AMIGO"};
    int a=tamarr(one);
    int b=tamarr(two);
    conca(one,two);
    for(int i=0;i<a+b;i++){
            cout<<one[i];
    }
    cout<<endl;
	
    char *cad2=new char();
    cin>>cad2;
    char *cad3=new char();
    cin>>cad3;
    cout<<concatenar(cad2,cad3);
    delete cad2;
    delete cad3;
	return 0;


}
