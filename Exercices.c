 #include <stdio.h>

void challengeI(){

    int num[5] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < 5; i++){
    printf("%d \n",num[i]);
    }
}


void  challengII(){

    int n;
     printf("Entrez le nombre d'elements: \n");
     scanf("%d", &n);

    int elements[n];

    for(int i = 0; i < n; i++){
       printf("Entrez l' element %d :\n", i +1);
       scanf("%d", &elements[i]);
    }
    for(int i = 0 ; i < n ; i++){
        printf("Element %d : \n%d \n", i+1 , elements[i]);
        
    }
    
}


void challengeIII(){

     int n, s = 0;
     printf("Entrez le nombre d'elements: \n");
     scanf("%d", &n);

    int elements[n];

    for(int i = 0; i < n; i++){
       printf("Entrez l' element %d :\n", i +1);
       scanf("%d", &elements[i]);
    }
    for(int i = 0 ; i < n ; i++){

        printf("Element %d : \n %d \n", i+1 ,elements[i]);
        s +=elements[i];
         
    }
     printf("La somme des elements est : %d  \n", s);

    
}

void challengeIV(){
    int n;
     printf("Entrez le nombre d'elements: \n");
     scanf("%d", &n);

    int elements[n];

    for(int i = 0; i < n; i++){
       printf("Entrez l' element %d :\n", i +1);
       scanf("%d", &elements[i]);
    }

     int maximum = elements[0];
    for(int i = 1 ; i < n ; i++){
      if ( elements[i] > maximum){
        maximum = elements[i];
      }
        
    }
    printf("Le maximum est : %d\n", maximum);
    
}

void challengeV(){
    int n;
     printf("Entrez le nombre d'elements: \n");
     scanf("%d", &n);

    int elements[n];

    for(int i = 0; i < n; i++){
       printf("Entrez l' element %d :\n", i +1);
       scanf("%d", &elements[i]);
    }

     int minimum = elements[0];
    for(int i = 1 ; i < n ; i++){
      if ( elements[i] < minimum){
        minimum = elements[i];
      }
        
    }
    printf("Le minimum est : %d\n", minimum);


}

void challengeVI(){
     int n, f;
     printf("Entrez le nombre d'elements: \n");
     scanf("%d", &n);

    int elements[n];

    for(int i = 0; i < n; i++){
       printf("Entrez l' element %d :\n", i +1);
       scanf("%d", &elements[i]);
    }

     printf("Entrez le facteur de multiplication : \n");
     scanf("%d", &f);

    for (int i = 0; i < n ; i++){
        elements[i] *= f;
    }

    for(int i = 0 ; i < n ; i++){
        printf("Element %d : \n%d \n", i+1 , elements[i]);
        
    }
    
}

void challengeVII(){

    int n;
     printf("Entrez le nombre d'elements: \n");
     scanf("%d", &n);

    int elements[n];

    for(int i = 0; i < n; i++){
       printf("Entrez l' element %d :\n", i +1);
       scanf("%d", &elements[i]);
    }

    for(int i = 0 ;i < n ;i++){
          for(int j = 0; j < n - i - 1 ; j++){
                if ( elements[j] > elements[j + 1]){

                    int s = elements[j];
                    elements[j] = elements[j + 1];
                    elements[j + 1]= s;

                    }
            }
    }
    printf("Elements trie :\n");
    for (int i = 0; i < n; i++) {
    printf("%d \n" , elements[i]);
    }
} 

void challengeVIII(){

     int n;
     printf("Entrez le nombre d'elements: \n");
     scanf("%d", &n);

    int elements[n];
    int elementscpy[n];

    for(int i = 0; i < n; i++){
       printf("Entrez l' element %d :\n", i +1);
       scanf("%d", &elements[i]);
    }
    for(int i = 0; i < n; i++){
        elementscpy[i] = elements[i];
    }

     for(int i = 0 ; i < n ; i++){
        printf("Element  copie %d : \n%d \n", i+1 , elementscpy[i]); 
    }

}

void challengeIVV(){
    
     int n;
     printf("Entrez le nombre d'elements: \n");
     scanf("%d", &n);

    int elements[n];
    int elementscpy[n];

    for(int i = 0; i < n; i++){
       printf("Entrez l' element %d :\n", i +1);
       scanf("%d", &elements[i]);
    }

    int j = n - 1;
    for(int i = 0; i < n ; i++){
        elementscpy[i] = elements[j];
        j--;
    }
    
     for(int i = 0 ; i < n ; i++){
        printf("Element  copie %d : \n%d \n", i+1 , elementscpy[i]); 
    }
}


int main(){

    challengeIVV();
     return 0;
}