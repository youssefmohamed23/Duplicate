#include <stdio.h>
#include <stdlib.h>

#define S 7

void print(int a[] , int size );
int* search(int a[] , int size);
int main()
{
    int arr[7] = {0};
    printf("Please, Enter array of %d numbers \n",S);
    for (int i = 0 ; i  < S ; i++){

    scanf("%d" , &arr[i]);

    }

  print(arr,S);


printf("%d", *search(arr,S));

/*if( *(search(arr,S)) != -1 ){


    printf("The number %d is duplicated %d times \n" ,*(search(arr,S)),*(search(arr,S)+1));

}
*/
 // else printf("No duplicate numbers\n");


    return 0;
}

void print(int a[] , int size )
{

for ( int j = 0 ; j < size ; j++){

    printf("%d ",a[j]);

}
printf("\n");
}

int* search(int a[] , int size){
    int count = 0 , temp = -1;
 // printf("Count = %d , temp = %d \n",count,temp);
for (int i = 0 ; i < S ; i++){


    for (int k = 0 ; k< S ; k++){

// if ((i!=k))   printf("number to be searched = %d , current searched element = %d \n" ,a[i] ,a[k] );

        if ((i!=k) && (a[i]==a[k] )) {

    count++ ; temp = a[i] ;
  //  printf("%d %d \n",temp , count );

    }

}

}
 int found[2] = {temp , count};

 return found ;
}
