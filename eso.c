#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
int main( int argc,char** argv )
{
	FILE* fp = fopen( "eso6","r" ) ;
	//FILE* fp = fopen( "2012-07-06 18.16.55.jpg","r" ) ;

	if( !fp ){
		printf("FILE can't be opened\n" ) ;
	}


	printf("ting ting tiding!\n") ;

	//Password verification
	char pass[] = "5656" ;
	int nbytes = 5  ;
	char* input = ( char* )malloc( sizeof( char )*100 )  ;
	//getline( &input,&nbytes,stdin ) ;
	scanf( "%s",input ) ;
	//printf("input is : %sheh",input ) ;

	if( strcmp( pass,input ) != 0 ){
		//printf("match found \n" ) ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		printf("nooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n") ;
		return -1 ;
	}

	unsigned char* newf  = ( unsigned char* )malloc( sizeof( unsigned char )*1129971 ) ;

	int counter = 1 ;
	int current ;
	current = fgetc( fp ) ; 
	while( current != EOF ){
		newf[ counter ] = ( unsigned char )current ;	
		//printf("current is : %d\n", current ) ;
		current = fgetc( fp ) ;
		counter++ ;
	}

	fclose( fp ) ; 

	counter -= 1;
	
	FILE* fpW = fopen( "eso.jpg","w" ) ;
	//FILE* fpW = fopen( "eso2.jpg","w" ) ;

	while( counter >0 ){
		//printf("fwrite is : %d\n",fwrite( newf+counter,1,1,fpW )  );
		fwrite( newf+counter,1,1,fpW ); 
		counter-- ;
	}
	fclose( fpW ) ;

	printf("<3\n") ;


}
