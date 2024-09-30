 #include <stdio.h>

void challengeI(){

    int num[5] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < 5; i++){
    printf("%d \n",num[i]);
    }
}


void  challengeII(){

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

void challengeIX(){
    
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


void challengeX(){

    int n;
     printf("Entrez le nombre d'elements: \n");
     scanf("%d", &n);

    int elements[n];

    for(int i = 0; i < n; i++){
        printf("Entrez l' element %d :\n", i +1);
        scanf("%d", &elements[i]);
    }
        int r, s = 0;
        printf("Entrez l'element a rechercher : \n");
        scanf("%d", &r);
    for(int i = 1 ; i < n ; i++){
      if ( elements[i] == r){
        printf("L' element  rechercher est : \n");
        printf("L'element %d : \n%d \n", i+1 , elements[i]);
        s = 1;
      }
        
    }
    if(s == 0){
         printf("Element introuvable.\n");
    }
     
}

void challengeXI(){

    int n;
     printf("Entrez le nombre d'elements: \n");
     scanf("%d", &n);

    int elements[n];

    for(int i = 0; i < n; i++){
        printf("Entrez l' element %d :\n", i +1);
        scanf("%d", &elements[i]);
    }
        int r, s = 0;
        printf("Entrez l'element a mettre a jour : \n");
        scanf("%d", &r);

    for(int i = 1 ; i < n ; i++){
      if ( elements[i] == r){
            int nouvellevaleur;
            printf("Entrez la nouvelle valeur: \n");
            scanf("%d",&nouvellevaleur);    
            elements[i] = nouvellevaleur;
            s = 1;
      }    
    }

    if(s == 0){
         printf("Element introuvable.\n");
    }else {
       for(int i = 0 ; i < n ; i++){
        printf("Element %d : \n%d \n", i+1 , elements[i]);
        
    }
        
    }  
}

void challengeXII(){

     int n;
     printf("Entrez le nombre d'elements: \n");
     scanf("%d", &n);

    int elements[n];

    for(int i = 0; i < n; i++){
        printf("Entrez l' element %d :\n", i +1);
        scanf("%d", &elements[i]);
    }

    int  s = 0;
    printf("Les elements pais :\n" );
    for (int i = 0; i < n; i++) {
        if(elements[i] % 2 == 0){
             printf("Element %d : \n%d \n", i+1 , elements[i]);
            s = 1;
        }
    }

     if(s == 0){
         printf("Pas d'element pair.\n");
     }
}

void challengeXIII(){

    int n;
     printf("Entrez le nombre d'elements: \n");
     scanf("%d", &n);

    int elements[n];

    for(int i = 0; i < n; i++){
        printf("Entrez l' element %d :\n", i +1);
        scanf("%d", &elements[i]);
    }

    int  s = 0;
    printf("Les elements impais :\n" );
    for (int i = 0; i < n; i++) {
        if(elements[i] % 2 == 1){
             printf("Element %d : \n%d \n", i+1 , elements[i]);
            s = 1;
        }
    }

     if(s == 0){
         printf("Pas d'element impair.\n");
     }
}

void challengeXIV(){

    int n = 0;
    do {
        printf("Entrez le nombre d'elements: \n");
        scanf("%d", &n);

        int elements[n];

        for(int i = 0; i < n; i++){
            printf("Entrez l' element %d :\n", i +1);
            scanf("%d", &elements[i]);
        }

        int s = 0;
        for(int i = 0; i < n; i++){
            s += elements[i];
        }
        float m ;
        if (n != 0) {
            m = (float)s / n;
            printf("La moyenne des elements est : %.2f", m);
        }else {
         printf("veuillez saisir les elemnts.\n");
        }
    } while (n == 0);
}

void challengeXV(){

    int n = 0 ,n2 = 0;

    printf("Entrez le nombre des premiers elements : \n");
    scanf("%d", &n);

    int elements[n];

    printf("Entrez les premiers elements : \n");

    for(int i = 0; i < n; i++){
        printf("Entrez l' element %d :\n", i +1);
        scanf("%d", &elements[i]);
    }
    printf("Entrez les deuxiemes elements \n");
    printf("Entrez le nombre des deuxiemes elements: \n");
    scanf("%d", &n2);

    int elements2[n2];

    for(int i = 0; i < n2; i++){
        printf("Entrez l' element %d :\n", i +1);
        scanf("%d", &elements2[i]);
    }
    
    int fusion[n + n2];
    for(int i = 0; i < n ; i++){
        fusion[i] = elements[i];
        
    }
    int j = 0;
     for(int i = n; i < n + n2 ; i++){
        fusion[i] = elements2[j];
        j++;
    }
    printf("Les elments fusionner : \n");
    for(int i = 0 ; i < n + n2 ; i++){
        printf("Element %d : \n%d \n", i+1 , fusion[i]);
        
    }
}


int main(){
    
    int choix;
         do {
            
            printf("\nExercices sur les Tableaux en C:\n");
            printf("1.  Saisie et Affichage des elements.");
            printf("2. Somme des elements.\n");
            printf("3. Rechercher un livre.\n");
            printf("4. Trouver le Maximum.\n");
            printf("5. Trouver le Minimum.\n");
            printf("6. Multiplication des elements.\n");
            printf("7. Tableau en Ordre Croissant.\n");
            printf("8. Copie d'un Tableau.\n");
            printf("9. Inversion d'un Tableau.\n");
            printf("10. Rechercher un elements.\n");
            printf("11. Remplacer un elements.\n");
            printf("12. Afficher les elements Paire.\n");
            printf("13. Afficher les elements Impairs.\n");
            printf("14. Calculer la Moyenne.\n");
            printf("15.  Fusion de Deux Tableaux.\n");
            printf("0. Quitter\n");
            printf("Choisissez une option: ");
            scanf("%d", &choix);

            switch (choix)
            {
                case 1:
                    challengeI(); // Call the function
                    break;
                case 2:
                    challengeII(); // Call the correct function for option 2
                    break;
                case 3:
                    challengeIII(); // Call the correct function for option 3
                    break;
                case 4:
                    challengeIV();
                    break;
                case 5:
                    challengeV();
                    break;
                case 6:
                    challengeVI();
                    break;
                case 7:
                    challengeVII();
                    break;
                case 8:
                    challengeVIII();
                    break;
                case 9:
                    challengeIX();
                    break;
                case 10:
                    challengeX();
                    break;
                case 11:
                    challengeXI();
                    break;
                case 12:
                    challengeXII();
                    break;
                case 13:
                    challengeXIII();
                    break;
                case 14:
                    challengeXIV();
                    break;
                case 15:
                    challengeXV();
                    break;
            }
            
            
    } while (choix != 0);
    
    return 0;


}

